#include <iostream>
#include <vector>
#include <string>

using namespace std;

void test1()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto &i : v)
        i *= i;
    for(auto i : v)
        cout << i << " ";
    cout << endl;
}

void test2()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while(cin >> grade){
        if(grade <= 100)
            ++scores[grade/10];
    }
}

void test3()    // 读入一组字符串存入 vector，然后把所有字符串 变为大写。
{
    vector<string> words;
    string s;

    while(cin >> s){            // 读字符串
        words.push_back(s);     // 存入words
    }

    for(auto &word : words){    // 遍历 vector words 中的每一个元素, 存入string word
        for (auto &c : word){   // 遍历 string word 中的每一个字符，存入 char c
            c = toupper(c);     // 将 c 变为大写
        }
    }

    for(auto &word : words){    // 遍历words中的每一个元素，存入word
        cout << word << " ";    // 输出 word
    }
}

void demo1(){
    vector<int> ivec;       // vector<int> ivec(0);
    ivec[0] = 42;           // ivec是空vector，越界访问
}
void demo2(){
    vector<int> ivec;
    ivec.push_back(42);
}
void demo3(){
    vector<int> ivec(1);
    ivec[0] = 42;
}
void demo4(){
    vector<int> ivec{42};
}

void test4()
{
    // 错误用法
    demo1();

    // 正确如下
    demo2();
    demo3();
    demo4();
}

/*****************************
*   读入一组整数存入 vector：
    (1)输出相邻两个数的和
    (2)输出首尾两个数的和
******************************/
// (1)输出相邻两个数的和
void test5_1(){
    vector<int> nums;
    int x;

    // 输入整数x，并存入vector nums
    while (cin >> x){
        nums.push_back(x);
    }
    cout << nums.size() << endl;
    for(int i = 0; i < nums.size() - 1; i++){
        cout << "adjacent :" <<nums[i] + nums[i+1] << " ";
    }
}

// (2)输出首尾两个数的和
void test5_2(){
    vector<int> nums;
    int x;

    // 输入整数x，并存入vector nums
    while (cin >> x){
        nums.push_back(x);
    }
    cout << nums.size() << endl;
    
    for (int i = 0; i < nums.size() / 2; i++) {
        cout << "head tail:" << nums[i] + nums[nums.size() - 1 - i] << " ";
    }
}

int main()
{
    // test1();
    // test2();
    // test3();
    // test4();
    // test5_1();
    test5_2();

    return 0;
}