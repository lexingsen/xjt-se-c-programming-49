#include <stdio.h>
#include <limits.h>


/*
块内无序，块间有序
*/

typedef struct block {
    int key;
    int start;
    int end;
} block_t;

#define N 4  // N个块
block_t table[N];

int max(int x, int y) {
    return x > y ? x : y;
}

int search(int key, int* a) {
    int i = 0; // 块下标
    int j = 0; // 块内下标
    // 查找在哪一个块当中
    while (i < N && table[i].key < key) {
        i++;
    }
    if (i >= N) {
        // 在所有的块中都没有找到满足条件的key
        return -1;
    }
    // 找到在第i块中，初始化块内起始下标
    j = table[i].start;//
    while (j <= table[i].end && a[j] != key) {
        j++;
    }
    // 查找完整个块内都没有找到满足条件的元素
    if (j > table[i].end) {
        return -1;
    }
    return j;
}

int main() {
    int arr[] = {3, 1, 4, 2, 6, 5, 8, 7, 11, 10, 9, 12, 15, 16, 14, 13};
    int i = 0;
    int j = 0;
    
    for (i = 0; i < N; i++) {
        
        int mx = INT_MIN;
        table[i].start = j;
        table[i].end = j + 3;
        int beg = 0;
        for (beg = j; beg <= j + 3; beg++) {
            mx = max(mx, arr[beg]);
        }
        table[i].key = mx;
        j += N;
    }

    for (i = 0; i < N; i++) {
        printf("[%d, %d], key = %d\n", table[i].start, table[i].end, table[i].key);
    }

    int key = -1;
    printf("input the key what you want to find:\n");
    scanf("%d", &key);
    key = 12;
    int index = search(key, arr);
    printf("the %d 's index in the table is %d\n", key, index);
    return 0;
}