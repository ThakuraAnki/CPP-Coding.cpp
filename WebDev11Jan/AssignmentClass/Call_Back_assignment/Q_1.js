function OrderFood() {
console.log("Order placed");
setTimeout(() => {
console.log("Order confirmed");
}, 1000);
}
function CookFood() {
console.log("Cooking starts");
setTimeout(() => {
console.log("Cooking complete");
let cookedItem = "Cooked " + item;
}, 2000);
}
function DeliverFood() {
console.log("Delivery started");
setTimeout(() => {
console.log("Delivered");
let deliveryStatus = cookedItem + " - Delivered at your door";
}, 1500);
}
// pass the required parameter in function and write the calling of functions such that it
//will run synchronously
OrderFood(CookFood(DeliverFood()));