#include<iostream>
using namespace std;

int main(){
	string message;
	cout << "Pls,enter message..."<<endl;
	cin >> message;
	
	int x = 0;
	int y = message.size()-1;
	
	while(y>0){
		char t;
		t = message[y];
		message[y] = message[x];
		message[x] = t;
		--y;
		++x;
	}
	cout<<message;
}
