#include<iostream>
#define nl "\n" 
using namespace std;
class Parent{
	public:
		Parent(){
			cout<<"Parent's constr"<<nl;
		}
		Parent(int x){
			cout<<"Parent's Parameterised constr"<<" "<<x<<nl;
		}
		~Parent(){
			cout<<"Parent's destr"<<nl;
		}

};
class child : public Parent{
	public:
		child(){
			cout<<"child's constr"<<nl;
		}
		child(int a) : Parent(a){
			cout<<"child's Parameterised constr"<<" "<<a<<nl;
		}
		~child(){
			cout<<"child's destr"<<nl;
		}


    

};

int main()
{
	child c1;
	child c2(10);

}
