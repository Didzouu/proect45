

#include <iostream>
#define SIZE 10
#define SQR(x) x*x
#define CUBE(y) y*y*y
using namespace std;


template<typename T >
//T min(T a, T b) {
//	return(a < b) ;
//}
//T Values(T a, T b) {
//	T temp = a;
//	a = b;
//	b = temp;
//	cout << "a = b = " << Values( a, b) << endl;
//}
//

T sum(T arr[], int size) {
	T sum = 0;
	
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}return sum;
}

int main()
{


	int arr[] = { 1,2,3,4,5,6,7,8,9 }; int sizeint = sizeof(arr) / sizeof(arr[0]);
	cout << "Sum of nums : " <<sum(arr,sizeint)<< endl;

	double arr1[] = { 1.2,3.4,6.2
	};
	int sizedouble = sizeof(arr1) / sizeof(arr1[0]);
	cout << "Sum of numbers 2 : " << sum(arr1,sizedouble)<<endl;

	float arr3[] = { 1.5,9.3,2.1,4,6 };
	int size3 = sizeof(arr3)/sizeof(arr3[0]);
	cout << "Sum of float nums : " <<sum(arr3,size3)<< endl;
	/*int a = 5, b = 10;
	cout << "REsult : a = " << a <<"b = "<<b << endl;
	cout << "After : a = " << a << "b = " << b << endl;

double c = 3.14,d = 1.5;
	cout << "REsult : a = " << c << "b = " << d<< endl;
	cout << "After : a = " << c << "b = " << d << endl;*/
	/*int a=10,b=30;
	cout << "Minimum : " << min(a, b) << endl;*/
	
	
	
}

