#include<iostream>
using namespace std;

int area(int lenght = 2 ,int bredth = 3 ){cout<<lenght * bredth;}
int area2(int length = 2  ){cout<<length * length;}
int main(){
	
	area(4);
	cout<<"\n";
	area2(7);
	
}
