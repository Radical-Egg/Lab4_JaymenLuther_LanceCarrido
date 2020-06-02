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
    // creating a new node and allocating mem
    LinkNode<T> *temp;
    temp = new LinkNode<T>();

    // check if the heap is full
    if (!temp)
    {
        std::cout << "Heap Overflow" << std::endl;
    }
    // initilize data into the temp data field
    temp->data = data;
    // put top pointer ref into temp link
    temp->next = top;
    // make temp as the top
    top = temp;
}

template <typename T>
void Stack<T>::pop()
{
    // create a temp node
    LinkNode<T>* temp;

    // check for stack underflow
    if (top == NULL)
    {
        std::cout << "stack Underflow" << std::endl;
    }
    else
    {
        // top assign to temp
        temp = top;

        // assign second node to top
        top = top->next;

        // destroy connection between 1st and 2nd node
        temp->next = NULL;

        // release memory of top node
        free(temp);
    } 
}

template <typename T>
T Stack<T>::isEmpty()
{
    return top == NULL;
}

template <typename T>
T Stack<T>::peek()
{
  // check for empty stack 
    if (!isEmpty()) 
    {
        return top->data; 
    }
    else
    {
        exit(1); 
    }
}

template <typename T>
void Stack<T>::display()
{
    // make temp node
    LinkNode<T>* temp;

    // check for stack underflow
    if (top == NULL)
    {
        std::cout << "Stack Underflow" << std::endl;
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            //print node
            std::cout << temp->data << " ";

            // assign temp next to temp to move to the next node
            temp = temp->next;
        }
    }
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