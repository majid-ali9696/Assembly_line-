#include<conio.h>
#include<string.h>
#include<iostream>
#include<time.h>
using namespace std;


void main(){
	//we declare three arrays as assembly lines. whose values show the time taken at each station .i.e the indexes are stations

	int a[5], b[5], c[5];
	int val;
	//a random function is used to initialize the arrays.

	for (int i = 0; i < 10; i++){

		val = rand() % 10 + 1;
		if (val >= 7){
			a[i] = 100;
		}
		else{

			a[i] = val;

		}
	}
	for (int i = 0; i < 5; i++){

		val = rand() % 10 + 1;
		if (val >= 7){
			b[i] = 100;
		}
		else{

			b[i] = val;

		}
	}
	for (int i = 0; i < 5; i++){

		val = rand() % 10 + 1;
		if (val >= 7){
			c[i] = 100;
		}
		else{

			c[i] = val;

		}




	}
	cout << "no  Assembly line 1      Assembly line 2      Assembly line 3  " << endl;
	for (int i = 0; i < 5; i++)
	{  
		cout << "(" << i+1 << ")"<<"\t";
		cout << a[i] << "\t \t \t";
		cout << b[i] << "\t \t \t";
		cout << c[i] << "\t";
		cout << endl;

	}
	cout << endl;
	cout << "the optimal path find is " << endl;
	cout << endl;

	for (int i = 0; i < 5; i++)
	{

		if (a[i] != 100 && a[i] <= b[i] && a[i] <= c[i])
		{
			cout << "station '" << i+1 << "' of assembly line 1" << endl;

		}

		else if (b[i] != 100 && b[i] <= a[i] && b[i] <= c[i])
		{
			cout << "station '" << i+1<< "' of assembly line 2" << endl;

		}

		else if (c[i] != 100 && c[i] <= a[i] && c[i] <= b[i])
		{
			cout << "station '" << i+1 << "' of assembly line 3" << endl;

		}





		
	}
	_getch();
}