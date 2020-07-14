public class Animal {

    int legs = 4; //class member

    // method

    int get_legs(){
        return this.legs; // this is used for instance frame // which mean that return the value of legs in instance frame
    }

    void constructsTest(){
        int x = 5;
        if (x == 5)
            System.out.println("x is 5");

        for(int i= 0; i<3; i++){
            System.out.println("looping "+i);
        }

    }




    public static void main(String args[]){
        System.out.println("main function call ");
        Animal a = new Animal();       // create an instance    // a is an reference variable
        System.out.println("legs = " + a.legs);
        System.out.println("Legs from method "+a.get_legs());

        //increment a instance legs
        a.legs += 1;
        System.out.println("After increment legs = " + a.legs);

        a.constructsTest();
    }


}
