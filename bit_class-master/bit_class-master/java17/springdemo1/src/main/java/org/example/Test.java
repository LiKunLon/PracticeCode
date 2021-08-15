package org.example;

import java.beans.Introspector;

public class Test {
    public static void main(String[] args) {
//        String className = "URLController";
        String className = "LoginController";
        System.out.println(Introspector.decapitalize(className));
    }
}
