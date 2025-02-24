// Class representing a custom exception
class InvalidAgeException extends Exception {
    
    // Constructor to initialize the exception message
    public InvalidAgeException(String str) {
        super(str);
    }
}

public class TestCustomException1 {
    
    // Method to validate age
    static void validate(int age) throws InvalidAgeException {
        if (age < 18) {
            throw new InvalidAgeException("Age is not valid to vote");
        }
        System.out.println("Welcome to vote");
    }

    // Main method
    public static void main(String args[]) {
        try {
            validate(13);
        } catch (InvalidAgeException ex) {
            System.out.println("Caught the exception");
            System.out.println("Exception occurred: " + ex);
        }
        System.out.println("Rest of the code...");
    }
}