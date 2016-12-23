extern crate rusttrace;

fn main() {
    rusttrace::__init("initialize");

    for x in 0..10 {
        let s = format!("Value: {}", x);
        rusttrace::__trace(&s);
    }

    rusttrace::__cleanup("cleanup");
}
