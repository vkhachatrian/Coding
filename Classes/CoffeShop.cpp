#include <iostream>
#include <cstring>
using namespace std;

#define size 100
#define orderSize 10


struct MenuItem
{
	string nameOfItems;
	string type;
	double price;
};




class CoffeShop
{
private:
	string nameofshop;
	MenuItem m_menu[size];
	string orders[orderSize];

	int ordersCount;
	int m_currentMenuSize;
public:

	CoffeShop() { ordersCount = 0; m_currentMenuSize = 0; }

	void addOrder(string name); // adds the name of the item to the end of the orders array
							   // if it exists on the menu. Otherwise, 
							   // return "This item is currently unavailable!"
	void fulfillOrder();  // if the orders array is not empty, return "The {item} is ready!".
						  //  If the orders array is empty,
						  // return "All orders have been fulfilled!"

	void listOfOrders(); // returns the list of orders taken, otherwise, an empty array.

	double dueAmount(); // returns the total amount due for the orders taken.

	void cheapestItem(); // returns the name of the cheapest item on the menu.

	void drinksOnly(); // returns only the item names of type drink from the menu.

	void foodOnly(); // returns only the item names of type food from the menu.

	void setItemToMenu(MenuItem obj);

};

void CoffeShop::setItemToMenu(MenuItem obj)
{
	if (m_currentMenuSize >= size) {
		cout << "Menu is full!";
		return;

	}
	m_menu[m_currentMenuSize++] = obj;
	//m_currentMenueSize++;
}



void CoffeShop::addOrder(string name)
{
	if (ordersCount >= orderSize) {
		cout << "Order is full!";
		return;

	}

	bool isTrue = false;
	for (int i = 0; i < size; i++)
	{
		if (name == m_menu[i].nameOfItems) {

			orders[ordersCount] = m_menu[i].nameOfItems;
			ordersCount++;
			isTrue = true;
			break;
		}
	}
	if (!isTrue)
	{
		cout << "This item is currently unavailable!" << endl;
	}

}
void CoffeShop::listOfOrders()
{
	for (int i = 0; i < ordersCount; i++)
	{
		cout << orders[i] << endl;
	}
	if (!ordersCount)
		cout << "array is empty" << endl;


}


void CoffeShop::fulfillOrder()
{
	for (int i = 0; i < ordersCount; i++)
	{
		cout << "The Item " << orders[i] << " is ready! " << endl;
	}
	if (!ordersCount)
		cout << "All orders have been fulfilled!" << endl;
}


void CoffeShop::drinksOnly() 
{
	for (int i = 0; i < size; i++) {
		if (m_menu[i].type == "drinksOnly")
			cout << m_menu[i].nameOfItems << endl;
	}
}

void CoffeShop::foodOnly()
{
	for (int i = 0; i < size; i++)
	{
		if (m_menu[i].type == "foodonly")
			cout << m_menu[i].nameOfItems << endl;
	}
}

double CoffeShop::dueAmount()
{
	double total = 0.0;
	for (int i = 0; i < ordersCount; i++)
	{
		total += m_menu[i].price;
	}
	return total;
}

void CoffeShop::cheapestItem()
{
	double min = m_menu[0].price;
	int index = 0;
	for (int i = 1; i < ordersCount; i++)
	{
		if (min > m_menu[i].price)
		{			
			index = i;
		}
	}
	cout << " Cheapest Item is " << m_menu[index].nameOfItems << endl;
}





int main()
{

	MenuItem obj,obj2;
	obj.nameOfItems = "Pepsi";
	obj.type = "drinksOnly";
	obj.price = 300;
	obj2.nameOfItems = "Cola-Cola";
	obj2.type = "drinksOnly";
	obj2.price = 580;
	CoffeShop shop;
	shop.setItemToMenu(obj);
	shop.setItemToMenu(obj2);
	shop.addOrder("Pepsi");
	shop.addOrder("Cola-Cola");
	double a = shop.dueAmount();
	shop.cheapestItem();
	cout << a;
	

	return 0;
}