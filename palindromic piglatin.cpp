#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class palindrome{
	private:
		int i, count, sum;
		char input[100], *piece, reverse[100];
	
	public:
		void getString();
		void breakString();
		void convertString();
		void isPrime();
		void output();
};

int main(int argc, char** argv) {
	palindrome pal;
	
	pal.getString();
	pal.breakString();
	return 0;
}

void palindrome::getString(){
	cout<<"Input: ";
	gets(input);
}

void palindrome::breakString(){
	piece=strtok(input, " ");
	while(piece!=NULL){
		strcpy(reverse, piece);
		strrev(reverse);
		count=0;
		for(i=0;i<strlen(reverse);i++){
			if(reverse[i]==piece[i]) count++;
		}
		if(count==strlen(reverse)) 
		convertString(); 
		piece=strtok(NULL, " ");
	}
}
	
void palindrome::convertString(){
	count=0;
	sum=0;
	for(i=strlen(reverse)-1;i>=0;i--){
		if(reverse[i]=='1'){
			sum+=pow(2, count);
		} count++;
	} 
	isPrime();
}

void palindrome::isPrime(){
	count=0;
	for(i=1;i<sum;i++){
		if(sum%i==0) count++;
	}
	if(count<=1) output(); 
}

void palindrome::output(){
	cout<<reverse<<" is a palindromic prime."<<endl;
}
