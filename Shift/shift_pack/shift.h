void shift(int k) {
	// TODO: Add your code here
	if (k < 0 && mSize > 1){
        while (k++){
            node* tmp = mHeader->prev;
            node* first = mHeader->next;
            mHeader->next = tmp;
            mHeader->prev = tmp->prev;
            tmp->prev->next = mHeader;
            first->prev = tmp;
            tmp->next = first;
            tmp->prev = mHeader;
        }
    } else if (k > 0 && mSize > 1){
        while (k--){
            node* tmp = mHeader->next;
            node* last = mHeader->prev;
            mHeader->next = tmp->next;
            tmp->next->prev = mHeader;
            last->next = tmp;
            tmp->prev = last;
            tmp->next = mHeader;
            mHeader->prev = tmp;
        }
    }
}
