#include<iostream>
#define nl "\n" 
using namespace std;
class Parent{
	private:
		int parent2;
	protected:
		int parent3;
	public:
		int parent1;

};
class child : public Parent{
	public:
		int child;
    void print(){
    	cout<<parent1<<nl;
    	// cout<<parent2<<nl; // private on DND
    	// cout<<parent3<<nl; // use acccess mod protected to win parents trust
    	cout<<child<<nl;

    }

};
int main()
{
	child c;
	c.parent1 = 1;
	// c.parent2 = 2; // Private members are generally on DND mode
	// c.parent3 = 3; // use acccess mod protect
	c.child = 4;
	c.print();

}
