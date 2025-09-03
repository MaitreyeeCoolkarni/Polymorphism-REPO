#include <iostream>
using namespace std;
#include<string>

class Name{
public:
string name1; //Two variables have been created here
string name2;

Name(string n1, string n2){
    name1=n1;   //Now Im passing some variables to the constructor.
    name2=n2;   //Assigning these variables n1,n2 to public variables         created.
}

void add(){
   cout<<name1+name2;   //Addition of name1 and name2...cannot add n1 n2 obvio cause they are private to the constructor
}      
};
int main() 
{
    Name N1("Maitreyee","Kulkarni");
    N1.add();

}

//Output
//MaitreyeeKulkarni
