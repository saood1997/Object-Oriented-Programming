
class Polygon{
    int numSides;

    public Polygon(){
        this.numSides = 0;
    }

    // constractor overloded
    public Polygon(int numSides){
        this.numSides = numSides;
    }

    public double getArea(){
        return 0.0;
    }
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

        Polygon p = new Polygon(4);
        System.out.println("Area of Polygon = " + p.getArea());


        Rectangle r = new Rectangle();
        System.out.println("number of sides in rectangle = "+r.numSides);
        r.setSides(4,4);
        System.out.println("Area of Triangle = " + r.getArea());

    }

}
