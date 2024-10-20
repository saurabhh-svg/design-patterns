# design-patterns

# factory-method

The Factory Method is a creational design pattern that provides an interface for creating objects in a superclass but allows subclasses to alter the type of objects that will be created.

It maintains abstraction and open close principle. Open to adding but close to modifications. Also it follows the dependency inversion principle according to which instead of taking int the dependency to know which kind of object to manufacture, it returns an object which can be overridden the subclasses.

![ClassDiagram](<factoryMethod /theory/0.png>)

![ClassDiagram](<factoryMethod /theory/1.png>)
