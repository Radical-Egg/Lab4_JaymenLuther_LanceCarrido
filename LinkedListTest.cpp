#include "SinglyLinkedList.h"
#include "stack.h"
#include "queue.h"
#include <iostream>
#include <string>

using namespace std;

template<typename T>
void printResult(SinglyLinkedList<T>* list);


int testInput1 = 1;
int testInput2 = 2;
int testInput3 = 3;

/*
string testInput1 = "Zeno";
string testInput2 = "Risa";
string testInput3 = "Echo";
*/

int testIndex1 = 1;
int testIndex2 = 0;
int testIndex3 = 2;

int main()
{
	cout << "Initializing test list." << endl;

	SinglyLinkedList<int>* testList = new SinglyLinkedList<int>();

	cout << "creating testStack " << endl;
	Stack<int>* testStack = new Stack<int>();

	cout << "creating testQueue" << endl;
	Queue<int>* testQueue = new Queue<int>();

	// SinglyLinkedList<string>* testList = new SinglyLinkedList<string>();

	cout << "Test list initialized." << endl;
	printResult(testList);

	cout << "Append testing: " << endl;
	cout << "Appending " << testInput1 << ", " << testInput2 << "." << endl;
	testList->append(testInput1);
	testList->append(testInput2);
	printResult(testList);

	cout << "Prepend testing: " << endl;
	cout << "Prepending " << testInput1 << ", " << testInput2 << "." << endl;
	testList->prepend(testInput1);
	testList->prepend(testInput2);
	printResult(testList);

	cout << "Index-based insertion testing: " << endl;
	cout << "Inserting data " << testInput3 << " to index " << testIndex3 << "." << endl;
	testList->insert(testInput3, testIndex3);
	printResult(testList);

	cout << "Index-based remove testing: " << endl;
	cout << "Deleting index " << testIndex1 << "." << endl;
	testList->removeIndex(testIndex1);
	printResult(testList);
	
	cout << "Data-based remove testing: " << endl;
	cout << "Deleting data " << testInput1 << "." << endl;
	testList->removeData(testInput1);
	printResult(testList);
	cout << "Deleting data " << testInput2 << "." << endl;
	testList->removeData(testInput2);
	printResult(testList);
	cout << "Deleting data " << testInput2 << "." << endl;
	testList->removeData(testInput2);
	printResult(testList);
	cout << "Deleting data " << testInput2 << "." << endl;
	testList->removeData(testInput2);
	printResult(testList);

	cout << "Index-based data retrieval testing: " << endl;
	cout << "Index " << testIndex2 << ": " << testList->getData(testIndex2) << endl;
	cout << endl;

	cout << "Append testing: " << endl;
	cout << "Appending " << testInput1 << ", " << testInput2 << "." << endl;
	testList->append(testInput1);
	testList->append(testInput2);
	printResult(testList);

	cout << "Start data removal test: " << endl;
	cout << "Removing start data." << endl;
	testList->removeFirst();
	printResult(testList);

	cout << "Last data removal test: " << endl;
	cout << "Removing last data." << endl;
	testList->removeLast();
	printResult(testList);

	cout << "Append testing: " << endl;
	cout << "Appending " << testInput1 << ", " << testInput2 << "." << endl;
	testList->append(testInput3);
	testList->append(testInput2);
	printResult(testList);

	cout << "Prepend testing: " << endl;
	cout << "Prepending " << testInput1 << ", " << testInput2 << "." << endl;
	testList->prepend(testInput1);
	testList->prepend(testInput3);
	printResult(testList);

	cout << "Index-based data retrieval testing: " << endl;
	cout << "Index " << testIndex1 << ": " << testList->getData(testIndex1) << endl;
	cout << "Index " << testIndex2 << ": " << testList->getData(testIndex2) << endl;
	cout << "Index " << testIndex3 << ": " << testList->getData(testIndex3) << endl;
	cout << endl;

	cout << "Data index searching testing: " << endl;
	cout << "Data " << testInput1 << ": " << testList->getIndex(testInput1) << endl;
	cout << "Data " << testInput2 << ": " << testList->getIndex(testInput2) << endl;
	cout << "Data " << testInput3 << ": " << testList->getIndex(testInput3) << endl;
	cout << endl;

	cout << "Clear testing: " << endl;
	cout << "Clearing list." << endl;
	testList->clearList();
	printResult(testList);

	cout << "Deleting test list." << endl;
	delete testList;
	cout << "Test list deleted." << endl;

	// stack stuff

	cout << "Working with testStack " << endl;
	cout << "push 20" << endl;
	testStack->push(20);
	cout << "Push 50" << endl;
	testStack->push(50);
	cout << "Push 700" << endl;
	testStack->push(700);

	cout << "Here is the top element on the stack" << endl;
	cout << testStack->peek() << endl;;

	cout << "Here is the current Stack" << endl;
	testStack->display();

	cout << "\nPop" << endl;
	testStack->pop();

	cout << "Pop" << endl;
	testStack->pop();

	cout << "Here is the stack after we popped" << endl;
	testStack->display();
	cout << endl;

	cout << "Deleting testStack" << endl;
	delete testStack;
	cout << "testStack Deleted" << endl;

	// Queue stuff

	cout << "Working with testQueue " << endl;
	cout << "enQueue 20" << endl;
	testQueue->enQueue(20);

	cout << "enQueue 50" << endl;
	testQueue->enQueue(50);

	cout << "enQueue 700" << endl;
	testQueue->enQueue(700);

	cout << "Here is the Queue" << endl;
	testQueue->display();

	cout << "deQueue" << endl;
	testQueue->deQueue();

	cout << "Queue Front: " << testQueue->peekFront() << endl;
	cout << "Queue Rear " << testQueue->peekRear() << endl;

	cout << "Queue after deQueue" << endl;
	testQueue->display();

	cout << "Deleting testQueue" << endl;
	delete testQueue;
	cout << "testQueue deleted" << endl;
		
	return 0;


}


template<typename T>
void printResult(SinglyLinkedList<T>* list)
{
	cout << "Printing list:" << endl;
	list->printList();
	cout << "Start data: " << list->getStart() << endl;
	cout << "End data: " << list->getEnd() << endl;
	cout << "Current size: " << list->getCount() << endl;
	cout << "Is empty? " << list->isListEmpty() << endl;
	cout << endl;
}