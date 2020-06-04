#include "SinglyLinkedList.h"
#include "stack.h"
#include "queue.h"
#include "Currency.h"
#include "Dollar.h"
#include <iostream>
#include <string>

using namespace std;

template<typename T>
void printResult(SinglyLinkedList<T>* list);


int testInput1 = 1;
int testInput2 = 2;
int testInput3 = 3;

int testIndex1 = 1;
int testIndex2 = 0;
int testIndex3 = 2;

int main()
{
	// creating Singly Linked List
	cout << "Initializing test list." << endl;
	SinglyLinkedList<int>* testList = new SinglyLinkedList<int>();

	// creating stack
	cout << "creating testStack " << endl;
	Stack<Dollar>* testStack = new Stack<Dollar>();

	// creating queue
	cout << "creating testQueue" << endl;
	Queue<string>* testQueue = new Queue<string>();

	// list stuff
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

	cout << "\nPress Any Key to Continue" << endl;
	cin.get();

	// stack stuff
	// creating dollar objects for the stack
	cout << "\n\n===== Working with testStack =====" << endl;
	cout << "\nCreating 5 dollar objects" << endl;

	Dollar* myDollar = new Dollar[5]; // dollar objects
	// set vals for dollar obj 0
	myDollar[0].setDval(50); 
	myDollar[0].setCval(25);
	// set vals for dollar obj 1
	myDollar[1].setDval(100);
	myDollar[1].setCval(30);
	// set vals for dollar obj 2
	myDollar[2].setDval(300);
	myDollar[2].setCval(50);
	// set vals for dollar obj 3
	myDollar[3].setDval(10);
	myDollar[3].setCval(3);
	// set vals for dollar obj 4
	myDollar[4].setDval(60);
	myDollar[4].setCval(50);
	
	// showing push, pop, peek and display
	cout << "Push Dollar object 0 - Dollar 50 25 Cent" << endl;
	testStack->push(myDollar[0]); // push

	cout << "Push Dollar object 1 - Dollar 100 30 Cent" << endl;
	testStack->push(myDollar[1]); // push

	cout << "Push Dollar object 2 - Dollar 300 50 Cent" << endl;
	testStack->push(myDollar[2]); // push

	cout << "Push Dollar object 3 - Dollar 10 3 Cent" << endl;
	testStack->push(myDollar[3]); // push

	cout << "Push Dollar object 4 - Dollar 60 50 Cent" << endl;
	testStack->push(myDollar[4]); // push

	cout << "\n===== Here is the top element on the stack =====" << endl;
	testStack->peek(); // show peek
	cout << endl;

	cout << "===== Here is the current Stack =====" << endl;
	testStack->display(); // display results

	cout << "\nPop ";
	testStack->pop(); // pop

	cout << "Pop ";
	testStack->pop(); // pop

	cout << "\n===== Here is the stack after we popped =====" << endl;
	testStack->display(); // display results after pop
	cout << endl;

	cout << "Deleting testStack and Dollar Objects" << endl;
	delete testStack; // free mem
	delete[] myDollar; // free mem
	cout << "testStack and Dollar objects Deleted" << endl;
	
	cout << "\nPress Any Key to Continue" << endl;
	cin.get();

	// Queue stuff

	string* strArry = new string[5]; // dynamic string array

	// assign some strings
	strArry[0] = "string 1";
	strArry[1] = "this is string2";
	strArry[2] = "Another string here";
	strArry[3] = "again this is another string";
	strArry[4] = "the last string";

	cout << "\n ===== Working with testQueue =====" << endl;
	cout << "enQueue strArry 0" << endl; 
	testQueue->enQueue(strArry[0]); // enQueue

	cout << "enQueue strArry 1" << endl;
	testQueue->enQueue(strArry[1]); // enQueue

	cout << "enQueue strArry 2" << endl;
	testQueue->enQueue(strArry[2]); // enQueue

	cout << "enQueue strArry 3" << endl;
	testQueue->enQueue(strArry[3]); // enQueue

	cout << "enQueue strArry 4" << endl;
	testQueue->enQueue(strArry[4]); // enQueue

	cout << "\n===== Here is the Queue =====" << endl;
	testQueue->display(); // display results

	cout << "\ndeQueue ";
	testQueue->deQueue(); // deQueue

	cout << " \nQueue Front: ";
	testQueue->peekFront(); // show front
	cout << endl;

	cout << "Queue Rear: ";
	testQueue->peekRear(); // show rear
	cout << endl;

	cout << "\n===== Queue after deQueue =====" << endl;
	testQueue->display(); // show results after deQueue

	cout << "Deleting testQueue and strArry" << endl;
	delete testQueue; // free mem
	delete[] strArry; // free mem
	cout << "testQueue and strArry deleted" << endl;
		
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