//Node class reprsenting a node in the linked list
public class Node
{
    //Data hold the value of the node
    public int Data { get; set; }
    //Next hold the address of the next node
    public Node Next { get; set; }
}



public class Program
{
    //Define a method to create a linked list from an array
    public static Node createLinkedList(int[] arr)
    {
        //Declear variable
        Node head= null, temp=null,current=null;

        foreach (var data in arr)
        {
            //Dynamically allocate memory space using new
            temp = new Node();

            //Set the data for the current node
            temp.Data = data;
            temp.Next = null;


            //If head is null, set head and current to temp
            //if not, set the next of the  current node to temp and update the current 
            if (head == null)
            {
                head = temp;
                current = temp;
            }
            else
            {
                current.Next = temp;
                current = current.Next;
            }
        }
        return head;
    }

    //Define a method to print the linked list
    public static void PrintLinkedList(Node head)
    {
        //Tranverse the linked list and print the each element
        while (head != null)
        {
            Console.Write(head.Data + "->");
            head = head.Next;
        }

        //After finish loop then make it Null
        Console.WriteLine("NULL");
    }

    public static void Main()
    {
        //Define an array with element
        int[] arr = { 1, 52, 33, 14, 55 };

        //Call CreateLinked List method
        Node node = createLinkedList(arr);

        //Print the Linked List
        PrintLinkedList(node);
    }
}