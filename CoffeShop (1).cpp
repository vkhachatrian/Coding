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
	int m_currentMenueSize;
public:
	
	CoffeShop(){ordersCount =0; m_currentMenueSize =0;}
	
	void addOrder(string name); // adds the name of the item to the end of the orders array
	                           // if it exists on the menu. Otherwise, 
							   // return "This item is currently unavailable!"
	void fulfillOrder();  // if the orders array is not empty, return "The {item} is ready!".
		                  //  If the orders array is empty,
						  // return "All orders have been fulfilled!"

	void listOfOrders(); // returns the list of orders taken, otherwise, an empty array.

	double dueAmount(); // returns the total amount due for the orders taken.

	string cheapestItem(MenuItem obj); // returns the name of the cheapest item on the menu.

	void drinksOnly(MenuItem menu); // returns only the item names of type drink from the menu.

	void foodOnly(); // returns only the item names of type food from the menu.
	
	void setItemToMenue(MenuItem obj);
	
};

oid CoffeShop::setItemToMenue(MenuItem obj)
{
	if(m_currentMenueSize >= size ){
		cout << "Menue is full!";
		return;
		
	}
	m_menu[m_currentMenueSize++] = obj;
	//m_currentMenueSize++;
}



void CoffeShop::addOrder(string name)
{
	if(ordersCount >= orderSize ){
		cout << "Order is full!";
		return;
		
	}
		
	bool isTrue= false;
		for (int i = 0; i < size; i++)
		{
			if(name == m_menu[i].nameOfItems){
				
				orders[ordersCount] = m_menu[i].nameOfItems;
				ordersCount++;
				isTrue = true;
				break;
			}
		}
	if(!isTrue)
	{
		cout << "This item is currently unavailable!" << endl;
	}
	
}
void CoffeShop::listOfOrders()
{
	for(int i = 0;i < ordersCount;i++)
	{
			cout << orders[i] << endl;
	}
	if(!ordersCount)
		cout << "array is empty"<< endl;
	
	
}


void CoffeShop::fulfillOrder()
{
	for (int i = 0; i < orderSize; i++)
	{
		if (orders[i] != "\0")
		{
			cout << " The " << orders[i] << " is ready! " << endl;
			break;
		}
		else
		{
			cout << " All orders have been fulfilled! " << endl;
			break;
		}
	}
}


void CoffeShop::drinksOnly()
{
	for (int i = 0; i < size; i++){
		if(m_menu[i].type == "drinksOnly")
			cout << m_menu[i].nameOfItems;
	}
	
}






int main()
{

MenuItem obj,
obj.nameOfItems = "Pepsi";
obj.type = "drinksOnly";
obj.price = 300;

CoffeShop shop;
shop.setItemToMenue(obj);



	return 0;
}