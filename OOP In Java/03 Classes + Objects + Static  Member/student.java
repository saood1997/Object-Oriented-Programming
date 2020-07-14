public class student {
    static int count = 0; // it is associated with the class and can be access without creating the instance of a class
    int roll_no;


    public static void main(String args[]){
        student s1 = new student();
        student s2 = new student();

        System.out.println("student count : "+student.count);
        student.count += 1;
        System.out.println("Student count : "+student.count);

        System.out.println("Student count : "+s1.count);
        System.out.println("Student count : "+s2.count);


        s1.roll_no = 21;
        s2.roll_no = 31;
        System.out.println("Student roll no : "+s1.roll_no);
        System.out.println("Student roll no : "+s2.roll_no);

//        s1.roll_no =
    }


}
