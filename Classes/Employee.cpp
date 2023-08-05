#include <iostream>
using namespace std;
using std::string;

class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};




class Employee:AbstractEmployee {
private:
	string Company;
	int Age;
protected:
	string Name;
public:
	void set_name(string name) {
		Name = name;
	}

	string get_name() {
		return Name;
	}
	void set_company(string company) {
		Company = company;
	}

	string get_company() {
		return Company;
	}

	void set_age(int age) {
		if (age >= 18) {
			Age = age;
		}
		else cout << " Must be higher than 18 ";
	}

	int get_age() { return Age; }

	void IntoduceYourself() {
		cout << " Name - " << Name << endl;
		cout << " Company - " << Company << endl;
		cout << " Age - " << Age << endl;
	}

	Employee(string name,string company,int age) {
		Name = name;
		Company = company;
		Age = age;		
	}

	void AskForPromotion() {
		if (Age >= 30) {
			cout << Name << " Got promoted! " << endl;
		}
		else {
			cout << Name << " Sorry No promotion for you! " << endl;
		}
	}

	virtual void Work() {
		cout << Name << " is cheching e-mail, task backlog, performing tasks... " << endl;
	}


};

class Developer:public Employee {
public:
	string FavouriteProgrammingLanguange;
	Developer(string name, string company, int age, string favouriteProgrammingLanguange)
		:Employee(name, company, age)
	{
		FavouriteProgrammingLanguange = favouriteProgrammingLanguange;
	}
	void FixBug() {
		cout << Name << " Fixed bug using " << FavouriteProgrammingLanguange << endl;
	}
	/*void Work() {
		cout << Name << " is writing " << FavouriteProgrammingLanguange << " code " <<   endl;
	}*/
};

class Teacher:public Employee {
public:
	string Subject;
	void PrepareLesson() {
		cout << Name << " Is preparing " << Subject << " lesson " << endl;
	}
	Teacher(string name, string company, int age, string subject)
		:Employee(name, company, age)
	{
		Subject = subject;
	}

	void Work() {
		cout << Name << " is teaching " << Subject << " lesson " << endl;
	}
};


int main(){
	Developer d = Developer("Vahan", "Amazon", 20, "C++");
	Teacher t = Teacher("Hayk", " Number 142 ", 20, " English ");

	Employee* e1 = &d;
	Employee* e2 = &t;
	e1->Work();
	e2->Work();












	return 0;
}