#include<iostream>
#include<string>
using namespace std;
int countWords(string str);
int main(void) {

	}

int countWords(string str) {
	int a = 0;
	int wordCount = 0;
	while (str.length() - a != 0) {
		if (str[a] = ' ' && str[a - 1] != ' ') wordCount++;
		a++;
	}
	return (wordCount + 1);
}