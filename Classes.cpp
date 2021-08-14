
// 1
/*
#include <iostream>
using namespace std;


class Pet {
private:
	string name;
	string animal;
	int age;
public:
	Pet(string name1, string animal1, int age1);
	void setName(string name1);
	void setAnimal(string animal1);
	void setAge(int age1);
	string getName();
	string getAnimal();
	int getAge();	
};

Pet::Pet(string name1, string animal1, int age1) {
     name = name1;
	 animal = animal1;
	 age = age1;
}

void Pet::setName(string name1) {
	name = name1;
}

void Pet::setAnimal(string animal1) {
	animal = animal1;
}

void Pet::setAge(int age1) {
	age = age1;
}

string Pet::getName() {
	return name;
}
string Pet::getAnimal() {
	return animal;
}
int Pet::getAge() {
	return age;
}


int main() {
	Pet dog = { "Labrador ","Dog", 1};
	cout << "Name: " << dog.getName() << endl;
	cout << "Animal: " << dog.getAnimal() << endl;
	cout << "Age: " << dog.getAge() << endl;
}
*/


//2
/*
#include <iostream>
using namespace std;

class Car {
private:
	int year;
	string make;
	double speed;
public:
	Car(int year1, string make1, double speed1);
	int getYear();
	string getMake();
	double getSpeed();
};

Car::Car(int year1, string make1, double speed1) {
	year = year1;
	make = make1;
	speed = speed1;
}

int Car::getYear() {
	return year;
}
string Car::getMake() {
	return make;
}
double Car::getSpeed() {
	return speed;
}


int main() {
	Car toyota = { 2016," Toyota ",260 };
	cout << "Name: " << toyota.getMake() << endl;
	cout << "Year: " << toyota.getYear() << endl;
	cout << "Speed: " << toyota.getSpeed() << endl;
}
*/


//3 ???
/*
#include <iostream>
using namespace std;

 class Author
{
private:
	string firstName;
	string lastName;
public:
	Author();
	Author(string firstName1,string lastName1);
	void setFirstName(string firstName1);
	void setLastName(string lastName1);
	string getFirstName();
	string getLastName();
	void toString();
};
Author::Author(string firstName1, string lastName1) {
	firstName = firstName1;
	lastName = lastName1;
}
void Author::setFirstName(string firstName1) {
	firstName = firstName1;
}
void Author::setLastName(string lastName1) {
	lastName = lastName1;
}
string Author::getFirstName() {
	return firstName;
}
string Author::getLastName() {
	return lastName;
}
void Author::toString() {
	cout << firstName << " " << lastName << endl;
}



class Book
{
private:
	string title;
	string author;
	double price;
public:
	Book(string title1, string author1, double price1);
	void setTitle(string title1);
	void setAuthor(string author1);
	void setPrice(double price1);
	string getTitle();
	string getAuthor();
	void toString(); // print out book details to the screen
};

Book::Book(string title1, string author1, double price1){
	title = title1;
	author = author1;
	price = price1;
}

void Book::setTitle(string title1) {
	title = title1;
}

void Book::setAuthor(string author1) {
	author = author1;
}

void Book::setPrice(double price1) {
	price = price1;
}

string Book::getTitle() {
	return title;
}
string Book::getAuthor() {
	return author;
}

void Book::toString() {
	cout << "Title:  " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Price:  " << price << endl;
}

int main() {
	Book ob = { "Developing Java Software", " Russel Winderand ", 79.75 };
	ob.toString();
}
*/
