void insertion_sort(int arr[],int size){
    int key = -1;
    int j = -1;
    for(int i=0; i<size; i++){
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>key){
           arr[j+1] = arr[j];
           j = j - 1;
        }
        arr[j+1] = key;
    }
}
