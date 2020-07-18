
abstract class Polygon{
    int numSides;

    public Polygon(int numSides){
        this.numSides = numSides;
    }

    public abstract double getArea();
}

class Rectangle extends Polygon{
    double length;
    double width;
    public Rectangle(){
        super(4);   // it means that for creating rectangle instance first make the instance of parent class
    }

    public  void setSides(double length , double width){
        this.length = length;
        this.width = width;
    }

    @Override
    public double getArea() {
        return this.length * this.width;
    }


}


public class Runner {
    public static void main(String args[]){

//        Polygon p = new Polygon(4);
//        System.out.println("Area of Polygon = " + p.getArea());

        Rectangle r = new Rectangle();
        Polygon p = new Rectangle(); // parent class reference variable but hold the address of child . Is It valid = ?
                                    // Yes, it is valid --- As p is an reference variable which hold the address of polygon and
                                    // rectangle is type of polygon which inherit the polygon class. So that's why it's valid.

        System.out.println("number of sides in rectangle = "+r.numSides);
        r.setSides(4,4);
        System.out.println("Area of Triangle = " + r.getArea());

    }

}
