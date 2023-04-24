


abstract class Animal {
private String name;
private Date birth;
private double weight;

public Animal() {}

public Animal(String name, Date birth, double weight) {
    this.name = name;
    this.birth = birth;
    this.weight = weight;
}

public String getName() {
    return name;
}

public void setName(String name) {
    this.name = name;
}

public Date getBirth() {
    return birth;
}

public void setBirth(Date birth) {
    this.birth = birth;
}

public double getWeight() {
    return weight;
}

public void setWeight(double weight) {
    this.weight = weight;
}

public abstract void move();
public abstract void utter();
public abstract String getSpecies();

public String toString() {
    return "Name: " + name + ", Birthdate: " + birth.toString() + ", Weight: " + Double.toString(weight);
}
}

class Shark extends Animal {
    private String species;

    public Shark(String name, Date birth, double weight) {
        super(name, birth, weight);
        this.species = "Great White";
    }

    public String getSpecies() {
        return species;
    }

    public void setSpecies(String species) {
        this.species = species;
    }

    @Override
    public void move() {
        System.out.println("Swimming through the ocean.");
    }

    @Override
    public void utter() {
        System.out.println("Silent.");
    }

    @Override
    public String toString() {
        return super.toString() + ", Species: " + species;
    }
}


class Tiger extends Animal {
private String species;

public Tiger(String name, Date birth, double weight) {
    super(name, birth, weight);
    this.species = "Bengal Tiger";
}

public String getSpecies() {
    return species;
}

public void setSpecies(String species) {
    this.species = species;
}

public void move() {
    System.out.println("Running through the jungle.");
}

public void utter() {
    System.out.println("Roar!");
}

public String toString() {
    return super.toString() + ", Species: " + species;
}

}