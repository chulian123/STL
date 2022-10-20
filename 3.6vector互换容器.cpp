//
// Created by 之倾 on 2022/10/10.
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
////vector容器互换
//void printVector(vector<int>&v){
//    for (vector<int>::iterator it =v.begin();it != v.end();it++) {
//          cout<<*it<<" ";
//    }
//    cout<<endl;
//}
////1.基本使用
//void test01(){
//    vector<int> v1;
//    vector<int> v2;
//    for (int i = 0; i < 10; i++) {
//        v1.push_back(i);
//    }
//    cout<<"交换前"<<endl;
//    printVector(v1);
//
//    for (int i = 10; i >0; i--) {
//        v2.push_back(i);
//    }
//    printVector(v2);
//    v1.swap(v2);//交换函数
//    cout<<"交换后"<<endl;
//    printVector(v1);
//    printVector(v2);
//}
////2.实际用途
////swap可以收纳内存空间
//void test02(){
//    vector<int>v;
//    for (int i = 0; i < 10000; i++) {
//        v.push_back(i);
//    }
//    cout<<"v的容量："<<v.capacity() <<endl;
//    cout<<"v的大小："<<v.size() <<endl;
//    v.resize(3);//重新制定大小
//    cout<<"v的容量："<<v.capacity() <<endl;
//    cout<<"v的大小："<<v.size() <<endl;
//    //swap可以收纳内存空间
//    vector<int>(v).swap(v);
//    cout<<"v的容量："<<v.capacity() <<endl;
//    cout<<"v的大小："<<v.size() <<endl;
//
//
//}
//
//int main() {
//  //test01();
//  test02();
//}