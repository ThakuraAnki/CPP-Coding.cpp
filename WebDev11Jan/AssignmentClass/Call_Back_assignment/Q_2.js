//2. Email Processing System
function FetchEmail(emailId,cb) {
console.log("Fetching email...");
setTimeout(() => {
let email = { id: emailId, content: "Date Krne chaloge Monday ko" };
console.log("Email fetched");
        cb(email);
}, 1000);
}
function ScanForVirus(email,cb) {
console.log("Scanning for virus...");
setTimeout(() => {
email.scanned =true
if(email.scanned === true){
console.log("EveryThingIsOkay");
cb(email);
}else{
    throw("Error");
}
}, 1500);
}
function MoveToInbox(email,cb) {
console.log("Moving to inbox...");
setTimeout(() => {
email.location= "inbox";
console.log("Move To Inbox");
cb(email);
}, 1000);
}
let mail="ankit004thakur@gmail.com";
FetchEmail(mail,function(email){
    ScanForVirus(email,function(email){
        MoveToInbox(email,function(email){
            console.log("Bhai message chla gya apki bnadi ko");
            console.log(email);
        })
    })
})



// pass the required parameter in function and write the calling of functions such that it will run
//synchronously