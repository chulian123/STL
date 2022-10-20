//
// Created by 之倾 on 2022/10/11.
//

//两端插入操作：
//
//push_back(elem); //在容器尾部添加一个数据
//push_front(elem); //在容器头部插入一个数据
//pop_back(); //删除容器最后一个数据
//pop_front(); //删除容器第一个数据
//指定位置操作：
//
//insert(pos,elem); //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
//
//insert(pos,n,elem); //在pos位置插入n个elem数据，无返回值。
//
//insert(pos,beg,end); //在pos位置插入[beg,end)区间的数据，无返回值。
//
//clear(); //清空容器的所有数据
//
//erase(beg,end); //删除[beg,end)区间的数据，返回下一个数据的位置。
//
//erase(pos); //删除pos位置的数据，返回下一个数据的位置。
//#include <deque>
//#include <iostream>
//using namespace std;
//void printDeque(const deque<int>&d){
//    for(deque<int>::const_iterator it = d.begin();it!=d.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//
//}
////两端操作
//void test01(){
//   deque<int>v1;
//   //尾插
//   v1.push_back(10);
//   v1.push_back(20);
//   //头插
//   v1.push_front(100);
//   v1.push_front(200);
//   //200 100 10 20
//    printDeque(v1);
//
//    //尾删
//    v1.pop_back();
//    //200 100 10
//    printDeque(v1);
//
//    //头删
//    v1.pop_front();
//    //100 10
//    printDeque(v1);
//
//}
////制定位置插入删除
//void test02(){
//    deque<int>d1;
//    d1.push_back(10);
//    d1.push_back(20);
//    d1.push_front(100);
//    d1.push_front(200);
//    printDeque(d1);//200 100 20 10
//
//    //insert插入
//    d1.insert(d1.begin(),1000);
//    printDeque(d1);
//    d1.insert(d1.begin(),3,2000);//2000 2000 2000 1000 200 100 10 20
//    printDeque(d1);
//
//    //按照区间进行插入
//    deque<int>d2;
//    d2.push_back(1);
//    d2.push_back(2);
//    d2.push_back(3);
//    d1.insert(d1.begin(),d2.begin(),d2.end());
//    //1 2 3 2000 2000 2000 1000 200 100 10 20
//    printDeque(d1);
//
//
//}
////删除
//void test03(){
//    deque<int>d1;
//    d1.push_back(10);
//    d1.push_back(20);
//    d1.push_front(100);
//    d1.push_front(200);
//    printDeque(d1);
//    //删除
//    deque<int>::iterator it = d1.begin();
//    it++;
//    d1.erase(it);
//    printDeque(d1);//200 10 20
//    //按区间方式删除
//    d1.erase(d1.begin(),d1.end());
//    printDeque(d1);
//    //清空
//    d1.clear();
//    printDeque(d1);
//}
//
//
//
//int main(){
//  //test01();
//  //test02();
//  test03();
//}
