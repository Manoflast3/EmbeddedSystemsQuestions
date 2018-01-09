
void * malloc(int numBytes) {

    void * s = sbrk*(0);
    void * request = sbrk(numBytes); 
    if (request == (void*) -1) {
        return NULL; 
    } else { 
        assert(s == request); 
        return s; 
    }

}


// Question 2: How will you allocate dynamic memory for two dimensional array

malloc(d1*sizeof(data)*d2 )
