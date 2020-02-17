#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include "anagramVer1.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string input, word;
	for(;;){
		cout<<"Input string: ";
		getline(cin, input);
		cout<<"Input word: ";
		getline(cin, word);
		string wordCopy=word;
		cout<<"The anagram of "<<word<<": ";
		sort(word.begin(), word.end()); 
		bool isAnagram=anagramString(input, word, wordCopy);
		if(isAnagram==true) break;
		cout<<"\n\nInvalid string or word. Please try again.\n"<<endl;
	}
	return 0;
}
