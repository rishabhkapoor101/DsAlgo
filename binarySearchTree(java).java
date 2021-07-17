import java.util.*;

class Leaf{
  int data;
  Leaf left;
  Leaf right;

  Leaf(int data){
    this.data = data;
    left = null;
    right = null;
  }

}


class Bst{
  Leaf root;

  Bst(){
    root = null;
  }

  public void addLeaf(int data){
    Leaf temp = new Leaf(data);
    
    if(root == null){
      root = temp;
    }
    else{
      Leaf po = root;

      while((po.left!=null && po.data>data) || (po.right!=null && po.data<data)){
        
        if(po.data > data) po = po.left;

        else po = po.right;
      }

      if(po.data>data) po.left = temp;

      else po.right = temp;

    }

  }
  
  void printInorder(Leaf root){
    
    if(root == null) return;

    printInorder(root.left);
    System.out.print(root.data+"   ");
    printInorder(root.right);
  }

  Leaf getRoot(){
    return this.root;
  }

}



class Main{
  public static void main(String[] args){
   
    Bst tree1 = new Bst();

    for(int i=10; i>=1; i--){
      tree1.addLeaf(i);
    }

    tree1.printInorder(tree1.getRoot());

  }
}


























