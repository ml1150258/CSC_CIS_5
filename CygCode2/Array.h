//Class Specification normally put into a .h file
class Array {
    private:
        int utlSize;  // Size of the array
        int *data; // Pointer to hold array dat
    public:
        void fillAry(int=100);
        void prntAry(int = 10);
        void markSrt();
        void selSrt();
        void bubSrt();
        int linSrch(int);
        int binSrch(int);
        void cleanUp() {
            delete []data; // Free dynamically allocated memory
        }
};
void Array::bubSrt(){
    bool swap; // Flag to check if a swap occurred
    int n = utlSize; // Size of the array
    do{
        swap = false; // Flag to check if a swap occurred
        for(int i = 0; i < n - 1; i++) { // Loop through the array
            if(data[i] > data[i + 1]) { // If the current element is greater than the next
                int temp = data[i]; // Swap the elements
                data[i] = data[i + 1];
                data[i + 1] = temp;
                swap = true; // Set flag to true indicating a swap occurred
            }
        }
        n--; // Reduce the size of the array to be sorted
    } while(swap); // Continue until no swaps occur
}

void Array::selSrt(){
    for(int lstStrt=0; lstStrt<utlSize-1; lstStrt++){// Start beginning of array
        int minIdx = lstStrt; // Assume the first element is the minimum
        for(int pos=lstStrt+1; pos<utlSize; pos++){// Compare every element in list with the beginning of the list
            if(data[pos]<data[minIdx]){//Memory Swap if out of order
                minIdx = pos; // Update minimum index
            }
        }
        int temp=data[minIdx]; // Swap the found minimum element with the first element
        data[minIdx]=data[lstStrt];
        data[lstStrt]=temp;
    }
}


void Array::markSrt(){
    for(int lstStrt=0; lstStrt<utlSize-1; lstStrt++){// Start beginning of array
        for(int pos=lstStrt+1; pos<utlSize; pos++){// Compare every element in list with the beginning of the list
            if(data[pos]<data[lstStrt]){//Memory Swap if out of order
                int temp=data[pos];
                data[pos]=data[lstStrt];
                data[lstStrt]=temp;
            }
        }
    }
}

int Array::linSrch(int val){
    //Linear search for a value in the array
    for(int i = 0; i < utlSize; i++) {
        if(data[i] == val) return i; // Return index if found
    }
    return -1; // Return -1 if not found
}

int Array::binSrch(int val){
    //Binary search for a value in the sorted array
    int first = 0, last = utlSize - 1, middle;
    while(first <= last) {
        middle = (first + last) / 2; // Find the middle index
        if(data[middle] == val) return middle; // Return index if found
        else if(data[middle] < val) first = middle + 1; // Search in the right half
        else last = middle - 1; // Search in the left half
    }
    return -1; // Return -1 if not found
}

void Array::fillAry(int size) {
    //Fill the array with random numbers
    if(size <= 0) {
        utlSize = 100; // Default size if invalid
    } else {
        utlSize = size; // Set the size of the array
    }
    data = new int[utlSize]; // Dynamically allocate memory for the array
    for(int i = 0; i < utlSize; i++) {
        data[i] = rand() % 90+10; // Random numbers between 10 and 99
    }
}

void Array::prntAry(int perLine) {
    //Print the array elements
    cout << "Array elements: "<<endl;
    for(int i = 0; i < utlSize; i++) {
        cout << data[i] << " ";
        if ((i + 1) % perLine == 0) {
            cout << endl; // New line after 'perLine' elements
        }
    }
    cout << endl;
}