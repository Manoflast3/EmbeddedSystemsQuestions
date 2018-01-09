

// Byte by byte memcpy
void memcpy(void *src, void *dst, int numBytes) {
    char * csrc = (char *) src;
    char * cdst = (char *) dst;
    for (int i = 0; i < numBytes; i++) {
        *cdst = (*csrc);
    }
}