//
// Created by 之倾 on 2022/10/14.
//
//#include <iostream>
//#include <list>
//using namespace std;
////front 返回第一个元素
////back 返回最后一个元素
//void test01(){
//    list<int>l;
//    l.push_back(10);
//    l.push_back(20);
//    l.push_back(30);
//    l.push_back(40);
//
//   //l[0] 不可以用中括号来访问
//   //l.at(0)不可以用at方式来访问
//   //原因list本质是一个链表 不是连续线性空间存储数据的 送代器也是不可以随机访问的
//   cout<<"第一个元素为："<<l.front()<<endl;
//   cout<<"最后一个元素"<<l.back()<<endl;
//   //验证送代器是不支持随机访问的
//   list<int>::iterator it =l.begin();
//   it++;//支持双向
//   it--;
//  //it=it+1;//不支持随机访问
//
//}
//int main() {
//   test01();
//}