long long init(int index, int start, int end){
    if (start == end)
        tree[index] = A[start];
    else{
        int mid = (start+end)/2;
        tree[index] = init(index*2+1, start, mid) + init(index*2+2, mid+1, end);
    }
    return tree[index];
}

long long sum(int index, int start, int end, int left, int right){
    // 구간이 전혀 겹치지 않는 경우
    if (start > right || end < left)
        return 0;
    else if (left <= start && end <=right)
        return tree[index];
    else {
        int mid = (start+end) / 2;
        return sum(index*2+1, start, mid, left, right) + sum(index*2+2, mid+1, end, left, right);
    }
}

void update(int changed_index, long long diff, int index, int start, int end){
    if (changed_index < start || changed_index > end)
        return;
    tree[index] += diff;
    
    if (start != end){
        int mid = (start+end) / 2;
        update(changed_index, diff, index*2+1, start, mid);
        update(changed_index, diff, index*2+2, mid+1, end);
    }
}