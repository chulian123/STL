////
//// Created by 之倾 on 2022/10/9.
////
//#include <iostream>
//#include <vector>
//using namespace std;
////vector容器
//void printVector(vector<int>&v)
//{
//    for (vector<int>::iterator it=v.begin();it!=v.end();it++) {
//        cout<<*it<<"";
//        cout<<endl;
//    }
//
//}
//void tets01(){
//    vector<int>v1;//默认构造 无参构造
//    for(int i=0; i<10;i++){
//        v1.push_back(i);
//    }
//    printVector(v1);
//    //通过区间方式来进行构造
//    vector<int>v2(v1.begin(),v1.end());
//    printVector(v2);
//    //n个elem方式
//    vector<int>v3(10,1020);//第一个是个数 第二是数值
//    printVector(v3);
//    //拷贝构造
//    vector<int>v4(v3);
//    printVector(v4);
//}
//
//
//int main() {
//  tets01();
//}