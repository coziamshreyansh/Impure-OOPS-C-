#include<iostream>
#define nl "\n" 
using namespace std;
class GrandParent{
	private:
		int grandparent2;
	protected:
		int grandparent3;
	public:
		int grandparent1;

};
class Parent : public GrandParent{
	public:
		int parent;
    
};
class child : public GrandParent{
	
public:
	int child;
	void print(){
		cout<<grandparent1<<nl;
		cout<<child<<nl;
	}


};
int main()
{
	child c;
	c.GrandParent::grandparent1 = 1; // initialised for object of child class
	
	c.child = 3;
	c.print();

}
