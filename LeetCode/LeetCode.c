//leetcode - 1
/*
#include<stdio.h>

int* twoSum(int* nums, int  N, int target, int* returnSize){
    int *arr = malloc(2*sizeof(int));
    *returnSize = 2;
    for(int i=0; i < N-1; i++){
        for(int j=i+1; j < N; j++){
            if(nums[i] + nums[j] == target){
                arr[0] = i; arr[1] = j;
                return arr;
            }
        }
    }
    return arr;
}
int main()
{
    int nums[]={2,7,11,15};
    int target=9;
    int returnSize;
    int *result = twoSum(nums,4,target,&returnSize);
}
*/
/*
#include <stdio.h>

int max_of_four(int* a,int* b,int* c ,int* d){
    if(a<b && c<b && d<b)
        return b;
    else if(b<a && c<a && d<a)
    return a;
    else if(a<c && b<c && d<c)
    return c;

    else {
    return d;
    }
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

// Function to get the integer value of a Roman numeral character
int romanCharToInt(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; // should never reach here if input is valid
    }
}

// Function to convert Roman numeral string to integer
int romanToInt(char *s) {
    int ans = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        int currentVal = romanCharToInt(s[i]);

        int nextVal = (i + 1 < length) ? romanCharToInt(s[i + 1]) : 0;


        if (currentVal < nextVal) {
            ans -= currentVal;
            printf("%d\n",ans);
        } else {
            ans += currentVal;
            printf("%d\n",ans);
        }

    }

    return ans;
}

int main() {
    char romanNumeral[] = "MCMXCIV";
    int result = romanToInt(romanNumeral);
    printf("The integer value of %s is %d\n", romanNumeral, result);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** str,int strsize){
    if(strsize==0)
        return "";
    char*prefix;

    strcpy(prefix,str[0]);

    for(int i=1;i<strsize;i++)
    {
        while(strncmp(prefix,str[i],strlen(prefix))!=0)
        {
            prefix[strlen(prefix)-1]='\0';

            if(strlen(prefix)==0)
                return "";
        }
    }
    return prefix;
}

int main() {

    char *strs1[] = {"flower", "flow", "flight"};
    int strsSize1 = 3;
    char * result = longestCommonPrefix(strs1, strsSize1);
    printf("Example 1: %s\n",result);

}
*/

//Valid Parentheses

#include <stdbool.h>
#include <string.h>

bool isValid(char * s) {
    int len = strlen(s);// Calculate the length of the input string
    char stack[len];      // Create a stack with size equal to the length of the string
    int top = -1;
      // Initialize the top of the stack to -1 (indicating an empty stack)

    // Iterate through each character in the string
    for (int i = 0; i < len; i++) {
        // If the character is an opening bracket, push it onto the stack
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {

            stack[++top] = s[i];

        } else {
            // If the stack is empty, return false (no matching opening bracket)
            if (top == -1) {
                return false;
            }
            // Check if the current closing bracket matches the top of the stack
            if ((s[i] == ')' && stack[top] == '(') ||(s[i] == '}' && stack[top] == '{') || (s[i] == ']' && stack[top] == '[')) {

                top--; // Pop the stack

            } else {
                return false; // Mismatched closing bracket
            }
        }
    }

    // Return true if the stack is empty, false otherwise
    return top == -1;
}

int main(){
char *test = "({[]})";
bool result = isValid(test);

if (result) {
    printf("The string is valid.\n");
} else {
    printf("The string is invalid.\n");
}
}
