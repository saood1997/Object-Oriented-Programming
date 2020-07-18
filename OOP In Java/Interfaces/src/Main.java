//using interfaces we can build loosely couple classes .
//we only interact with the interfaces

public class Main {
    public static void main(String args[]){
        TaxCalculator calculator = getCalculator("2020");
        calculator.calculateTax();    // Here we can only couple with the interface
                                      // Not with concrete implementation of the classes
                                      // This how we can achieve lose coupling
    }

    public static TaxCalculator getCalculator(String yr){
        if (yr == "2019"){
            return new TaxCalculator2019();
        }
        else if (yr == "2020"){
            return new TaxCalculator2020();
        }
        return null;
    }

}
