// Stack class.
class Stack {
    int topp;
    int *arr;
    int size;
    
public:
    
    Stack(int capacity) {
        // Write your code here.
        this->topp=-1;
        this->size=capacity;
        arr=new int[capacity];
    }

    void push(int num) {
        // Write your code here.
        if(size-topp>1){
            topp++;
            arr[topp]=num;
        }
        else{
            return;
        }
        
    }

    int pop() {
        // Write your code here.
        if(topp>=0){
            topp--;
            return arr[topp+1];
        }
        else{
            return -1;
        }
    }
    
    int top() {
        // Write your code here.
        if(topp>=0){
            return arr[topp];
        }
        else{
            return -1;
        }
    }
    
    int isEmpty() {
        // Write your code here.
        if(topp==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    int isFull() {
        // Write your code here.
        if(topp==size-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    
};
