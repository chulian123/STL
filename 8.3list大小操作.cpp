//
// Created by 之倾 on 2022/10/13.
//
//#include <iostream>
//#include <list>
//using namespace std;
////list容器操作大小
//
//void printlist(const list<int> &v){
//    for(list<int>::const_iterator it =v.begin(); it!= v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//void test01(){
//    list<int>l;
//    l.push_back(10);
//    l.push_back(20);
//    l.push_back(30);
//    l.push_back(30);
//
//    printlist(l);
//
//    //判断容器是否为空
//    if(l.empty()){
//        cout<<"l为空"<<endl;
//    } else{
//        cout<<"l不为空"<<endl;
//        cout<<"l1的元素个数为："<<l.size()<<endl;
//    }
//    //重新制定大小
//    l.resize(10,60);
//    printlist(l);
//
//    l.resize(2);
//    printlist(l);//10 ，20
//}
//int main() {
//  test01();
//}