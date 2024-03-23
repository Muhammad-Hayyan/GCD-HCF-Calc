#include<iostream>
using namespace std;

int main()
{

		//Program to print that takes input two numbers and find greatest common divisor (GCD) or highest common factor (HCF) of the two numbers 
		
	int n1, n2, min_num, hcf;
	
	cout<<"\nEnter first number: ";
	cin>>n1;
	
	cout<<"\nEnter second number: ";
	cin>>n2;
	
		//checking the lesser number
	if (n1 > n2)
		
		min_num = n2;
	else
		
		min_num = n1;
	
		//Calculating HCF
	do 
	{
		if (n1 % min_num==0 && n2% min_num==0)
		{
			hcf = min_num;
			cout<< "\nHCF of "<<n1<< " and " <<n2<< " is " <<hcf<<endl;
			
			break;								//Gets out of loop if this "if" condition is executed
		}
		
		min_num--;
	}
	while (min_num != 0);
	
	return 0;
}
	
	
