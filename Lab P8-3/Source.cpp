#include<iostream>
#include<string>
using namespace std;
int countWords(string str);
int main(void) {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;
		cout << "Word count: " << countWords(input)<<endl;
	}
	}

int countWords(string str) {
	int wordCount = 0;
	char prev = ' ';
	char current = ' ';
	for (int i=0; i < str.length();i++) {
		current = str[i];
		if (prev == ' ' && current != ' ') wordCount++;
		prev = current;
	}
	return wordCount;
}