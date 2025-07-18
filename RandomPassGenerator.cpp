#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
string generatePassword(int length)
{

string password="";
string characters="abcdefghijklmnopqrstuvwxyz"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "0123456789";
                
  int charlength=characters.length();
  for(int i=0;i<length;i++)
  {
  	int randomIndex=rand() % charlength;
  	password +=characters[randomIndex];
  	
  }
return password;

}
int main(){
	srand(time(0));
	int length=8;
	string password=generatePassword(length);
	cout<<"the suggested password is :"<<password<<endl;
	return 0;
}
