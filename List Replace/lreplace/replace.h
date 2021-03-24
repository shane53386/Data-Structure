#include <iostream>
void replace(const T& x, list<T>& y) {
  //write your code here
  auto it = begin();
    while (it++ != end()){
        if (*it == x){
            CP::list<T> l(y);
            node* bef = it.ptr->prev;
            node* aft = it.ptr->next;
            std::cout << bef->data << "\t" << aft->data << "\n";
            std::cout << l.mHeader->next->data << "\t" << l.mHeader->next->next->data << "\t" << l.mHeader->next->next->next->data << "\t" << l.mHeader->next->next->next->next->data << "\n";
            bef->next = l.mHeader->next;
            std::cout << bef->next->data << "\n";
            l.mHeader->next->prev = bef;
            aft->prev = l.mHeader->prev;
            std::cout << aft->prev->data << "\n";
            l.mHeader->prev->next = aft;
            it = iterator(aft->prev);
            //delete l.mHeader;
            //delete it.ptr;
            mSize += l.size() - 1;
            print();
        }
    }
}
