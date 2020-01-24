//lang::CwC

#include "queue.h"

// test basic behaviors
void Test1() {
    bool result = true;
    Queue* q = new Queue(5);
    // test size and current size
    result &= (q->current_size() == 0);
    result &= (q->size() == 5);

    Object* o = new Object();
    Object* o2 = new Object();

    // test enqueue
    q->enqueue(o);
    q->enqueue(o2);
    result &= (q->current_size() == 1);
    result &= (q->size() == 5);

    // test peek
    result &= (q->peek()->equals(o));
    result &= (q->current_size() == 2);
    result &= (q->size() == 5);

    // test dequeue
    result &= (q->dequeue()->equals(o));
    result &= (q->current_size() == 1);
    result &= (q->size() == 5);

    // test clear
    q->clear();
    result &= (!(q->isFull()));
    result &= (q->isEmpty());

    // test is full and is empty
    q->enqueue(o);
    q->enqueue(o);
    q->enqueue(o);
    q->enqueue(o);
    q->enqueue(o);

    result &= (q->current_size() == 5);
    result &= (q->size() == 5);

    result &= (q->isFull());
    result &= (!(q->isEmpty()));
    printf("%d\n", result);
    delete q;
    delete o;
}

// test enqueue more elements than allocated size
void Test2() {
    Queue* q = new Queue(5);

    Object* o = new Object();

    q->enqueue(o);
    q->enqueue(o);
    q->enqueue(o);
    q->enqueue(o);
    q->enqueue(o);
    q->enqueue(o); // expect program terminated

    delete q;
    delete o;
}

// test dequeue empty queue
void Test3() {
    Queue* q = new Queue(5);

    q->dequeue();// expect program terminated

    delete q;
}

// test peek empty queue
void Test4() {
    Queue* q = new Queue(5);

    q->peek();// expect program terminated

    delete q;
}

// test equal and hash
void Test5() {
    result = true;
    Queue* q1 = new Queue(5);
    Queue* q2 = new Queue(4);

    Object* o = new Object();

    q1->enqueue(o);
    q2->enqueue(o);

    result &= (q1->equals(q2));
    result &= (q1->hash() == q2->hash());
    
    printf("%d\n", result);
    
    delete q1;
    delete q2;
    delete o;
}

int main()
{
    Test1();
    Test2();
    Test3();
    Test4();
    Test5();

    return 0;
}
