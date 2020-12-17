#include <iostream>

using namespace std;
 
#define CAPACITY 128

int top_=-1;
int cache_[CAPACITY];

void push(int d) {
	if (top_ == CAPACITY) {
	cout<<"stack overflow"<<endl; 
	}
	top_ ++;
	cache_[top_]=d;
	cout<<"push a data: "<<cache_[top_]<<endl;
} 

int pop() {
	if (top_==0) {
	cout<<"stack underflow"<<endl;
	}
	cout<<"pop a data: "<<cache_[top_]<<endl;
	top_--;
	return cache_[top_];
}

int top() {
	cout<<"top data: "<<cache_[top_]<<endl;
	return cache_[top_];
}

int peep(int i) {
	if(i<=CAPACITY)
	cout<<"ith data: "<<cache_[top_-i+1]<<endl;
	return cache_[top_-i+1];
}

void empty() {
	for(int i=top_ ;i>=top_;top_--) {	
		if(top_ == 0)
			break;
	}
}

bool isEmpty() {
	if(top_==0) {
	cout<<"empty"<<endl; 
		return true;
	} 
	else
		return false;
}

int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	top();
	peep(2);
	empty();
	isEmpty();
}
