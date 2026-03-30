// 5. File Backup System
function ReadFile(filename,cb) {
console.log("Reading file...");
setTimeout(() => {
console.log("Reading successfull...");

let data = "Content of " + filename;
cb(data);
}, 1000);
}
function Encrypt(data,cb) {
console.log("Encrypting data...");
setTimeout(() => {
console.log("Hogya bhai done dna done...");

let encrypted = btoa(data); // simple encoding
cb(encrypted);
}, 1500);
}
function BackupToCloud(cb) {
console.log("Backing up to cloud...");
setTimeout(() => {
console.log("Hogya bhai done dna done...");

let cloudUrl = "<https://cloud.storage.com/backup_>" + Date.now();
cb(cloudUrl);
}, 2000);
}
// pass the required parameter in function and write the calling of functions such that it will run
// synchronously