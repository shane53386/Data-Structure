#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const
{
    std::vector<T> res;
    //write your code only here
    for (int i = 0; i < k; i++){
        res.push_back(mData[(mFront+i)%mCap]);
        if (i == mSize-1) break;
    }
    return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to)
{
    //write your code only here
    mData = new T[to-from];
    for (auto it = from; it < to; it++)
    {
        mData[it-from] = *it;
    }
    mSize = to-from;
    mCap = to-from;
    mFront = 0;
}

#endif
