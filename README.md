####scrabbleD403.c
Well this problem is really frustrating
See the snippet:
```
    char word[MAX_LEN + 1] = {'\0'}, chara[26] = {0}, tmp[MAX_LEN + 1] = {'\0'}, num=0;
    bool *ava;
    fgets(word, sizeof(word), stdin);
	scanf("%d", &num);
	printf("%d", word[0]);
    for (int i = 0; word[i] != '\0'; i++) {
            chara[word[i] - 'A']++;
    }
```
I realized the content in for-loop is never executed. And after I switched num to int:
```
    char word[MAX_LEN + 1] = {'\0'}, chara[26] = {0}, tmp[MAX_LEN + 1] = {'\0'} ;
	int num=0;
    bool *ava;
    fgets(word, sizeof(word), stdin);
	scanf("%d", &num);
	printf("%d", word[0]);
    for (int i = 0; word[i] != '\0'; i++) {
            chara[word[i] - 'A']++;
    }
```
Everything goes well. Why?
#####First Issue:
The answer is: num and *word are stored in adjacent memory address, and when I use %d for num of "char" type. %d expects 4 bytes but only 1 was allocated for num, so the overflow data corrupted part of *word.

#####Second Issue:
When ```scanf()``` is used, it skips leading blank character, and newline character is left in buffer(not included by ```scanf() ```                     )
In comparison, ```fget()``` views the first line feed it encounters as the end of input line and the line feed in included in the string.
Therefore, the \n left by ```scanf()``` is read by ```fget()```.

#####olution:
Think about it, if we use two scanf(), everything is gonna be OK cause the ``` scanf()``` for word is skipping the leading blank.

So apart from the lin feed problem, correcting the data type of num is also the key. We need to make compiler give sufficent space for it so that it doesnt harm the memory of word.

Also, the ```scanf()``` for the number coming before that for the word also solves the problem as the corrupted space allocated for *word will be overwritten later by the input.
