import java.lang.reflect.Array;
import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {

        int[] test = {};

        Solution solution = new Solution();

        solution.test();

    }

    public static void test(int a, Integer b)
    {
        a = 123;
        b = 456;
    }
}

class Solution
{
    void test()
    {
        Person p = new Person();
        p.setName("우상");
        System.out.println(p.name);
        change(p);
        System.out.println(p.name);
    }
    class Person
    {
        String name;

        void setName(String name)
        {
            this.name = name;
        }
    }

    void change(Person p)
    {
        p = new Person();
        p.setName("선규");
    }

    void test(int a, Integer b)
    {
        a = 123;
        b = 456;
    }

    void test(int[] arr)
    {
        arr[0] = 84;
        arr[1] = 53;
        arr[2] = 42;
    }

    void test(List<Integer> list)
    {
        list.set(0, 1);
        list.set(1, 2);
        list.set(2, 3);
    }


}
