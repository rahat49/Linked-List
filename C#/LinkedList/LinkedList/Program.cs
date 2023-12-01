//Node class representing a node in the linked list
class Node
{
    //Data hold the value of the node
    public int Data { get; set; }
    //Next hold the address of the next node 
    public Node Next { get; set; }
}
class Program
{
   
    static void Main()
    {
        //Take 3 nodes with no memory space
        Node a= null;
        Node b= null; 
        Node c= null;

        // Dynamically allocate memory using new
        // Create 3 nodes using the Node class
        a = new Node();
        b= new Node(); 
        c= new Node();

        //Assign data to each node
        a.Data = 10;
        b.Data = 20;
        c.Data = 30;

        //Connect nodes with the next node
        a.Next = b;
        b.Next = c;
        c.Next = null;// The last node points to null indicating the end of the list

        //Tranverse the linked list and print in console
        //Start from the first node
        Node current = a;
        while(current != null)
        {
            Console.Write($"{current.Data}->"); //print the data of current node
            current = current.Next; //Move to the next node 
        }
        Console.ReadLine();
    }
}
