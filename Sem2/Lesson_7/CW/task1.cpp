#include "stdafx.h"

class queue {
protected:
	int _q[100];
	int _sloc;
	int _queue_id;
public:
	queue(); // конструктор
	queue(int); // конструктор
	~queue(); // деструктор
	void push(int i);
	int pop();
	void print();
	int count();
	int get();
};

// конструктор
queue::queue()
{
	_sloc = 0;
	_queue_id = 0;
	printf("Queue initialized %d.\n", _queue_id);
}
// конструктор
queue::queue(int id)
{
	_sloc = 0;
	_queue_id = id;
	printf("Queue initialized %d.\n", _queue_id);
}
// деструктор
queue ::~queue()
{
	printf("Queue destroyed %d.\n", _queue_id);
}

// Добавление элемента в конец очереди
void queue::push(int i)
{
	if (_sloc == 99) {
		printf("Queue is full.\n");
		return;
	}
	_q[_sloc] = i;
	_sloc++;
}

// Удаление элемента из начала очереди
int queue::pop() {
	if (_sloc == 0) {
		printf("Queue underflow.\n");
		return 0;
	}
	int value = _q[0];

	for (int i = 0; i < _sloc; i++) {
		_q[i] = _q[i + 1];
	}
	_sloc--;
	return value;
}

//Вывод элементов очереди в консоль
void queue::print(){
	for (int i = 1; i < _sloc; i++)
	    printf("%d\n",_q[i]);

}

//Поиск длины очереди
int queue::count() {
	return _sloc;
}

//Получение элемента по индексу

int queue::get(int i) {

}


class stack : public queue
{
public:
	int pop();
	void print();
	int count();

};

int stack::pop() {
	if (_sloc == 0) {
		printf("stack underflow.\n");
		return 0;
	}
	return _q[--_sloc];
}

//Вывод элементов очереди в консоль
void stack::print() {
	for (int i = 1; i < _sloc; i++)
		printf("%d\n", _q[i]);
}

//Поиск длины стека
int stack::count(){
	return _sloc;
}


void foo() {
	queue MyQueue1(1);
	queue MyQueue2(2);

	printf("My action!\n");
}

int main() {
	queue MyQueue;
	//stack MyQueue;

	MyQueue.push(1);
	MyQueue.push(2);
	MyQueue.push(3);
	MyQueue.push(4);

	MyQueue.print();

	printf("%d\n", MyQueue.count());

	return 0;
}
