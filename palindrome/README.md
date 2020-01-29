## 使用堆疊進行迴文檢查
迴文的定義為正向，反向讀到的字串均相同。如：abba , abcba ... 等就是迴文。<br>
根據輸入的字串，判斷該字串是否是一個迴文?<br>
作法要求為須使用陣列堆疊來進行處理，堆疊所需的資料型態及相關函式如下：
```
typedef struct tagStack{
  char Item[MAX_ITEM];
  int Top;
}Stack;

int Push(Stack *,char );
int IsFull(Stack *);
int Pop(Stack *,char *);
int IsEmpty(Stack *);
void PrintStack(Stack *);
```

----

第一列輸入測試案例的個數T。緊接著是每個測試案例的資料。<br>每個測試案例的輸入為一個字串，字串的長度小於100。<br>
針對每個測試案例輸出一列結果，結果為”Yes”或”No”。Yes表示該案例是迴文，No表示該案例不是迴文。

----

|Sample Input   |Sample Output |
| --- | --- |
|2| |
|abba|Yes|
|abcd|No|
