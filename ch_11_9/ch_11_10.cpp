// 한클래스로부터 상속을 받을 수 잇다면, 두개 이상의 클래스로부터 상속을 받을 순 없을까?
// 다중 상속

#include <iostream>
using namespace std;

class USBDevice
{
private:
	long m_id;

public:
	USBDevice(long id) : m_id(id) {}

	long getID() { return m_id; }

	void plugAndPlay() {}
};

class NetworkDevice
{
private:
	long m_id;

public:
	NetworkDevice(long id) : m_id(id){}

	long getID() { return m_id; }

	void networking() {}
};

class USBNetworkDevice : public USBDevice, public NetworkDevice // 다중 상속
{
public:
	USBNetworkDevice(long usb_id, long net_id)
		: USBDevice(usb_id), NetworkDevice(net_id)
	{}
};

int main()
{
	USBNetworkDevice my_device(3.1421, 6.0222);

	my_device.networking();
	my_device.plugAndPlay();

	//my_device.getID(); // 문제 발생
	//해결법
	my_device.USBDevice::getID();
	my_device.NetworkDevice::getID();

	return 0;


}