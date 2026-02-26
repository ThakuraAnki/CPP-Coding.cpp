function createAccount(name, college){
    let balance =0;

    function deposit(amt){
        balance+=amt;
    }
    function credit(amt){
        if(balance>=amt){
            balance-=amt;
        }else{
            throw new console.error(("Insufficient Balance"));
              
        }
    }
    function CheckBalance(){
        return balance;
    }
    function details(){
        console.log("---------------");
        console.log("Name",name);
        console.log("College",college);
        console.log("Balace",balance);
        console.log("---------------");
    }
    return {
        credit,
        deposit,
        CheckBalance,
        details
    }
}


let x =createAccount("Ankit","NIT Trichy");
let y =createAccount("babe","NIT Trichy");
x.deposit(1000000000);
x.details();
x.credit(105215);
x.details();

y.deposit(200);
y.details();

