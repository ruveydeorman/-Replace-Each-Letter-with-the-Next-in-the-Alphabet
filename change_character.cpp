#include<iostream>
#include<string>
using namespace std;
string change_character(string str) {
	string temp;
	int index = 0;
	for (int i = 0; i < str.length(); i++) {
		str[index] = str[i] + 1;
		index++;
	}
	return str;
}
int main() {
	string s;
	cout << "entered a string : ";
	cin >> s;
	cout << "your current string is : " << s << endl;
	cout << "changed character in s string is : " << change_character(s);
	
	return 0;
}