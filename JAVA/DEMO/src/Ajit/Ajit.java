package Ajit;

public class Ajit {
    public static void main(String args[]) throws InterruptedException {
        // Create threads with Runnable implementations
        Thread t1 = new Thread(new MyThread1());
        Thread t2 = new Thread(new MyThread2());

        // Start the threads
        // t1.start(); // Uncomment if needed
        t2.start();

        // Anonymous thread using Runnable (fixed syntax)
        Thread t3 = new Thread(new Runnable() {
            public void run() {
                printAtoZ.printAto();
            }
        });
        t3.start();

        // Optional: Wait for threads to finish
        t2.join();
        t3.join();
        System.out.println("Done");
    }
}
