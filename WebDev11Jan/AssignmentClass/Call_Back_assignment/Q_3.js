// 3. Image Processing Pipeline
function UploadImage(imageName,cb) {
console.log("Uploading image...");
setTimeout(() => {
    console.log("Successfully Uploaded...");
let imageUrl = "temp/" + imageName;
cb(imageUrl);
}, 2000);
}
function ApplyFilter(imageUrl,cb) {
console.log("Applying filter...");
setTimeout(() => {
    console.log("Bhai ho gya successFully...");
let filteredImage = imageUrl.replace('.jpg', '_filtered.jpg');
cb(filteredImage)
}, 1500);
}
function SaveToGallery(filteredImage,cb) {
console.log("Saving to gallery...");
setTimeout(() => {
    console.log("Bhai ho gya successFully...");
let finalPath = "gallery/" + filteredImage.split('/').pop();
cb(finalPath);
}, 1000);
}
let image="Japanese";

UploadImage(image,function(imageUrl){
    ApplyFilter(imageUrl,function(filteredImage){
        SaveToGallery(filteredImage,function(finalPath){
            console.log(finalPath);
        })
    })
})
// pass the required parameter in function and write the calling of functions such that it will run
// synchronously