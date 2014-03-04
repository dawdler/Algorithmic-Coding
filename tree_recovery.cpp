#include <iostream>
#include<cstdio>
#include<cstring>

char preorder[30];
char inorder[30];

void recover(int x1, int y1, int x2, int y2) {

    char t = preorder[x1];
    if(x1 == y1) {
        printf("%c", t);
        return;
    }  

    // locate the root position in in-order 
    // which split the travel seq into two halves
    int pos;
    for(int i = x2; i <= y2; ++i)
        if(inorder[i] == t) {
            pos = i;
            break;
        }

    int p = x1+pos-x2;

    // visit left sub-tree
    if(pos-1 >= x2)
        recover(x1+1, p , x2, pos-1);
    // visit right sub-tree
    if(y2 >= pos+1)
        recover(p+1, y1, pos+1, y2);

    // postorder -> print root at last
    printf("%c", t);
}
int main() {

    while(scanf("%s %s ",preorder, inorder) != EOF) {
        int L = strlen(preorder) - 1;
        recover(0, L, 0, L); // first <0,L> is preorder index, second <0,L> is in-order index
        printf("\n");
    }
}
