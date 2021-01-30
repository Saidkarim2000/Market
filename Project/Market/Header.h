#include<iostream>
#include<string>
using namespace std;

class Item // Base class
{
private:
	string name;
	int UIC;

public:
	Item() //default constructor
	{
		setName("Tomato");
		setUIC_n(59317);

	};
	Item(string n, int U) //parametrized constructor
	{
		setName(n);
		setUIC_n(U);

	};

	/* get and functions, which allows us to use data members inside private access*/
	string getName() { return name; }
	void setName(string n) { name = n; }
	int getUIC_n() { return UIC; }
	void setUIC_n(int U) { UIC = U; }

	void Display() // function which displays
	{

		cout << "Enter the name of product: " << endl;
		cout << "Enter Universal Item Code:" << endl;


	}
	void Input() // function to input the data
	{
		cin >> name;
		cin >> UIC;
	}
	void bill() {};

};

// Derived class
class PackedGroceries : public Item   // Inheritance
{
private:
	float pfop = 0.75;
	int quan = 20;


public:
	PackedGroceries() //default constructor
	{
		setpfop(0.75);
		setquan(20);
	};
	PackedGroceries(float p, int q) //Parametrized constructor
	{
		setpfop(p);
		setquan(q);
	}

	/* get and functions, which allows us to use data members inside private access*/
	float getpfop() { return pfop; }
	void setpfop(float p) { pfop = p; }
	int getquan() { return quan; }
	void setquan(int q) { quan = q; }
	void Display()
	{
		cout << "Enter the price for packet: " << endl;
		cout << "Enter how many packets left: " << endl;
	};
	void Input() {};

};

/* Derived class*/
class FreshGroceries : public Item // Inheritance
{
private:
	float weight;
	float p_Kg;
public:
	FreshGroceries() // default constructor
	{
		setweight(2.35);
		setp_Kg(3.0);
	}
	FreshGroceries(float w, float pK) // Parametrized constructor
	{
		setweight(w);
		setp_Kg(pK);
	}

	/* get and functions, which allows us to use data members inside private access*/
	float getweight() { return weight; }
	void setweight(float w) { weight = w; }
	float getp_Kg() { return p_Kg; }
	void setp_Kg(float pK) { p_Kg = pK; }
	void Display()
	{
		cout << "Price of one kg: " << endl;
		cout << "Product's weight " << endl;
	};
	void Input() {};
};

