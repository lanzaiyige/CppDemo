//
//  main.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/1/24.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include <iostream>
#include "Stock00.h"
#include "mytime.h"
#include "placenew1.h"
#include "String.h"
#include "CD.h"
#include "dma.h"
#include "Student.h"
#include "Worker.h"
#include "Wine.h"
#include "Queue.h"
#include "error.h"
#include "newexcp.h"
#include "RTTI.h"
#include <typeinfo>
#include "str1.h"
#include "smartptrs.h"
#include "fowl.h"
#include "vect1.h"
#include "functor.h"
#include "funadap.h"
#include "strgst.h"

using namespace std;

void stocktest() {
    Stock s1 = Stock();
    Stock s2("asdf");
    Stock *s3 = new Stock("haha");

    s1.show();
    s2.show();
    s3->show();

    const int size = 3;

    Stock array[size] = {
        Stock("xixi", 5),
        Stock("haha", 1),
        Stock("kiki", 10)
    };

    const Stock *temp = &array[0];

    const Stock *res = nullptr;
    for (int i = 0; i < size; i++) {
        res = &(temp->topVal(array[i]));
    }
    res->show();
}

void friendtest() {
    Time A = Time(1, 40);
    Time B = A * 2;
    B.show();
}

void testplace() {
    char *buffer = new char[BUF];
    JustTesting *pc1, *pc2;
    pc1 = new (buffer) JustTesting;
    pc2 = new JustTesting("Heap1", 20);
    
    delete [] pc1;
}

void testString() {
    String *a = new String("HAHA");
    String res = a->stringLow();
    
//    cout << res;
    
    int count = res.hasCharCount('a');
    printf("%i", count);
}

void testStock() {
    Stock stock = Stock("Apple", 0.1);
    cout << stock;
}

void Bravo(const CD &disk) {
    disk.Report();
}

void printCD() {
    CD c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano", "Alfred", 2, 57.17, "Phi");
    CD *pcd = &c1;
    
    c1.Report();
    c2.Report();
    
    pcd->Report();
    pcd = &c2;
    pcd->Report();
    
    Bravo(c1);
    Bravo(c2);
    
    Classic copy;
    copy = c2;
    copy.Report();
}

void printDMA() {
    baseDMA *array[4];
    for (int i = 0; i < 4; i++) {
        array[i] = new baseDMA();
    }
    
    
}

void testStudent() {
    Waiter apple("Apple", 314, 5);
}

void testWine() {
    std::cout << "Enter the name of wine: ";
    char lab[50];
    std::cin.getline(lab, 50);
    //std::cout << "Enter Years: ";
    //int yrs;
    //std::cin >> yrs;
    Wine holding(lab, 0);
    holding.GetBottles();
    holding.Show();
    std::cout << "The total bottles: " << holding.sum() << std::endl;
    const int YRS = 3;
    int y[YRS] = { 1993,1995,1998 };
    int b[YRS] = { 48, 60,72 };
    Wine more("Gushing Grape Red", YRS, y, b);
    more.Show();
    std::cout << "Total bottles for " << more.Label() << ": " << more.sum() << std::endl;
    system("pause");
}

const int SIZE = 3;
int test_queue() {
    int count = 0;
    Workers* pWorker = new Workers[SIZE];
    pWorker[0] = Workers("Jim", 1001);
    pWorker[1] = Workers("Tom", 1002);
    pWorker[2] = Workers("Tim", 1003);
    Queue<Workers> queue(3);
    while (queue.queuecount() < 3)
        queue.enqueue(pWorker[count++]);
    if (queue.queuecount() == 3){
        std::cout << "The Queue is full, the elements are: \n";
    }
    queue.show();
    while (queue.queuecount() > 0)
        queue.dequeue(pWorker[--count]);
    if (queue.queuecount() == 0){
        std::cout << "The Queue is empty now. \n";
    }
    delete[] pWorker;

    return 0;
}

int test_func() {
    printf("%s", "a");
    return 0;
}

void test_typeid() {
    Magnificent *pg = new Magnificent(0,'B');
    if (typeid(*pg) == typeid(Superb)) {
        printf("haha\n");
    } else {
        printf("nop\n");
    }
}

int main(int argc, const char * argv[]) {
//    friendtest();
//    testString();
//    testStock();
//    printCD();
//    printDMA();
//    testStudent();
//    testWine();
//    test_queue();
//    error *err = new error(5, -5);
//    Demo *demo = new Demo();
//    test_typeid();
//    test_string();
//    test_smart_ptr();
//    test_fowl();
//    test_fowl_shared();
//    test_unique_ptr();
//    test_vector();
//    test_iterator();
//    test_functor();
//    test_transform_func();
//    test_func_adapter();
//    test_string_premutation();
    test_list_rmv();
    
    return 0;
}
