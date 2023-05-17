#include <iostream>
#include "Test.h"

using namespace std;


//standart sorting
void print(vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sort() {
	system("cls");
	int n = 5;
	cout << "Selection sort\n\n";
	vector<int> arr;
	cout << "Source array:\n";
	fill_random(arr, n);
	print(arr);
	selection_sort(arr);
	cout << "Sorted array:\n";
	print(arr);

	cout << "\n\nQuick sort\n\n";
	vector<int> arr2;
	cout << "Source array:\n";
	fill_random(arr2, n);
	print(arr2);
	Quick_sort(arr2, 0, n - 1);
	cout << "Sorted array:\n";
	print(arr2);
	next_programm();
}
int menu() {
	int key;
	while (true) {
		system("cls");
		cout << "\n\tTest random arrays        - [ 1 ]";
		cout << "\n\tTest sorted arrays        - [ 2 ]";
		cout << "\n\tTest reverse sorted array - [ 3 ]";
		cout << "\n\tCheck sort                - [ 4 ]";
		cout << "\n\tExit                      - [esc]";
		key = _getch();
		if (key == 27 || key == 49 || key == 50 || key == 51 || key == 52) { return key; }
	}
}

int main() {
	setlocale(LC_ALL, "ru");
Menu:
	system("cls");
	int menu_ = menu();
	switch (menu_)
	{
	case 49:
		test_random();
		goto Menu;
	case 50:
		test_sorted_array();
		goto Menu;
	case 51:
		test_reverse_sorted_array();
		goto Menu;
	case 52:
		sort();
		goto Menu;
	case 27:
		break;
	}
}
//======RANDOM======
// Test Quick sort:
// 1000 Values in array - Number of comparisons : 5735      Number of copying objects : 2581
// 2000 Values in array - Number of comparisons : 12404     Number of copying objects : 5633
// 3000 Values in array - Number of comparisons : 19442     Number of copying objects : 8864
// 4000 Values in array - Number of comparisons : 26660     Number of copying objects : 12185
// 5000 Values in array - Number of comparisons : 34081     Number of copying objects : 15611
// 6000 Values in array - Number of comparisons : 41654     Number of copying objects : 19114
// 7000 Values in array - Number of comparisons : 49272     Number of copying objects : 22637
// 8000 Values in array - Number of comparisons : 56967     Number of copying objects : 26201
// 9000 Values in array - Number of comparisons : 64833     Number of copying objects : 29839
// 10000 Values in array - Number of comparisons : 72718    Number of copying objects : 33505
// 25000 Values in array - Number of comparisons : 197109   Number of copying objects : 91411
// 50000 Values in array - Number of comparisons : 417599   Number of copying objects : 194508
// 100000 Values in array - Number of comparisons : 881515  Number of copying objects : 412154


// Test Selection sort :
// 1000 Values in array - Number of comparisons : 499500    Number of copying objects : 1000
// 2000 Values in array - Number of comparisons : 1999000   Number of copying objects : 2000
// 3000 Values in array - Number of comparisons : 4498500   Number of copying objects : 3000
// 4000 Values in array - Number of comparisons : 7998000   Number of copying objects : 4000
// 5000 Values in array - Number of comparisons : 12497500  Number of copying objects : 5000
// 6000 Values in array - Number of comparisons : 17997000  Number of copying objects : 6000
// 7000 Values in array - Number of comparisons : 24496500  Number of copying objects : 7000
// 8000 Values in array - Number of comparisons : 31996000  Number of copying objects : 8000
// 9000 Values in array - Number of comparisons : 40495500  Number of copying objects : 9000
// 10000 Values in array - Number of comparisons : 7045327  Number of copying objects : 10000
// 25000	Values in array - Number of comparisons : 312487500  Number of copying objects : 25000
// 50000	Values in array - Number of comparisons : 1249975000 Number of copying objects : 50000
// 100000 Values in array - Number of comparisons : 499950000  Number of copying objects : 100000

//======SORTED=======

// Test sorted array Quick:
// 1000Values in array - Number of comparisons : 1022       Number of copying objects : 511
// 2000Values in array - Number of comparisons : 2046       Number of copying objects : 1023
// 3000Values in array - Number of comparisons : 3952       Number of copying objects : 1976
// 4000Values in array - Number of comparisons : 4094       Number of copying objects : 2047
// 5000Values in array - Number of comparisons : 5904       Number of copying objects : 2952
// 6000Values in array - Number of comparisons : 7904       Number of copying objects : 3952
// 7000Values in array - Number of comparisons : 8190       Number of copying objects : 4095
// 8000Values in array - Number of comparisons : 8190       Number of copying objects : 4095
// 9000Values in array - Number of comparisons : 9808       Number of copying objects : 4904
// 10000Values in array - Number of comparisons : 11808     Number of copying objects : 5904
// 25000Values in array - Number of comparisons : 32766     Number of copying objects : 16383
// 50000Values in array - Number of comparisons : 65534     Number of copying objects : 32767
// 100000Values in array - Number of comparisons : 131070   Number of copying objects : 65535

// Test sorted array Selection:
// 1000Values in array - Number of comparisons : 499500     Number of copying objects : 1000
// 2000Values in array - Number of comparisons : 1999000    Number of copying objects : 2000
// 3000Values in array - Number of comparisons : 4498500    Number of copying objects : 3000
// 4000Values in array - Number of comparisons : 7998000    Number of copying objects : 4000
// 5000Values in array - Number of comparisons : 12497500   Number of copying objects : 5000
// 6000Values in array - Number of comparisons : 17997000   Number of copying objects : 6000
// 7000Values in array - Number of comparisons : 24496500   Number of copying objects : 7000
// 8000Values in array - Number of comparisons : 31996000   Number of copying objects : 8000
// 9000Values in array - Number of comparisons : 40495500   Number of copying objects : 9000
// 10000Values in array - Number of comparisons : 49995000  Number of copying objects : 10000
// 25000Values in array - Number of comparisons : 312487500 Number of copying objects : 25000
// 50000Values in array - Number of comparisons : 1249975000        Number of copying objects : 50000
// 100000Values in array - Number of comparisons : 4999950000       Number of copying objects : 100000

//===REVERSE SORTED=====

//1000Values in array - Number of comparisons : 499500     Number of copying objects : 1000
//2000Values in array - Number of comparisons : 1999000    Number of copying objects : 2000
//3000Values in array - Number of comparisons : 4498500    Number of copying objects : 3000
//4000Values in array - Number of comparisons : 7998000    Number of copying objects : 4000
//5000Values in array - Number of comparisons : 12497500   Number of copying objects : 5000
//6000Values in array - Number of comparisons : 17997000   Number of copying objects : 6000
//7000Values in array - Number of comparisons : 24496500   Number of copying objects : 7000
//8000Values in array - Number of comparisons : 31996000   Number of copying objects : 8000
//9000Values in array - Number of comparisons : 40495500   Number of copying objects : 9000
//10000Values in array - Number of comparisons : 49995000  Number of copying objects : 10000
//25000Values in array - Number of comparisons : 312487500 Number of copying objects : 25000
//50000Values in array - Number of comparisons : 1249975000        Number of copying objects : 50000
//100000Values in array - Number of comparisons : 4999950000       Number of copying objects : 100000
//
//test_reverse_sorted_array - Quick :
//	1000Values in array - Number of comparisons : 2488       Number of copying objects : 1989
//	2000Values in array - Number of comparisons : 4976       Number of copying objects : 3977
//	3000Values in array - Number of comparisons : 7092       Number of copying objects : 5593
//	4000Values in array - Number of comparisons : 9952       Number of copying objects : 7953
//	5000Values in array - Number of comparisons : 12952      Number of copying objects : 10453
//	6000Values in array - Number of comparisons : 14188      Number of copying objects : 11189
//	7000Values in array - Number of comparisons : 16904      Number of copying objects : 13405
//	8000Values in array - Number of comparisons : 19904      Number of copying objects : 15905
//	9000Values in array - Number of comparisons : 22904      Number of copying objects : 18405
//	10000Values in array - Number of comparisons : 25904     Number of copying objects : 20905
//	25000Values in array - Number of comparisons : 58616     Number of copying objects : 46117
//	50000Values in array - Number of comparisons : 117232    Number of copying objects : 92233
//	100000Values in array - Number of comparisons : 234464   Number of copying objects : 184465
