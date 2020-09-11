#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
	for (int index = 0; index < length; ++index)
		cout << array[index] << " ";
	cout << endl;
}


int main() {

	const int length = 6;

	int array[length] = { 3,5,2,1,4,7 };
	int temp = 0;


	for (int startindex = 0; startindex < length - 1 ; startindex++)
	{
		int largestIndex = startindex;

		for (int currentindex = startindex +1; currentindex < length; currentindex++)
		{
			if (array[largestIndex] < array[currentindex])
			{
				largestIndex = currentindex;
				
			}
			
		}
				//swap two values in the array
		//std::swap(array[smallestIndex], array[startIndex])
		{
			temp = array[largestIndex];
			array[largestIndex] = array[startindex];
			array[startindex] = temp;
		}
		
		printArray(array, length);
	}
	//swap


	printArray(array,length);


	return 0;
}