//
// Created by 之倾 on 2022/10/13.
//
//#include <iostream>
//#include <list>
////list容器
//using namespace std;
//void printlist(const list<int>&v){
//    for(list<int>::const_iterator it =v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
//void test01(){
//    list<int>p;
//    p.push_back(10);
//    p.push_back(20);
//    p.push_back(30);
//    p.push_back(40);
//    //遍历容器
//    printlist(p);
//
//    //区间方式构造
//    list<int>p2(p.begin(),p.end());
//    printlist(p2);
//
//    //拷贝构造
//    list<int>p3(p2);
//    printlist(p3);
//    //n个elem方式
//    list<int>p4(10,50);
//    printlist(p4);
//
//}
//int main() {
//  test01();
//}