//Food Delievely 
function OrderFood(FoodItem,cb) {
console.log("Order placed");
setTimeout(() => {
console.log("Order confirmed");
cb(FoodItem);
}, 1000);
}
function CookFood(food,cb) {
console.log("Cooking starts");
setTimeout(() => {
console.log("Cooking complete");
let cookedItem = "Cooked " + food;
cb(cookedItem);
}, 2000);
}
function DeliverFood(cookedItem,cb) {
console.log("Delivery started");
setTimeout(() => {
console.log("Delivered");
let deliveryStatus = cookedItem + " - Delivered at your door";
cb(deliveryStatus);
}, 1500);
}
let food="Pasata";
OrderFood(food,function(FoodItem){
    CookFood(FoodItem,function(cookedItem){
        DeliverFood(cookedItem,function(finalStatus){
        console.log(finalStatus);
        })
    })


})
// pass the required parameter in function and write the calling of functions such that it
//will run synchronously
