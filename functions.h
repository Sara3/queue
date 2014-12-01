//---------------------------------------------------------
// File--------main.cpp
// Programmer--Sabera Daqiq
//
// This program computes the average time a person waits in a queue 
//---------------------------------------------------------
#include <iostream>
#include <ctime>
#include <queue>
#include <stdlib.h>
#include <string>
using namespace std;

#ifndef myfunc_H
#define myfunc_H

struct Node{
	int id;
	int time;
	struct Node*link; 
};

class Queue{
	private:
		struct Node* front;
		struct Node* back;
		int size;
	public:
		Queue();
		~Queue();
		bool isEmpty();
		int enqueue(int newdata, int time);
		int Queue::dequeue (int &id, int &time);
		int getSize();

};

#endif
