//lang::CwC

#include "queue.h"
#include <stdio.h>
#include <gtest/gtest.h>

// test basic behaviors
void Test1() {
    bool result = true;
    StrQueue* q = new StrQueue(5);
    // test allocated size and current size
    result &= (q->current_size() == 0);
    result &= (q->allocated_size() == 5);

    String* o = new String("hello");
    String* o2 = new String("world");

    // test enqueue
    q->enqueue(o);
    q->enqueue(o2);
    result &= (q->current_size() == 2);
    result &= (q->allocated_size() == 5);

    // test peek
    result &= (q->peek()->equals(o));
    result &= (q->current_size() == 2);
    result &= (q->allocated_size() == 5);

    // test dequeue
    result &= (q->dequeue()->equals(o));
    result &= (q->current_size() == 1);
    result &= (q->allocated_size() == 5);

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
    result &= (q->allocated_size() == 5);

    result &= (q->isFull());
    result &= (!(q->isEmpty()));
    delete q;
    delete o;
    delete o2;
    if (result) {
        exit(0);
    }
    exit(4);
}

TEST(W1, Test1) {
    ASSERT_EXIT(Test1(), ::testing::ExitedWithCode(0), ".*");
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
    q->enqueue(o);

    delete q;
    delete o;
    exit(0);
}

TEST(W1, Test2) {
    ASSERT_EXIT(Test2(), ::testing::ExitedWithCode(1), ".*");
}

// test dequeue empty queue
void Test3() {
    Queue* q = new Queue(5);

    q->dequeue();

    delete q;
    exit(0);
}

TEST(W1, Test3) {
    ASSERT_EXIT(Test3(), ::testing::ExitedWithCode(2), ".*");
}

// test peek empty queue
void Test4() {
    Queue* q = new Queue(5);

    q->peek();

    delete q;
    exit(0);
}

TEST(W1, Test4) {
    ASSERT_EXIT(Test4(), ::testing::ExitedWithCode(3), ".*");
}

// test equal and hash
void Test5() {
    bool result = true;
    StrQueue* q1 = new StrQueue(5);
    StrQueue* q2 = new StrQueue(4);

    String* o = new String("hello");
    String* o2 = new String("goodbye");

    q1->enqueue(o);
    q2->enqueue(o);

    result &= (q1->equals(q2));
    result &= (q1->hash() == q2->hash());

    q2->enqueue(o2);

    result &= (!q1->equals(q2));
    result &= (q1->hash() != q2->hash());

    q1->clear();
    q2->clear();

    q1->enqueue(o);
    q2->enqueue(o2);

    result &= (!q1->equals(q2));
    result &= (q1->hash() != q2->hash());

    printf("%d\n", result);

    delete q1;
    delete q2;
    delete o;
    delete o2;
    if (result) {
        exit(0);
    }
    exit(4);
}

TEST(W1, Test5) {
    ASSERT_EXIT(Test5(), ::testing::ExitedWithCode(0), ".*");
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}