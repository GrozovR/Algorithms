#include "queuelist.h"
#include <iostream>

Node* reverseList(Node* head)
{
    Node* reverseList{ nullptr };

    if(head != nullptr){

        reverseList = head;

        Node* nextNode = reverseList->next_;
        reverseList->next_=nullptr;

        Node* nn{nullptr};

        while(nextNode->next_ != nullptr){
            nn = nextNode->next_;
            nextNode->next_=reverseList;
            reverseList=nextNode;
            nextNode = nn;
        }
    }

    return reverseList;
}

int main()
{
	QueueLst Queue;

	std::cout << Queue.isEmpty() << std::endl;

    Queue.enqueue(3);
    Queue.enqueue(4);
    Queue.enqueue(5);
    Queue.enqueue(6);
    Queue.enqueue(7);
    Queue.enqueue(8);
    Queue.enqueue(9);
    Queue.enqueue(10);

    auto queueHead = Queue.head();

    while(queueHead->next_ != nullptr){
        auto next = queueHead->next_;

        std::cout << queueHead->data_ <<std::endl;

        queueHead = next;
    }
    std::cout << queueHead->data_ <<std::endl;
    Queue.reverse();
    /*
	input = 6;
	Queue.enqueue(input);

	input = 9;
	Queue.enqueue(input);*/

	std::cout << Queue.isEmpty()<<std::endl;

    queueHead = Queue.head();
    while(queueHead->next_ != nullptr){
        auto next = queueHead->next_;

        std::cout << queueHead->data_ <<std::endl;

        queueHead = next;
    }
    std::cout << queueHead->data_ <<std::endl;


    return 0;
}
