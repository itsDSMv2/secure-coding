#include <iostream>
#include <String.h>
using namespace std;
int main() {
	bool auth = false;
	char username[10], password[10];
	cout<<"Username: ";
	cin>>username;
	cout<<"Password: ";
	cin>>password;
	if(strcmp(username,"root")==0 && strcmp(password,"pass")==0) 
		auth = true;
	
	if(auth) 
		cout<<"Access Granted";
	else 
		cout<<"Wrong username or password";
	return 0;
}
