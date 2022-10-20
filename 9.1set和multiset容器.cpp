//
// Created by 之倾 on 2022/10/16.
//
//#include <iostream>
//#include <set>
//using namespace std;
//void printset(set<int> &s){
//    for (set<int>::iterator it = s.begin(); it != s.end();it++) {
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
////set容器的构造和赋值
//void test01(){
//    set<int>s1;
//    //插入数据只有insert
//    s1.insert(10);
//    s1.insert(20);
//    s1.insert(40);
//    s1.insert(30);
//    s1.insert(40);
//    //遍历容器
//    //set容器特点，所有元素都会自动排序
//    //set容器不允许插入重复值
//    printset(s1);
//
//    //拷贝构造
//    set<int>s2(s1);
//    printset(s2);
//
//    //赋值操作
//    set<int>s3;
//    s3=s2;
//    printset(s3);
//
//}
//
//int main() {
//  test01();
//}