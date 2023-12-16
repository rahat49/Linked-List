//Node class reprsenting a node in the linked list
public class Node
{
    //Data hold the value of the node
    public int data { get; set; }
    //Next hold the address of the next node
    public Node next { get; set; }

}
class Program
{
    //Define a method to create a linked list from an array
    static Node createLinkedList(int[] arr, int size)
    {
        //Declear variable
        Node head = null, temp = null, current = null;

        for (int i = 0; i < size; i++)
        {
            //Dynamically allocate memory space using new
            temp = new Node();

            //Set the data for the current node
            temp.data = arr[i];
            temp.next = null;

            //If head is null, set head and current to temp
            //if not, set the next of the  current node to temp and update the current 
            if (head == null)
            {
                head = temp;
                current = temp;
            }
            else
            {
                current.next = temp;
                current = current.next;
            }

        }
        return head;
    }
    //Define a method search linked list
    static int searchLinkedList(Node head, int value)
    {
        int index = 1;

        //Loop will be contine until getting head=null
        while (head != null)
        {
            //Head data is match with the value we search then return index
            //If not match then Increment index 1
            //head will be next node head
            if (head.data == value)
            {
                return index;
            }
            index++;
            head = head.next;
        }
        //if not find then return -1
        Console.WriteLine(value + " is not present here");
        return -1;
    }

    static void Main()
    {
        //Define an array with element
        int[] a = { 10, 20, 30, 40, 50, 60 };

        //Call CreateLinked List method
        Node head = createLinkedList(a,6);

        Console.WriteLine("Index: " + searchLinkedList(head, 60));
    }
}