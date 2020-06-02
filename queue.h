#ifndef QUEUE_H_
#define QUEUE_H_
#include <iostream>
#include "SinglyLinkedList.h"

template <typename T>
class Queue : public SinglyLinkedList<T>
{
    private:
        LinkNode<T>* front;
        LinkNode<T>* rear;
    public:
        /*
        template<typename T>
        void enQueue();

        put data into the Queue

        Pre:	T data
        Post:	None.
        Return:	None.
		*/
        void enQueue(T);

        /*
        template<typename T>
        void deQueue();

        de Queue data from the Queue

        Pre:	None.
        Post:	None.
        Return:	None.
		*/
        void deQueue();

        /*
        template<typename T>
        void display()

        display the Queue

        Pre:	None.
        Post:	None.
        Return:	None.
		*/
        void display();

        /*
        template<typename T>
        T peekFront();

        peek at what is in the front of the queue

        Pre:	None.
        Post:	None.
        Return:	None.
		*/
        T peekFront();
        
        /*
        template<typename T>
        T peekRear();

        peek at what is in the rear of the queue

        Pre:	None.
        Post:	None.
        Return:	None.
		*/
        T peekRear();

        // constructor
        Queue();
        // destructor
        ~Queue();
};

template <typename T>
void Queue<T>::enQueue(T data)
{
    //create a new node
    LinkNode<T>* temp = new LinkNode<T>(data);

    // if the queue is empty then the new node is front and rear
    if (rear == NULL)
    {
        front = rear = temp;
        return;
    }

    // add the new new at the end of the queue and change the rear
    rear->next = temp;
    rear = temp;
}

template <typename T>
void Queue<T>::deQueue()
{
        // If queue is empty, return NULL. 
        if (front == NULL) 
            return; 
  
        // Store previous front and 
        // move front one node ahead 
        LinkNode<T>* temp = front; 
        front = front->next; 
  
        // If front becomes NULL, then 
        // change rear also as NULL 
        if (front == NULL) 
            rear = NULL; 
  
        delete (temp); 
}

template <typename T>
void Queue<T>::display()
{
    // check for underflow
    if (front == NULL)
    {
        std::cout << "Underflow" << std::endl;
        return;
    }
    // make temp LinkNode
    LinkNode<T>* temp = front;

    // display the queue
    while (temp)
    {
        std::cout << temp->data << " ";
        temp=temp->next;
    }
    std::cout << std::endl;
}

template <typename T>
T Queue<T>::peekFront()
{
    // make temp LinkNode and return data
    LinkNode<T>* temp = front;
    return temp->data;
}
template <typename T>
T Queue<T>::peekRear()
{
    // make temp linkNode and return data
    LinkNode<T>* temp = rear;
    return temp->data;
}

template <typename T>
Queue<T>::Queue()
{
    // set the front and rear to NULL
    front = rear = NULL;
}
template <typename T>
Queue<T>::~Queue()
{
    while(front != NULL)
    {
        LinkNode<T>* temp = front;
        front = front->next;
        delete temp;
    }
    rear = NULL;
}


#endif