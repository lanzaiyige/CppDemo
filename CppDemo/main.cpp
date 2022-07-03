//
//  main.cpp
//  CppDemo
//
//  Created by tanzhikang on 2022/1/24.
//  Copyright © 2022 tanzhikang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <initializer_list>
#include <set>
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
#include "Queue01.h"
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
#include "usealgo.h"
#include "useless.h"
#include "Someclass.h"
#include "lambda.h"
#include "wrapped.h"
#include "LinkList.hpp"
#include "Array.hpp"

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
//    Workers* pWorker = new Workers[SIZE];
//    pWorker[0] = Workers("Jim", 1001);
//    pWorker[1] = Workers("Tom", 1002);
//    pWorker[2] = Workers("Tim", 1003);
//    Queue<Workers> queue(3);
//    while (queue.queuecount() < 3)
//        queue.enqueue(pWorker[count++]);
//    if (queue.queuecount() == 3){
//        std::cout << "The Queue is full, the elements are: \n";
//    }
//    queue.show();
//    while (queue.queuecount() > 0)
//        queue.dequeue(pWorker[--count]);
//    if (queue.queuecount() == 0){
//        std::cout << "The Queue is empty now. \n";
//    }
//    delete[] pWorker;

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

double sum(std::initializer_list<double> il) {
    double t = 0;
    for (auto p = il.begin(); p != il.end(); p++) {
        t += *p;
    }
    return t;
}

template<typename T, typename U>
auto eff(T t, U u) -> decltype(t*u) {
    
}

inline double f(double tf) {
    return 5.0 * (tf - 2) / 4.0;
}

void test_C11Standard() {
    char c1 = 1.57e27;
    double total = sum({1,2,3,4,5});
    printf("%f\n", total);
//    char c2 {1.57e27}; complie error on c++11
    
    vector<int> v(6);
    for (int &x : v) {
        x = rand();
    }
    auto iter = v.begin();
    while (iter != v.end()) {
        printf("%i\n", *iter);
        iter++;
    }
}

void rvaltest() {
    double x = 3;
    double && y = 4;
    double && z = 5 * x + 10;
    double && a = f(z);
    
    cout << x << " " << &x << endl;
    cout << y << " " << &y << endl;
    cout << z << " " << &z << endl;
    cout << a << " " << &a << endl;
}

void test_useless() {
    Useless one(10 ,'x');
    Useless two = one;
    Useless three(20, 'o');
    Useless four(one + three);
    
    one.ShowData();
    two.ShowData();
    three.ShowData();
    four.ShowData();
    
//    printf("haha");
}

void test_somecls() {
    Someclass sc;
    // sc.redo(5); // Complie error : Call to deleted member function 'redo'
}

template <class T>
struct MyIter {
    typedef T value_type;
    T* ptr;
    MyIter(T *p = 0) : ptr(p) {}
    T &operator*() const { return *ptr; }
};

template <class I, class T>
void func_impl(I iter, T t) {
    T tmp;
}

template <class I>
inline void func(I iter) {
    func_impl(iter, *iter);
}

void test_set() {
    string system_class_name_array[] = {
        "ABPersonViewController",
        "ACAccount",
        "ACAccountCredential",
        "ACAccountStore",
        "ADBannerView"
    };
    set<string> system_class_array = set<string>(system_class_name_array, system_class_name_array + sizeof(system_class_name_array) / sizeof(string));
    
    for (auto iter = system_class_array.begin(); iter != system_class_array.end(); iter++) {
        string str = *iter;
        printf("%s\n", str.c_str());
    }
}

void testPalindrome() {
//    string str = "abcddcba";
//    LinkList ss = LinkList();
//    bool result = ss.isPalindrome(str);
//    printf("%s\n", result ? "yes" : "no");
}

void test_hasCycle() {
    ListNode *n1 = new ListNode(1);
    ListNode *n2 = new ListNode(2);
    ListNode *n3 = new ListNode(3);
    ListNode *n4 = new ListNode(4);
    ListNode *n5 = new ListNode(5);
    ListNode *n6 = new ListNode(6);
    ListNode *n7 = new ListNode(7);
    ListNode *n8 = new ListNode(8);
    ListNode *n9 = new ListNode(9);
    ListNode *n10 = new ListNode(10);
    ListNode *n11 = new ListNode(11);
    ListNode *n12 = new ListNode(12);
    ListNode *n13 = new ListNode(13);
    
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n8;
    n8->next = n9;
    n9->next = n10;
    n10->next = n11;
    n11->next = n12;
    n12->next = n13;
    n13->next = n6;
    
    LinkList ss = LinkList();
//    bool res = ss.hasCycle(n1);
//    string log = res?"yes":"no";
//    std::cout << log << endl;
    
    ListNode *start = ss.findCycleStart(n1);
    start->print();
}

void test_linklist() {
    ListNode *nodeLists[] = {
        new ListNode(1),
        new ListNode(3),
        new ListNode(5),
        new ListNode(7),
        new ListNode(9)
    };
    
    int count = sizeof(nodeLists) / sizeof(ListNode *);
    for (int i = 0; i < count; i++) {
        ListNode *cur = nodeLists[i];
        if (i == count - 1) {
            cur->next = nullptr;
        } else {
            cur->next = nodeLists[i + 1];
        }
    }
    
    ListNode *nodeLists1[] = {
        new ListNode(2),
        new ListNode(4),
        new ListNode(6),
        new ListNode(8),
        new ListNode(10),
        new ListNode(12),
    };
    
    int count1 = sizeof(nodeLists1) / sizeof(ListNode *);
    for (int i = 0; i < count1; i++) {
        ListNode *cur = nodeLists1[i];
        if (i == count - 1) {
            cur->next = nullptr;
        } else {
            cur->next = nodeLists1[i + 1];
        }
    }
    
    ListNode *node;
    ListNode *head = nodeLists[0];
    ListNode *head1 = nodeLists1[0];
    
    LinkList ss = LinkList();
    
    node = ss.middleNode(head);
//    node = ss.removeFromEnd(head, 2);
//    node = ss.mergeTwoLists(head, head1);
//    node = ss.removeNthFromEnd1(head, 2);
//    node = ss.removeNthFromEnd(head, 2);
//    node = ss.reverse(nodeLists[0]);
//    node = ss.reverseKGroup(nodeLists[0], 2);
    node->output();
    nodeLists[0]->output();
}

void test_array() {
    Array arr = Array();
    int nums[] = {0,0,1,1,1,2,2,3,4};
    int size = sizeof(nums)/sizeof(int);
    
    arr.moveZerosToEnd(nums, size);
//    int output = arr.removeElement(nums, size, 1);
//    int output = arr.removeDulicates(nums, size);
    for (int i : nums) {
        cout << i << endl;
    }
}

void test_array_list_duplicates() {
    ListNode *nodeLists[] = {
        new ListNode(0),
        new ListNode(0),
        new ListNode(1),
        new ListNode(1),
        new ListNode(2),
        new ListNode(3),
        new ListNode(4),
        new ListNode(4),
        new ListNode(5)
    };
    
    int count = sizeof(nodeLists) / sizeof(ListNode *);
    for (int i = 0; i < count; i++) {
        ListNode *cur = nodeLists[i];
        if (i == count - 1) {
            cur->next = nullptr;
        } else {
            cur->next = nodeLists[i + 1];
        }
    }
    
    ListNode *node;
    ListNode *head = nodeLists[0];
    Array *arr = new Array();
    ListNode *res = arr->deleteDuplicates(head);
    res->output();
    
    
}

int main(int argc, const char * argv[]) {
//    test_array_list_duplicates();
    test_array();
//    test_set();
    
//    int i;
//    func(&i);
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
//    test_list_rmv();
//    inputData();
//    test_execrise();
//    print_reduce();
    
//    long array[] = {5,7,3,4,1,2,3,4,1};
//    int size = sizeof(array) / sizeof(long);
    
//    for (int i = 0; i < 50; i++) {
//        print_lotto(51,10);
//        cout << endl;
//    }
//    test_time();
//    test_C11Standard();
//    rvaltest();
//    test_useless();
//    test_lambda();
//    test_exercise2();
//    test_linklist();
//    test_hasCycle();
    
    return 0;
}
