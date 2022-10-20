//
// Created by 之倾 on 2022/10/14.
//
//#include <iostream>
//#include <list>
//using namespace std;

//list插入和删除
/*
 函数原型：

push_back(elem);//在容器尾部加入一个元素
pop_back();//删除容器中最后一个元素
push_front(elem);//在容器开头插入一个元素
pop_front();//从容器开头移除第一个元素
insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
clear();//移除容器的所有数据
erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
erase(pos);//删除pos位置的数据，返回下一个数据的位置。
remove(elem);//删除容器中所有与elem值匹配的元素。
*/
//void printlist(const list<int> &v){
//    for(list<int>::const_iterator it =v.begin(); it!= v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//void test01(){
//    list<int>l;
//    //尾插
//    for (int i = 0; i <10 ; i++) {
//        l.push_back(i);
//    }
//    //头插
//
//    l.push_front(100);
//    l.push_front(200);
//    l.push_front(300);
//    //300 200 100 0 1 2 3 4 5 6 7 8 9
//    printlist(l);
//
//    //尾删
//    l.pop_back();
//    //300 200 100 0 1 2 3 4 5 6 7 8
//    printlist(l);
//
//    //头部删除
//    l.pop_front();
//    //200 100 0 1 2 3 4 5 6 7 8
//    printlist(l);
//
//    //insert插入
//    list<int>::iterator it =l.begin();
//    l.insert(++it,1000);
//    //1000 200 100 0 1 2 3 4 5 6 7 8
//    printlist(l);
//
//    //删除
//    it =l.begin();
//    l.erase(++it);
//    //1000 100 0 1 2 3 4 5 6 7 8
//    printlist(l);
//
//    //移除
//    l.push_back(10000);
//    l.push_back(10000);
//    l.push_back(10000);
//    printlist(l);
//    l.remove(10000);//会删除所有与他匹配的数据
//    printlist(l);
//
//    //清空
//    l.clear();
//    printlist(l);
//
//}
//int main() {
//    test01();
//}