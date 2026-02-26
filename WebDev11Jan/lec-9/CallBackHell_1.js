function Download(url,cb){
    console.log("Download Starts");
    setTimeout(()=>{
        console.log("Download ends");
        let movie=url.split('/').pop();
        cb(movie);
    },2000);
}
function Compression(movie,cb){
    console.log("Compression starts");
    setTimeout(()=>{
        console.log("Compression ends");
        let CompressiedMovie=movie.split('.')[0]+'.zip';
        cb(CompressiedMovie);
    },2000);
}
function Uplaoding(CompressiedMovie,cb){
    console.log("Uploading starts");
    setTimeout(()=>{
        console.log("Uploading ends");
        let newUrl='http://codingblocks.com/newMovies/'+CompressiedMovie;
        cb(newUrl);
    },2000);
}
let url='http://codingblocks.com/movies/datastructures.mp4';
Download(url,function(movie){
    console.log("Movie Download Complete",movie);
    Compression(movie,function(CompressiedMovie){
        console.log("Moive Now Complete",CompressiedMovie);
        Uplaoding(CompressiedMovie,function(newUrl){
            console.log("Movie uploaded at",newUrl);
        })
    })
})