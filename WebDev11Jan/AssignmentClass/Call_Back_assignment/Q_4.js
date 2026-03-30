// 4. E-commerce Order Flow
function PlaceOrder(productId,cb) {
console.log("Placing order...");
setTimeout(() => {
    console.log("Bhai Order Place hogya");
let order = { id: productId, status: "placed" };
cb(order);
}, 1000);
}
function ProcessPayment(order,cb) {
console.log("Processing payment...");
setTimeout(() => {
    console.log("Paymet Successfull bhai");
order.status = "paid";
order.transactionId = "TXN" + Date.now();
cb(order);
}, 2000);
}
function ShipOrder(order,cb) {
console.log("Shipping order...");
setTimeout(() => {
    console.log("Shipping SuccessFull");
order.status = "shipped";
order.trackingId = "TRACK" + Math.random().toString(36).substr(2, 9);
cb(order);
}, 1500);
}
let id="xxx58";
PlaceOrder(id,function(order){
    ProcessPayment(order,function(order){
        ShipOrder(order,function(order){
            console.log(order);
        })
    })
})

// pass the required parameter in function and write the calling of functions such that it will run
// synchronously