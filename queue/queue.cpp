#include <iostream>

using namespace std;

#define BUFFER_SIZE 128

int head_ =0;
int tail_ =-1;
int cache_[BUFFER_SIZE];

void enqueue(int d) {
	if (head_==((tail_+1)%BUFFER_SIZE)) { 
		cout<<"queue overflow"<<endl;
	}
	tail_=(tail_+1)%BUFFER_SIZE;
	cache_[tail_]=d;
	cout<<"enqueue a data:  "<<cache_[tail_]<<endl; 
	tail_=(tail_ + 1)%BUFFER_SIZE;
}

int dequeue() {
	if (head_==tail_)
	cout<<"queue underflow"<<endl; 
	int d=cache_[head_];
	cout<<"dequeue a data:  "<<d<<endl; 
	head_=(head_+1)%BUFFER_SIZE;
	return d;
}

void head() {
	cout<<"head data:  "<<cache_[head_]<<endl; 
}

void tail() {
	cout<<"tail data:  "<<cache_[tail_]<<endl; 
}

void peep(int i) {
	cout<<"ith data:  "<<cache_[i]<<endl; 
}

void empty() {
	for(int i=head_ ;i<=tail_;head_++) {
		if(head_==tail_)
			break;
	}
}

bool isEmpty() {
	if(head_==tail_)
	{
		cout<<"empty"<<endl; 
		return true;
	}
	else
		return false;
}


int main() {
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	head();
	tail(); 
	peep(4);
	empty();
	isEmpty();
}
