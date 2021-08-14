#include <iostream>
using namespace std;


class NoteBook {
private:
	int CountOfLists;
	int PriceNoteBook;
	int FilledCountOfLists;
public:
	
	NoteBook() {
		CountOfLists = 0;
		PriceNoteBook = 0;
		FilledCountOfLists = 0;
	}

	NoteBook(int countoflists, int pricenotebook) {
		CountOfLists = countoflists;
		PriceNoteBook = pricenotebook;
	}

	void Set_CountOfLists(int countoflists) {
		CountOfLists = countoflists;
	}
	int Get_CountOfLists() {
		return CountOfLists;
	}
	void Set_PriceNoteBook(int pricenotebook) {
		PriceNoteBook = pricenotebook;
	}
	int Get_PriceNoteBook() {
		return PriceNoteBook;
	}

	void Set_FilledCountOfLists(int filledlists) {
		FilledCountOfLists = filledlists;
	}

	int Get_FilledCountOfLists() {
		return FilledCountOfLists;
	}

	void inputNoteBook(const NoteBook & other) {
		cout << " Enter the Count of lists of notebook " << endl;
		cin >> this->CountOfLists;
		cout << " Enter the price of notebook " << endl;
		cin >> this->PriceNoteBook;
	}

	void outputNoteBook(const NoteBook& other) {
		cout << this->CountOfLists << endl;
		cout << this->PriceNoteBook << endl;
		//cout << this->FilledCountOfLists << endl;
	}

	bool equalNoteBooks(NoteBook& a) {
		if (this->CountOfLists == a.CountOfLists) {
			cout << " The NoteBook are equal " << endl;
		}
		else cout << " The NoteBook are not eqal  " << endl;
	}

	int EmptyLists(){
		int result = 0;
	   result =  CountOfLists - FilledCountOfLists;
	   return result;
	}



};





int main() {

	NoteBook tetr1, tetr2;
	tetr1.Set_CountOfLists(600);
	tetr1.Set_FilledCountOfLists(400);
	cout << " Empty lists = " << tetr1.EmptyLists();




	return 0;
}