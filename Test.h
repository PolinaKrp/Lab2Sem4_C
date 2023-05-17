#pragma once
#include "sortings.h"

size_t lcg() {
	static size_t x = 0;
	x = (1021 * x + 24631) % 116640;
	return x;
}
void fill_random(vector<int>& arr, int n) {
	for (int i = 0; i < n; i++) {
		arr.push_back(lcg());
	}
}

//random
void test_random_selection_sort(int n) {
	size_t counter_copy = 0;
	size_t counter_comparison = 0;
	stats result;
	for (int i = 0; i < 100; i++) {
		result.comparison_count = 0;
		result.copy_count = 0;
		vector<int>arr;
		fill_random(arr, n);
		selection_sort(arr, result);
		counter_comparison += result.comparison_count;
		counter_copy += result.copy_count;
	}
	cout << n << " Values in array - Number of comparisons: " << counter_comparison / 100 << "\tNumber of copying objects: " << counter_copy / 100;
}

void test_random_quick_sort(int n) {
	size_t counter_copy = 0;
	size_t counter_comparison = 0;
	stats result;
	for (int i = 0; i < 100; i++) {
		result.comparison_count = 0;
		result.copy_count = 0;
		vector<int> arr;
		fill_random(arr, n);
		Quick_sort(arr, 0, arr.size() - 1, result);
		counter_comparison += result.comparison_count;
		counter_copy += result.copy_count;
	}
	cout << n << " Values in array - Number of comparisons: " << counter_comparison / 100 << "\tNumber of copying objects: " << counter_copy / 100;
}


void test_random() {
	system("cls");
	cout << "Test Quick sort:" << endl;
	for (int i = 1000; i <= 10000; i += 1000) {
		test_random_quick_sort(i);
		cout << endl;
	}
	test_random_quick_sort(25000);
	cout << endl;
	test_random_quick_sort(50000);
	cout << endl;
	test_random_quick_sort(100000);
	cout << endl;
	cout << "\n\nTest Selection sort:" << endl;
	for (int i = 1000; i <= 10000; i += 1000) {
		test_random_selection_sort(i);
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;
	next_programm();
}

//sorted array
void test_sorted_array_selection(int n) {
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		arr.push_back(i);
	}
	stats result;
	selection_sort(arr, result);
	cout << n << "Values in array - Number of comparisons: " << result.comparison_count << "\tNumber of copying objects: " << result.copy_count;
}

void test_sorted_array_quick(int n) {
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		arr.push_back(i);
	}
	stats result;
	Quick_sort(arr, 0, n - 1, result);
	cout << n << "Values in array - Number of comparisons: " << result.comparison_count << "\tNumber of copying objects: " << result.copy_count;
}

void test_sorted_array() {
	system("cls");
	cout << "Test sorted array Quick: " << endl;
	for (int i = 1000; i <= 10000; i += 1000) {
		test_sorted_array_quick(i);
		cout << endl;
	}
	test_sorted_array_quick(25000);
	cout << endl;
	test_sorted_array_quick(50000);
	cout << endl;
	test_sorted_array_quick(100000);
	cout << "\n\n";

	cout << "Test sorted array Selection: " << endl;
	for (int i = 1000; i <= 10000; i += 1000) {
		test_sorted_array_selection(i);
		cout << endl;
	}
	cout << endl;
	cout << endl;

	next_programm();
}

//reverse sorted 
void test_reverse_sorted_array_selection(int n) {
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		arr.push_back(n - i);
	}
	stats result;
	selection_sort(arr, result);
	cout << n << " Values in array - Number of comparisons: " << result.comparison_count << "\t   Number of copying objects: " << result.copy_count;
}
void test_reverse_sorted_array_quick(int n) {
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		arr.push_back(n - i);
	}
	stats result;
	Quick_sort(arr, 0, n - 1, result);
	cout << n << " Values in array - Number of comparisons: " << result.comparison_count << "\t   Number of copying objects: " << result.copy_count;
}

void test_reverse_sorted_array() {
	system("cls");
	cout << "Test reverse sorted array  Quick: " << endl;
	for (int i = 1000; i <= 10000; i += 1000) {
		test_reverse_sorted_array_quick(i);
		cout << endl;
	}
	test_reverse_sorted_array_quick(25000);
	cout << endl;
	test_reverse_sorted_array_quick(50000);
	cout << endl;
	test_reverse_sorted_array_quick(100000);
	cout << "\n\n";


	cout << "Test reverse sorted array Selection: " << endl;
	for (int i = 1000; i <= 10000; i += 1000) {
		test_reverse_sorted_array_selection(i);
		cout << endl;
	}
	cout << endl;
	cout << endl;
	next_programm();
}