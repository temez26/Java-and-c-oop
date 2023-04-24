import java.util.*;
// Teemu Kalmari,Eero Isola, Kristian Hirvonen

public class Zoo {
    private Map<String, Animal> animals = new HashMap<>();

    public Animal add(Animal a) {
        animals.put(a.getName(), a);
        a.move(); // Call the move() method of the added animal
        return a;
    }

    public Animal remove(String name) {
        Animal removed = animals.remove(name);
        if (removed == null) {
            return null;
        }
        removed.utter(); // Call the utter() method of the removed animal
        return removed;
    }

    public void print() {
        for (Animal a : animals.values()) {
            System.out.println(a.toString());
        }
    }

    public void printSortedByName() {
        List<Animal> sortedAnimals = new ArrayList<>(animals.values());
        sortedAnimals.sort((a1, a2) -> a1.getName().compareTo(a2.getName()));
        for (Animal a : sortedAnimals) {
            System.out.println(a.toString());
        }
    }

    public void printSortedByAge() {
        List<Animal> sortedAnimals = new ArrayList<>(animals.values());
        sortedAnimals.sort((a1, a2) -> a1.getBirth().compareTo(a2.getBirth()));
        for (Animal a : sortedAnimals) {
            System.out.println(a.toString());
        }
    }

    public static void main(String[] args) {
        //creating animals
        Zoo animals = new Zoo();
        Shark shark1 = new Shark("Timo", new Date(23, 7, 1995), 600);
        Shark shark2 = new Shark("Danny", new Date(15, 2, 2012), 250); //crate another shark
        Tiger tiger1 = new Tiger("Tumppi", new Date(12, 12, 2005), 200);
        Tiger tiger2 = new Tiger("Tommy", new Date(13, 6, 2009), 220); // Create another tiger
        tiger2.setSpecies("tiikuri");
        shark2.setSpecies("Great White Shark");
        

        animals.add(shark2);
        
        
        animals.add(tiger2); 
    
        // Print the animals
        System.out.println("Animals in the zoo:\n");
        animals.print();
    
        // Print the animals sorted by name
        System.out.println("\nAnimals sorted by name:\n");
        animals.printSortedByName();
    
        // Print the animals sorted by age
        System.out.println("\nAnimals sorted by age:\n");
        animals.printSortedByAge();
    
        animals.remove("Danny");
        System.out.println("\nAnimals in the zoo after removing Danny:\n");
        animals.print();

        shark1.setSpecies("sinivalas");
        tiger1.setSpecies("lumileopardi");

        System.out.println("\nAdding animals back:\n");
        animals.add(shark1);
        animals.add(tiger1);
        animals.add(shark2);

        System.out.println("\nAnimals in the zoo after adding new shark and tiger and Danny back:\n");
        animals.print();

        System.out.println("\nAnimals sorted by name with all animals:\n");
        animals.printSortedByName();
        
        System.out.println("\nAnimals sorted by age with all animals:\n");
        animals.printSortedByAge();
        
    }
}
