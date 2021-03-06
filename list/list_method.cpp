#include <iostream>
#include <list>

using namespace std;

int main(){

	list <int> l;
	l.push_back(1);
	l.push_back(3);
	l.push_back(4);

	for(auto x:l){
		cout<<x<<" ";
	}cout<<endl;

	list <string> l2{"apple","mango","banana"};

	l2.push_back("pine_apple");
	l2.push_front("fruits");


	cout<<endl<<"l2"<<endl;
	for(auto x:l2){
		cout<<x<<"->";
	} cout<<endl;



	l2.sort();

	cout<<endl<<"l2 front- "<<l2.front()<<endl;

	//l2.pop_front();

	cout<<"sorted l2: "<<endl;
	for(auto x: l2){
		cout<<x<<"->";
	}cout<<endl;

	cout<<"After removing *apple* "<<endl;
	l2.remove("apple");

	//using iterator
	for(auto it= l2.begin();it!=l2.end();it++){
		cout<<(*it)<<"-->";
	}cout<<endl;


	//we can insert in the list at a perticular index
	auto it = l2.begin();
	it++;
	l2.insert(it,"fruitJuice");

	cout<<endl<<"Anfer inserting the fruitJuice "<<endl;
	for(auto x:l2){
		cout<<x<<"-->";
	}cout<<endl;

	return 0;
}
