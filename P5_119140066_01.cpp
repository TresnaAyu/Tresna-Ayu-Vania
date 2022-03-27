//NIM : 119140066
//NAMA : TRESNA AYU VANIA
//TANGGAL : JUMAT , 04 DESEMBER 2020
//DESKRIPSI : SOAL 1

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node{
      int data;
      Node *left;
      Node *right;
};

void tambah(Node **root, int databaru)
{
      if((*root) == NULL)
      {
            Node *baru;
            baru = new Node;
            baru->data = databaru;
            baru->left = NULL;
            baru->right = NULL;
            (*root) = baru;
            (*root)->left = NULL;
            (*root)->right = NULL;
      }
      else if(databaru<(*root)->data)
            tambah(&(*root)->left, databaru);
      else if(databaru>(*root)->data)
            tambah(&(*root)->right, databaru);
      else if(databaru == (*root)->data);
}

void preOrder(Node *root)
{
      if(root != NULL){
           cout << root->data << " ";
            preOrder(root->left);
            preOrder(root->right);
      }
}

void inOrder(Node *root)
{
      if(root != NULL){
            inOrder(root->left);
            cout <<root->data << " ";
            inOrder(root->right);
      }
}

void postOrder(Node *root)
{
      if(root != NULL){
            postOrder(root->left);
            postOrder(root->right);
            cout << root->data << " ";
      }
}

int main()
{
      int X,Y,m;
      Node *tree;
      tree = NULL; 
      
      cin >> X;
    	if (X>=1||X<=100){
			for (int u=0;u<X;u++){
      			cin >> Y;
      			if (Y>=0||Y<=200)
      			tambah(&tree, Y);
		  }
		  
		cin >> m;
		
		switch (m){
           case 1 :
                  if(tree!=NULL)
                        preOrder(tree);
                  break;
                 
            case 2 :
                  if(tree!=NULL)
                        inOrder(tree);
                   break;     
                  
            case 3 :
                  if(tree!=NULL)
                        postOrder(tree);
                  break;
        }
	}
return 0;
}