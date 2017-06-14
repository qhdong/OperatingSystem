#include <stdio.h>
#include <unistd.h>

int main() {
    size_t page_size = sysconf(_SC_PAGESIZE);
    int a = 500;
    void *p = &a;

    printf("page size: %zu\n", page_size);
    printf("address of a: %lld, in hex: %p\n", (long long)p, p);
    printf("page number of a: %lld, in hex: %p\n",
            (long long)p / (int)page_size, (void *)((long long)p / (int)page_size));
    printf("page offset of a: %lld, in hex: %p\n",
            (long long)p % (int)page_size, (void *)((long long)p % (int)page_size));
}
