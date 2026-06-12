#include <stdio.h>
#include <stdio.h>



struct _node{
    int value;
    struct _node *left, *right;

};
typedef struct _node Node;

Node *createNode(int val){
    Node *new = malloc (sizeof(Node));

    new->value = val;
    new->left = NULL;
    new->right = NULL;

    return new;
}

Node *addElement(Node *root, Node *new){

    if(root == NULL){
        return new;
       
    }
    if(new->value < root->value){

        //esquerda
        root->left = addElement(root->left, new);

    }
    else{
        //direita
        root->right = addElement(root->right, new);
    }
    
    return root;

}


Node *getBusca(Node *raiz, int key){
        Node *aux = raiz;
        if (raiz == NULL){ 
        return NULL;
        }
        while (aux != NULL){
            if (aux->value==key){
                return aux;
            }

            if (key > aux->value){
                aux = aux->right;
            }   
            else{
            aux = aux->left;
          }
        }
        return aux;
    }


   /* void showPreOrder (Tree *root)
{
    if (root==NULL) return;
    printf("%d ",root->value);
    showPreOrder(root->left);
    showPreOrder(root->right);
}

*/  






int main(){

    Node *root = NULL;

    root = addElement(root, createNode(45));








    return 1;
}