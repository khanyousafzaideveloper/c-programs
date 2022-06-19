public class InterThread {

    public static void main(String[] args) {
        MyThread mt=new MyThread();
        mt.start();
        synchronized(mt){
            System.out.println("Hello");
            try {
                mt.wait();
                i++;
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

    }

}

class MyThread extends Thread{

    public void run(){
        synchronized(this){
        System.out.println("World!");
        notify();
        }
    }
}   