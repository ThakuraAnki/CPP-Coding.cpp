function download(cb) {
    console.log("Download starts")
    setTimeout(() => {
        console.log("Download ends");
        cb(Uploading);
    }, 2000);
}

function Compression(cb) {
    console.log("Compression starts")
    setTimeout(() => {
        console.log("Compression ends");
        cb();
    }, 2000);
}

function Uploading() {
    console.log("Uploading starts")
    setTimeout(() => {
        

        console.log("Uploading ends")
    }, 1);
}
download(Compression);

