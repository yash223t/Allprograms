import java.util.Scanner;

class Student {

    int rollNo;
    String name;
    double marks;

    Student(int rollNo, String name, double marks) {
        this.rollNo = rollNo;
        this.name = name;
        this.marks = marks;
    }

    void displayDetails() {
        System.out.println("Roll No: " + rollNo);
        System.out.println("Name: " + name);
        System.out.println("Marks: " + marks);
        System.out.println("----------------------");
    }
}

public class StudentPortal {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Student[] students = new Student[3];

        for(int i = 0; i < students.length; i++) {

            System.out.println("Enter details for Student " + (i+1));

            System.out.print("Roll No: ");
            int roll = sc.nextInt();
            sc.nextLine();

            System.out.print("Name: ");
            String name = sc.nextLine();

            System.out.print("Marks: ");
            double marks = sc.nextDouble();

            students[i] = new Student(roll, name, marks);

            System.out.println();
        }

        System.out.println("\nStudent Records\n");

        for(Student s : students) {
            s.displayDetails();
        }

        sc.close();
    }
}
