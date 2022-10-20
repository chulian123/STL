//
// Created by 之倾 on 2022/10/19.
//
//#include<iostream>
//using namespace std;
//
//class Myadd{
//public:
//    int operator()(int v1, int v2){
//        return v1+v2;
//    }
//};
////1、函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
//void test01(){
//    Myadd myadd;
//    cout<<myadd(10,10)<<endl;
//}
////2、函数对象可以有自己的状态
//class Myprint{
//public:
//     Myprint(){
//         this->count=0;
//     }
//    void operator()(string test){
//        cout << test <<endl;
//        this->count++;
//    }
//    int count;//记录内部的状态
//
//};
//
//void test02(){
//    Myprint myprint;
//    myprint("hello");
//    cout<<"myprint调用次数"<<myprint.count<<endl;
//}
////3、函数对象可以作为参数传递
//void doprint(Myprint &mp,string test){
//   mp(test);
//}
//void test03(){
//    Myprint myprint;
//    doprint(myprint,"C++");
//}
//
//
//int main(){
//    test01();
//    test02();
//    test03();
//}
