#include "../include/myQueue.h"

using namespace std;

int main() {
    myQueue<int> nums;

    srand(time(0));

    for(int i = 0; i < 10; i++){
        nums.push_back(rand() % 101);
    }
    nums.sort("quickSort");
    nums.print();

    for(int i = 0; i < nums.size(); i++){
        if((nums[i] % 10 && !(nums[i] % 5)) || nums[i] == 5){
            nums.remove(i);
            if(i) {i--;}
        }
    }
    nums.print();

    system("pause");
    return 0;
}