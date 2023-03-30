#include <iostream>

using namespace std;

struct Elem
{
	Elem* link1,
		* link2;
	int info;
};

int main()
{
	Elem* p;
	p = new Elem; // 1
	p->info = 1; // 2
	p->link2 = new Elem;//3
	p->link2->info = 2; //4
	p->link2->link2 = p;//5
	p->link2->link2 = new Elem;//6
	p->link2->link2->info = 3;//7
	p->link2->link2->link2= NULL;//8
	p->link2->link2->link1 = new Elem;//9
	p->link2->link2->link1->info =4;//10
	p->link2->link2->link1->link2 = p;//11
	p->link2->link2->link1->link1 = p->link2;//12


	delete p->link2->link2->link1;//13
	delete p->link2->link2;//14
	delete p->link2;//15
	delete p;//16

	return 0;



}