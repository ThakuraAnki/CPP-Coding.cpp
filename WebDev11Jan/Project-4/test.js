function sleep(ms){
    return new Promise(resolve => setTimeout(resolve, ms));
}

async function Download(url) {
        if (url.split('.').pop() != 'mp4') throw "Invalid movie format to download";
        console.log("Download starts")
        await sleep(2000);
            console.log("Download ends")
            let movie = url.split('/').pop();
            return movie;
    
}

async function Compression(movie) {
        if (movie.split('.').pop() != 'mp4') throw "Invalid movie format to compress the movie, please use mp4";
        console.log("Compression starts")
    await sleep(2000);
            console.log("Compression ends")
            let compressedMovie = movie.split('.')[0] + '.zip';
            return compressedMovie;
}

async function Uploading(compressedMovie) {
        console.log("Uploading starts");
        await sleep(2000);
            console.log("Uploading ends")
            let newUrl = 'http://codingblocks.com/newMovies/' + compressedMovie;
            return newUrl;
}

let url = 'http://codingblocks.com/movies/datastructures.mp4'
async function lo() {
    try{
    let movie=await Download(url);
    console.log(movie);
    let compressM=await Compression(movie);
    console.log(compressM);
    let NewUlr=await Uploading(compressM);
    console.log((NewUlr));
    } catch(err){
        console.log(err);
    }
}



async function hu() {
    

try{
    let movie=await Download(url);
        console.log(movie);
        let compressedMovie=await Compression(movie);
        console.log(compressedMovie);
        let newUrl=await Uploading(compressedMovie);
        console.log(newUrl);
    } catch (err) {
        console.log(err);
    }
}
