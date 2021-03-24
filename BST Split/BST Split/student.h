#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <iostream>
template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
    CP::map_bst<KeyT,MappedT,CompareT> result;

    node* ptr = mRoot;

    while (ptr != NULL){
        std::cout << ptr->data.first << "\n";
        int cmp = compare(val, ptr->data.first);
        if (cmp == 0) break;
        ptr = cmp < 0 ? ptr->left : ptr->right;
    }

    if (ptr == mRoot){
        std::cout << "R" << "\n";
        mRoot = ptr->left;
        mRoot->parent = NULL;
        result.mRoot = ptr;
        ptr->left = NULL;
    } else if (ptr != NULL){
        std::cout << "NN" << "\n";
        ptr->parent->right = NULL;
        ptr->parent = NULL;
        result.mRoot = ptr;
    }
    return result;
}


#endif
