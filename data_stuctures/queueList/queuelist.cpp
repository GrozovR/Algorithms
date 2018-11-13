#include "queuelist.h"

Node::Node(const ValueType v)
	:data_{ v }
{
}

QueueLst::QueueLst(QueueLst & rhs)
{
	*this = rhs;
}

QueueLst & QueueLst::operator=(QueueLst & rhs)
{

}

void QueueLst::reverse()
{
    Node* reverseList{ nullptr };

    //TODO: head = tail
    if(head_ != nullptr){

        reverseList = head_;

        Node* nextNode = reverseList->next_;
        reverseList->next_=nullptr;

        Node* nn{ nullptr };

        while(nextNode->next_ != nullptr){
            nn = nextNode->next_;
            nextNode->next_=reverseList;
            reverseList=nextNode;
            nextNode = nn;
        }
        nextNode->next_=reverseList;
        reverseList = nextNode;
    }

    head_ = reverseList;
}

QueueLst::~QueueLst()
{
	while (0 == isEmpty())
		dequeue();
}

bool QueueLst::isEmpty() const
{
	return nullptr == head_;
}

void QueueLst::enqueue(const ValueType v)
{
    Node* added = new Node(v);

    if(isEmpty()){
        head_= added;
    }
    else if(nullptr == head_->next_)
        head_->next_ = added;

    if(nullptr != tail_)
        tail_->next_ = added;
    tail_ = added;
}

ValueType QueueLst::dequeue()
{
	if (isEmpty())
	{
        //TODO finish this!
        //std::bad_exception
        //throw std::exception("Queue is empty");
	}
	ValueType temp{ head_->data_ };
	if (0 == isEmpty())
	{
		Node * deleted{ head_ };
		head_ = head_->next_;
	}
	return temp;
}
