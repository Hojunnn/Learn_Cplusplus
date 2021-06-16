// Composition이나 Aggregation은 어느 한 쪽이 확실히 주가되고 다른 한쪽이 부품, part의 역할을 수행함
// Association 관계에서는 어느쪽이 주가되고 어느쪽이 부가되는지 확실하지 않은 경우

//제휴 관계에서는 아래 코드와 같이 Patients와 Doctor 클래스에서 상대를 멤버로 가지고 있음

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Doctor; // forward declaration

class Patient{
private:
	string m_name;
	vector<Doctor*> m_doctors;

public:
	Patient(string name_in)
		:m_name(name_in)
	{}

	void addDoctor(Doctor * new_doctor)
	{
		m_doctors.push_back(new_doctor);
	}
	void meetDoctors();
	
	friend class Doctor; //friend를 만들면 멤버를 직접 접속할 수 있음 

};

class Doctor
{
private:
	string m_name;
	vector<Patient*>m_patients;

public:
	Doctor(string name_in)
		:m_name(name_in)
	{}

	void addPatient(Patient * new_patient)
	{
		m_patients.push_back(new_patient);
	}

	void meetPatients()
	{
		for (auto & ele : m_patients)
		{
			cout << "Meet patient : " << ele->m_name << endl;
		}
	}

	friend class Patient; //friend를 만들면 멤버를 직접 접속할 수 있음 
};

void Patient::meetDoctors()
{
	for (auto & ele : m_doctors)
	{
		cout << "Meet doctor : " << ele->m_name << endl;
	}
}

int main()
{
	Patient *p1 = new Patient("Jack Jack");
	Patient *p2 = new Patient("Dash");
	Patient *p3 = new Patient("Violet");

	Doctor *d1 = new Doctor("Doctor K");
	Doctor *d2 = new Doctor("Doctor L");

	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	// patient meet doctors
	p1->meetDoctors();
	p2->meetDoctors();
	
	// doctors meet patients
	d1->meetPatients();
	d2->meetPatients();

	//deletes
	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;
}