#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <assert.h>

template <typename T,typename Comp>
void CP::priority_queue<T,Comp>::change_value(size_t pos,const T& value) {
  //write your code here
  mData[pos] = value;
  if (!mLess(value,mData[(pos-1)/2]) && value != mData[(pos-1)/2]) fixUp(pos);
  else if (2*pos+1 < mSize && mLess(value,mData[2*pos+1]) || 2*pos+1 < mSize && mLess(value,mData[2*pos+2])) fixDown(pos);
}

#endif
