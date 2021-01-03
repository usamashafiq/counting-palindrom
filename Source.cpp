#include<iostream>
#include<string>
#include<sstream>
using namespace std;

bool isPalindrome(const std::string& s) {
	for (int i = 0; i < (s.length()) / 2; ++i) {
		if (s[i] != s[s.length() - 1 - i])
			return false;
		else
			return true;
	}
}


int main() {
	string sen;
	int counter = 0;
	cout << "Write a sentence." << endl;
	getline(cin, sen);
	stringstream processtokens(sen);
	for (string word; processtokens >> word;)
		if (isPalindrome(word))
			++counter;
	cout << "Number of Palindromes are : " << counter << endl;
	system("pause");
	return 0;
}

