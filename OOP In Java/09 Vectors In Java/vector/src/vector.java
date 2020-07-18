import java.util.Vector;

public class vector {

    // Printing vector
    public void printVector(Vector v){
        for (int i = 0; i < v.size(); i++){
            System.out.println(v.get(i));
        }
    }

    public void intVectorTest(){
        Vector vi = new Vector(); //doesn't show datatype of list i-e int or string , show warning
        vi.add(1);
        vi.add(2);
        vi.add("hi");

        printVector(vi);
        System.out.println(vi);
    }

    public void stringVectorTest(){
        Vector<String> vs = new Vector<String>();
        vs.add("first");
        vs.add("second");
        vs.add("third");

        System.out.println(vs);
    }


    public static void main(String args[]){
        vector v = new vector();
//        v.intVectorTest();
        v.stringVectorTest();
    }

}
