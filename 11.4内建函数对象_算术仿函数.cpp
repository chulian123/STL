//
// Created by 之倾 on 2022/10/19.
//
/*
 * 仿函数原型：

template<class T> T plus<T> //加法仿函数
template<class T> T minus<T> //减法仿函数
template<class T> T multiplies<T> //乘法仿函数
template<class T> T divides<T> //除法仿函数
template<class T> T modulus<T> //取模仿函数
template<class T> T negate<T> //取反仿函数
 */
//#include<iostream>
//#include<functional>
//using namespace std;
////内建函数对象 算法仿函数
////negate 一元仿函数 取反f仿函数
//void test01(){
//    negate<int>n;
//    //取反的数字 正得负 负得正
//    cout<<n(50)<<endl;
//    cout<<n(10)<<endl;
//    cout<<n(-50)<<endl;
//}
////plus 二次仿函数 加法
//void test02(){
//    plus<int>v;
//    cout<<v(10,20)<<endl;
//
//
//}
//
//
//int main(){
//    test01();
//    test02();
//}