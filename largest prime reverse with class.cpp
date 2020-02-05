#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class hello{
	
	public:
		char num[100],rev[100],*point;
		int x,y,sum,i,count,a,max=0,rever=0,rem;
		void input();
		void output();
		void reverse();
		void process ();
};

int main(int argc, char** argv) {
	
	hello a;		//instance (create a varable for the class)
	a.input();
	a.process();
	a.reverse();
	return 0;
}

void hello::input( ){
	cin.getline(num,100);
}
void hello::process( ){
	point=strtok(num," ");
	while(point!=NULL){
		strcpy(rev,point);
		a=atoi(rev); 			//switching from char to integer
		count=0;
		for(i=1;i<a;i++){
			if(a%i==0)count++;		//determine if prime
		}
		if(count<=1){
			if(a>max) max=a;			
		}
		point=strtok(NULL," ");
	}
	cout<<"Largest prime: "<<max<<endl;
	}
	
	void hello::reverse(){
		for(;max!=0;){
			rem=max%10;
			max/=10;
			rever=rever*10+rem;
		}
		cout<<"REVERSE OF THE LARGEST PRIME: "<<rever<<endl;
	
	}
	
	
