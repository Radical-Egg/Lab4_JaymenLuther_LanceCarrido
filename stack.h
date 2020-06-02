#ifndef STACK_H_
#define STACK_H_
#include <iostream>
#include "SinglyLinkedList.h"

template <typename T>
class Stack : public SinglyLinkedList<T>
{
    private:
        LinkNode<T>* top;
    public:
        /*
        template<typename T>
        void push(T);

        push data onto the stack

        Pre:	T data.
        Post:	None.
        Return:	None.
		*/
        void push(T);

        /*
        template<typename T>
        void pop();

        pop data off the stack

        Pre:	None.
        Post:	None.
        Return:	None.
		*/
        void pop();

        /*
        template<typename T>
        T isEmpty();

        check if stack is empty

        Pre:	None
        Post:	None.
        Return:	top->data
		*/
        T isEmpty();

        /*
        template<typename T>
        T peek();

        show what is on the peek

        Pre:	None.
        Post:	None.
        Return:	top->data
		*/
        T peek();

        /*
        template<typename T>
        void display();

        display the stack

        Pre:	None.
        Post:	None.
        Return:	None.
		*/
        void display();

        // constructor
        Stack();
        // destructor
        ~Stack();
};

template <typename T>
void Stack<T>::push(T data)
{
    this->prepend(data);
}

template <typename T>
void Stack<T>::pop()
{
    this->removeLast();
}

template <typename T>
T Stack<T>::isEmpty()
{
    return top == NULL;
}

template <typename T>
T Stack<T>::peek()
{
    return this->getEnd();
}

template <typename T>
void Stack<T>::display()
{
    this->printList();
}
template <typename T>
Stack<T>::Stack()
{
    top = NULL;
}

template <typename T>
Stack<T>::~Stack()
{

}

#endif