#include <iostream>
using namespace std;

void print_tabs(int n)
{
	for(int i = 0; i < n; i++){
		cout << "\t"; // prints a tab
	}
}

void go_to_sleep(string *animals, int index, int total)
{
	if(total == 1){
		cout << "a little " << *(animals + index) << "\n";
		print_tabs(index);
		cout << "...who fell asleep.\n";
		return;
	}

	if(index == 0){
		cout << "A little " << *(animals + index)
			 << " couldn't sleep, so her mother told a story about";
	} else {
		cout << "a little " << *(animals + index) << "\n";
		print_tabs(index);
	 	cout << " who couldn't sleep, so the "
	 	     << *(animals + index) << "'s mother told a story about ";
	}

	go_to_sleep(animals, index + 1, total - 1);

	print_tabs(index);
	cout << "...and the little " << *(animals + index)
	     << " fell asleep.\n";
}

int main() 
{
	string animals[4] = {"child", "frog", "bear", "weasel"};
	go_to_sleep(animals, 0 , 4);
	return 0;
}
