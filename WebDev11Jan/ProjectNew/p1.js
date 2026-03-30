class Vehicle{
    constructor(name,price,model){
        this.name=name;
        this.price=price;
        this.model=model;
    }

    printDetails() {
        console.log("N : ", this.name)
        console.log("P  : ", this.price)
        console.log("model : ", this.model)
    }
}
class Car extends Vehicle{
    constructor(type,fuel,horsePower,price){
        super(price);
        this.type=type;
        this.fuel=fuel;
        this.horsePower=horsePower;
    }
    printDetails() {
        console.log("Type : ", this.type)
        console.log("F : ", this.fuel)
        console.log("HorsePower : ", this.horsePower)
    
    }

}
class bike extends Vehicle{
    constructor(cc,Acc,Standtype,name){
        super(price);
        this.cc=cc;
        this.Acc=Acc;
        this.Standtype=Standtype;
    }
    printDetails() {
        console.log("cc : ", this.cc)
        console.log("Acc  : ", this.Acc)
        console.log("ST : ", this.Standtype)
    }
}
let s=new Vehicle("HeroHonda","25555","XXY");
console.log(s);
