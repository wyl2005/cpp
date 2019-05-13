#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

#define THREAD_NUM 5

void* hello_world(void *threadid) {
    sleep(10);
    cout << "hello world!!!, tid = "<< *(int *)threadid << endl;
    return NULL;
}


int main() {
    pthread_t tids[THREAD_NUM];
    int tid[8];
    for (int i = 0; i< THREAD_NUM; ++i)
    {
        tid[i] = i;
        cout << "i=" << i << endl;
        int ret = pthread_create(&tids[i], NULL, hello_world, (void *)&tid[i]);
        if (ret != 0)    
            cout << "pthread_create error: ret=" << ret << endl;

    }

    pthread_exit(NULL);
    return 0;
}
