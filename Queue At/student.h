#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
    idx = (mSize+idx)%mSize;
    int k = (mFront+idx)%mCap;
    return mData[k];
}

#endif
