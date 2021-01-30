#include "Header.h"
#include<fstream>

int main()
{
	Item myItem;
	PackedGroceries myPack;
	FreshGroceries myFresh;
	string n, n1, n2;
	int U;
	int q;
	float p, p1, p_K, pK1;
	int ch = 20;
	float w, w1;
	int choice = 100;
	int c = 10;
	while (choice != 3)
	{
	Menu:
		{
			cout << " \t\t\t\t\tWelcome to Supermarket billing program!\n " << endl;
			cout << "Input 1: Enter data of a product " << endl;
			cout << "Input 2: Customer " << endl;
			cout << "Input 3: Exit " << endl; }
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Input 1: PackedGroceries" << endl;
			cout << "Input 5: FreshGroceries" << endl;
			cin >> c;
			switch (c)
			{
			case 1:
				myItem.Display();
				cin >> n;
				cin >> U;
				myItem = Item(n, U);
				myPack.Display();
				cin >> p;
				cin >> q;
				myPack = PackedGroceries(p, q);
				goto Menu;
				break;
			case 5:
				myItem.Display();
				cin >> n;
				cin >> U;
				myItem = Item(n, U);
				myFresh.Display();
				cin >> p_K;
				cin >> w;
				goto Menu;
				break;
			}
		case 2:
			cout << "Input 7: Buy PackedGroceries" << endl;
			cout << "Input 8: Buy FreshGroceries" << endl;
			cin >> ch;
			switch (ch)
			{
			case 7:
				cout << "List: " << n << endl;
				cout << "UIC " << U << endl;
				cout << "Price of the packet:" << p << endl;
				cout << "Quantity of the left packets: " << q << endl;
				cout << "Type the item which you want to buy: " << endl;
				cin >> n1;
				cout << "Type how many packets you need" << endl;
				cin >> p1;
				cout << "Your transaction is successful" << endl;
				cout << " Goodbye!" << endl;
				break;
			case 8:
				cout << "List: " << n << endl;
				cout << "UIC " << U << endl;
				cout << "Price per Kg: " << p_K << endl;
				cout << "Weight of a product: " << w << endl;
				cout << "Type the item which you want to buy: " << endl;
				cin >> n2;
				cout << "Weight: " << endl;
				cin >> w1;
				cout << "Your transaction is successful" << endl;
				int total_price = p_K * w1;
				cout << "The total price is:" << total_price << endl;
				cout << " Goodbye!" << endl;
				break;
			}
		case 3:
		default:
			cout << " See you! " << endl;
			break;
		}
	}

	system("pause");
	return 0;
}
