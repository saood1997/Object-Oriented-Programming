public class Animal04 {

    //constructor
    public Animal04(){
        System.out.println("constructor call");
    }

    //java doesn't have a destructor
    public static void main(String args[]){
        System.out.println("main function call ");
        Animal04 a = new Animal04();       // create an instance    // a is an reference variable
    }
}
