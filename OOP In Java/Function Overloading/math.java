public class math {

    public double sqrt(int x, double guess){
        System.out.println("Calculating square root of " + x + "starting with guess: " + guess);
        return 1.0;
    }

    //function overloading
    //method overloaded   -- for default arguments -- as in python -- sqrt(int x, double guess = 1.0)
    public double sqrt(int x) {
        double guess = 1.0;
        return sqrt(x, guess);
    }

    public double sqrt(double x){   //overloaded function
        double guess = 1.0;
        System.out.println("Calculating square root of " + x + "starting with guess: " + guess);
        return 1.0;
    }


    public static void main(String args[]){
        math m = new math();

        m.sqrt(36,4.0);

        m.sqrt(30);

        m.sqrt(36.0);

    }




}
