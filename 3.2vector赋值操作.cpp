//
// Created by 之倾 on 2022/10/9.
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//void printVector(vector<int>&v){
//    for(vector<int>:: iterator it=v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//
//}
//
//
////vector赋值
//void test01(){
//    vector<int>v1;
//    for (int i = 0; i < 10; i++) {
//        v1.push_back(i);
//    }
//    printVector(v1);
//
//    //赋值操作 operator=
//    vector<int>v2;
//    v2=v1;
//    printVector(v2);
//
//    //assignfangs
//    vector<int>v3;
//    v3.assign(v1.begin(),v1.end());
//    printVector(v3);
//
//    //n个elem方式赋值
//    vector<int>v4;
//    v4.assign(5,80);
//    printVector(v4);
//
//
//
//}
//
//
//int main() {
//   test01();
//}