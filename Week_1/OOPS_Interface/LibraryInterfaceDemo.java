public class LibraryInterfaceDemo {

    public static void main(String[] args) {

        // ================= Kid User =================

        KidUsers kid = new KidUsers();

        System.out.println("========== Kid User ==========");

        // Test Case 1
        kid.setAge(10);
        kid.registerAccount();

        // Test Case 2
        kid.setAge(18);
        kid.registerAccount();

        // Test Case 3
        kid.setBookType("Kids");
        kid.requestBook();

        // Test Case 4
        kid.setBookType("Fiction");
        kid.requestBook();

        System.out.println();

        // ================= Adult User =================

        AdultUser adult = new AdultUser();

        System.out.println("========== Adult User ==========");

        // Test Case 1
        adult.setAge(5);
        adult.registerAccount();

        // Test Case 2
        adult.setAge(23);
        adult.registerAccount();

        // Test Case 3
        adult.setBookType("Kids");
        adult.requestBook();

        // Test Case 4
        adult.setBookType("Fiction");
        adult.requestBook();

    }
}
