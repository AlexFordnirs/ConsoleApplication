// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class D3 {
private:
	int		x_;
	int		y_;
	int  	z_;
	int jo = 0;
	char	name_;
	char g1[50];
	char g2[50];
	char g3[50];
	char g4[50];
	int hh;
public:
	
	D3()
	{
		x_ = 0;
		y_ = 0;
		z_ = 0;
	}

	void print()
	{
		for (int i=0;i<hh;i++)
		{
			cout << g4[i] << " (" << g1[i] << ","
				<< g2[i] << ","
				<< g3[i] << ")" << endl;
		}
		/*cout <<name_<<" ("<< x_ <<","
			<< y_ <<","
			<< z_ <<")"<< endl;*/
	}
	void print1()
	{
		for (int i = 0; i<hh; i++)
		{
			cout << g4[i] << " (" << g1[i] << ","
				<< g2[i] << ")" << endl;
		}
	/*	cout <<name_<<" ("<< x_ << ","
			<< y_ << ")" << endl;*/
	}
	void print2()
	{
		for (int i = 0; i<hh; i++)
		{
			jo = g1[i];
			cout << g4[i] << " (" << jo << ")" << endl;
		}
		//cout <<name_<<" ("<< x_ << ")" << endl;
	}

	D3(int x, int y, int c, char name, char tt1[50], char tt2[50], char tt3[50], char tt4[50], int h)
	{
		/*x_ = x;
		y_ = y;
		z_ = c;
		name_ = name;*/
		for (int i = 0; i < h; i++)
		{
			g1[i] = tt1[i];
			g2[i] = tt2[i];
			g3[i] = tt3[i];
			g4[i] = tt4[i];
		}
		hh = h;

	}
	D3(int x, int y, char name, char tt1[50], char tt2[50], char tt4[50], int h)
	{
		/*x_ = x;
		y_ = y;
		name_ = name;*/
		for (int i = 0; i < h; i++)
		{
			g1[i] = tt1[i];
			g2[i] = tt2[i];
			g4[i] = tt4[i];
		}
		hh = h;
	}
	D3(int x, char name, char tt1[50],  char tt4[50], int h)
	{
	//	x_ = x;
		//name_ = name;
		for (int i = 0; i < h; i++)
		{
			g1[i] = x;
			g4[i] = tt4[i];
		}

		hh = h;
	}
	~D3()
	{

	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	int q, w, e, r, t, y, u;
	int g;
	char name;
	int size = 50;
	char * t1 = new char [size];
	char * t2=new char[size];
	char * t3=new char[size];
	char * t4=new char[size];
	int h = 0;
	cout << "Введите 1 для ввода 3 точек, 2 для 2 точек, 3 для 1 точки, 4 Exit" << endl;
	cin >> g;
	switch (g)
	{
	case 1:
	{
		cout << "Кол во точек" << endl;
		cin >> h;
		for (int i = 0; i < h; i++)
		{
			cout << "Ввдетие q.w.e and Name tochki" << endl;
			cin >> q;
			cin >> w;
			cin >> e;
			cin >> name;
			t1[i] = q;
			t2[i] = w;
			t3[i] = e;
			t4[i] = name;
		} 
		D3 type1(q, w, e, name, t1, t2, t3, t4, h);
		type1.print();
	    
		system("pause");

		system("cls");
		/*delete[] t1;
		delete[] t2;
		delete[] t3;
		delete[] t4;*/
		break;
	}
	case 2:

	{
		cout << "Кол во точек" << endl;
		cin >> h;
		for (int i = 0; i < h; i++)
		{
			cout << "Кол во точек" << endl;
			cout << "Ввдетие q.w. and Name tochki" << endl;
			cin >> q;
			cin >> w;
			cin >> name;
			t1[i] = q;
			t2[i] = w;
			t4[i] = name;
		}
		D3 type2(q, w, name, t1, t2, t4, h);
		type2.print1();
 
		system("pause");
		system("cls");
		/*delete [] t1;
		delete[] t2;
		delete[] t4;*/
		break;
	}
	case 3:
	{
		cout << "Кол во точек" << endl;
		cin >> h;
		for (int i = 0; i < h; i++)
		{
			cout << "Кол во точек" << endl;
			cout << "Ввдетие q. and Name tochki" << endl;
			cin >> q;
			cin >> name;
			t1[i] = q;
			t4[i] = name;
		}
			D3 type3(q, name, t1, t4, h);
		
		type3.print2();
	 
		system("pause");
		system("cls");
		/*delete[] t1;
		delete[] t4;*/
		break;
	}
	case 4:
	{
		return 0;
	}
	}
	system("pause");
    return 0;
}

