#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include "anagramVer1.h"
using namespace std;

bool anagramString(string x, string y, string z){
	int count=0;
	istringstream ss(x); 
	do{
		string piece;
		ss>>piece;
		string pieceCopy=piece; 
		sort(piece.begin(), piece.end());
		if(piece==y&&pieceCopy!=z){
			cout<<pieceCopy<<' ';
			count++;
		}
	} while (ss);
	if(count==0) return false;
	else return true;
}

