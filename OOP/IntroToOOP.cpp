/*
What is OOP? - Primitive Data

Primitive Data types stores single, simple values
Examples inlcude:
-byte -int -float -Bo0lean- Double -char
Progammers began to need to group similar pieces of data together

What is OOP? - The structure
-The structure/the array Store many pieces of data
A structure can store different types of data
An Array cannot store different types of data
The main issue with structures is that you cannot define functions within one

Objects are instances of a class
Classes are templates for object

Object Oriented Programming helps programmers create complex programs by grouping together related data and functions

1. Encapsulation refers to bundling data with methods that can operate on that data within a class
    It is the idea of hiding data within a clas, preventin anything outside that calss from directly interacting with it
    Methods are the functions defined within the class
        - Keeps the programmer in control of access to data
        - Prevents the program from ending up in any strange or unwanted states

2. Abstraction refers to only showing essential deatails and keeping everything else hidden(THE HOW IS NOT IMPORTANT)
    Uses of your classes should not worry about the inner details of those classes
        Interface refers to the way sections of code can communicate wiht one another
        The Implementation of these methods, or how these methods are coded, should be hidden
    If classes are entangled, then one change creates a ripple effect that causes many more changes
    Creating an interface through which classes can interact ensure that each piece can be individually developed
        - Abstraction allows the program to be worked on incrementally and prevents it from becoming  entangled and complex
        -  Determine specific points of contact that can act as an interface between classes, and only worry about the implementation when coding it

3. Inheritance is the principle that allows classes to derive from other classes.
    Superclass and Subclass
    The class hierarchy acts as a web of classes with different relationships to one another
    Access modifiers - change which classes have access to other classes, methods, or attributes 
    Three main access modifiers:
    -public can be accessed from anywhere in your program 
    -private can only be accessed from within the same clas that the member is defined
    -protected can be accessed within the clas if it defined, as well as any subclass of that class

3. Polymorphism describes methods that are able to take on many forms
    types of polymorphism:
    - dynamic polymorphism occurs during the runtime of the program/ when a method signature is in both a subclass and a superclass/ method sare the same name but have different implementation
    - statoc polymorphism occurs during compile-time rather than during runtime/refers to when multiple methods with the same name but different arguments are defined in the same class
*/