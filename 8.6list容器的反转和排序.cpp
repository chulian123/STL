//
// Created by 之倾 on 2022/10/15.
//
//#include <iostream>
//#include <list>
//using namespace std;
////list容器反转和排序
//
//void printlist(const list<int> &v){
//    for(list<int>::const_iterator it =v.begin(); it!= v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//bool myComepare(int v1,int v2){
//    //降序操作 就让第一个数大于第二数字
//    return v1 >v2;
//
//}
//
//
//void test01(){
//    //反转
//    list<int>l;
//    l.push_back(20);
//    l.push_back(30);
//    l.push_back(10);
//    l.push_back(40);
//    cout<<"反转前："<<endl;
//    printlist(l);
//    //反转操作
//    l.reverse();
//    cout<<"反转后："<<endl;
//    printlist(l);
//
//}
////排序操作
//void test02(){
//    list<int>l;
//    l.push_back(20);
//    l.push_back(30);
//    l.push_back(10);
//    l.push_back(40);
//    //排序
//    cout<<"排序前:"<<endl;
//    printlist(l);
//    //所有不支持的随机访问送代器的容器，不可以标准的算法
//    //不支持随机访问迭代器，内部会有对应的算法
//    l.sort();
//    cout<<"排序后"<<endl;
//    printlist(l);
//    l.sort(myComepare);
//    printlist(l);
//
//
//
//
//}
//int main() {
//   //test01();
//   test02();
//}