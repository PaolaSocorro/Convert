/*
Program: converter.cpp
Author:  Paola Socorro
Project:   Project 3
Date:    May 15, 2014
*/

#include <iostream>
#include <string>

using namespace std;

/*
Converts from Decimal to binary
*/
int binaryNum [32];
void DecToBinary(int num)
{
	int bits = 32;
	//cout<<bits<<'\n';
	for(int i=0; i<bits;i++)
	{
		if (num == 0)
			//cout<< "0";
			binaryNum[i]=0;
		if (num == 1)
			//cout<< "1";
			binaryNum[i]=1;
		if(num % 2==0)
		{
			num=num/2 ;
			binaryNum[i]=0;
			//cout<< "0";
		}
		else 
		{
			num=num/2 ;
			binaryNum[i]=1;
			//cout<< "1";
		}
	}
	for(int i= 32; i>=0;i--)
	{
		cout<<binaryNum[i];
	}
	cout<<'\n';
}


void BinToDecimal(int num)
{
	int dec=0, rem, base=1;

	while(num>0)
	{
		rem = num%10;
		dec = dec+rem*base;
		base = base*2;
		num=num/10;
	}
	cout<<dec<<endl;
}

void main()
{
	int decNum;
	int bin;
	//int p2[32]; //powers of 2 array. 
	int x;
	cout<<"Enter 1: Decimal to Binary, 2: Binary to Decimal, 0:Exit"<<endl;
	cin>>x;
	while(x!=0)
	{
		if(x!=0 && x==1)
		{
			cout<<"Enter a decimal number to convert to binary "<<endl;
			cin>>decNum;
			DecToBinary(decNum);
			cout<<'\n';
			cout<<"Enter 1: Decimal to Binary, 2: Binary to Decimal, 0:Exit"<<endl;
			cin>>x;
		}

		if(x!=0 && x==2)
		{
			cout<<"Enter a binary number to convert "<<endl;
			cin>>bin;
			BinToDecimal(bin);
			cout<<'\n';
			cout<<"Enter 1: Decimal to Binary, 2: Binary to Decimal, 0:Exit"<<endl;
			cin>>x;
		}
		//cout<<"Enter 1: Decimal to Binary, 2: Binary to Decimal, 0:Exit"<<endl;
		//cin>>x;
	}
}