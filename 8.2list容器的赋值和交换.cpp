//
// Created by 之倾 on 2022/10/13.
//
//#include <iostream>
//#include <list>
//using namespace std;
////list容器赋值和交换
//
//void printlist(const list<int> &v){
//    for(list<int>::const_iterator it =v.begin(); it!= v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
////赋值
//void test01(){
//    list<int>l1;
//    l1.push_back(10);
//    l1.push_back(20);
//    l1.push_back(30);
//    l1.push_back(40);
//
//    printlist(l1);
//
//    list<int>l2;
//    l2 =l1;
//    printlist(l2);
//
//    list<int>l3;
//    l3.assign(l2.begin(),l2.end());
//    printlist(l3);
//
//    list<int>l4;
//    l4.assign(5,100);
//    printlist(l4);
//}
////交换
//void test02(){
//    list<int>l1;
//    l1.push_back(10);
//    l1.push_back(20);
//    l1.push_back(30);
//    l1.push_back(40);
//
//    list<int>l2;
//    l2.assign(10,50);
//    cout<<"交换前："<<endl;
//    printlist(l1);
//    printlist(l2);
//    l1.swap(l2);
//    cout<<"交换后："<<endl;
//    printlist(l1);
//    printlist(l2);
//
//}
//
//int main() {
//    //test01();
//    test02();
//}