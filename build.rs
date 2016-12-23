fn main() {
    println!("cargo:rustc-link-search=native=bin/x64/");
    println!("cargo:rustc-link-lib=static=libtrace");
}
