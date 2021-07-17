import java.util.Scanner;

class Node{
    int data;
    Node next;

    Node(int data){
        this.data = data;
        this.next = null;
    }

}


class linkedList{
    Node head;

    public void push(int data){
        Node temp = new Node(data);

        if(head==null){
            head = temp;
        }
        else{
            Node h = head;

            while(h.next!=null){
                h = h.next;
            }

            h.next = temp;

        }

    }

    public void display(){

        Node temp = head;
        
        if(temp==null) {
        	System.out.println("List is empty.");
        }

        while(temp!=null){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
        System.out.println();
    }
    
    public void pop() {
    	Node temp = head;
    	
    	if(temp==null) {
    		System.out.println("List is already empty, nothing to pop.");
    	}
    	
    	else {
    	
	    	if(temp.next==null) head = null;
	    	else {
		    	while(temp.next.next!=null){
		    		temp = temp.next;
		    	}
		    	temp.next = null;
	    	}
    	}
    }
    
    

}
public class linkedList_Main{
    public static void main(String[] args){

        linkedList list1 = new linkedList();

        list1.push(31);
        list1.push(2);
        list1.push(3);

        list1.display();
        list1.pop();
        
        list1.display();
    }
}