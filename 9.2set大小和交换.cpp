//
// Created by 之倾 on 2022/10/16.
//
//#include <iostream>
//#include <set>
//using namespace std;
//void printset(const set<int>&s){
//    for(set<int>::const_iterator it =s.begin(); it != s.end(); it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
////set容器大小和交换set容器
////大小
//void test01(){
//    set<int>s1;
//    s1.insert(10);
//    s1.insert(40);
//    s1.insert(70);
//    s1.insert(90);
//    printset(s1);
//    //判断是否为空
//    if(!s1.empty()){
//        cout<<"s1不为空"<<endl;
//        cout<<"s1的大小为:"<<s1.size()<<endl;
//    } else{
//        cout<<"s1为空"<<endl;
//    }
//
//}
////交换
//void test02(){
//    set<int>s1;
//    s1.insert(10);
//    s1.insert(40);
//    s1.insert(70);
//    s1.insert(90);
//
//    set<int>s2;
//    s2.insert(100);
//    s2.insert(400);
//    s2.insert(700);
//    s2.insert(900);
//    cout<<"交换前"<<endl;
//    printset(s1);
//      printset(s2);
//
//   s1.swap(s2);
//    cout<<"交换后"<<endl;
//    printset(s1);
//    printset(s2);
//}
//int main() {
// // test01();
// test02();
//}