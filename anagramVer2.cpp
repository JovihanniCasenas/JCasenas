#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include "anagramVer2.h"
using namespace std;

bool isAnagram(string x, string y){
	istringstream ss(x);
	do{
		string piece;
		ss>>piece;
		if(piece==y) return true;
	} while (ss);
	return false;
}

void anagram(string x){
	string xCopy=x;
    sort(x.begin(), x.end());
    do{
       	if(x!=xCopy)
        cout << x << ' ';
	}
    while(next_permutation(x.begin(), x.end()));
}
