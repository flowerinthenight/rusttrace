#![crate_name = "rusttrace"]
#![crate_type = "rlib"]

use std::ffi::CString;
use std::os::raw::c_char;

#[link(name = "libtrace")]
extern "C" {
    fn __rt_init(m: *const c_char);
    fn __rt_trace(m: *const c_char);
    fn __rt_cleanup(m: *const c_char);
}

pub fn __init(s: &str) {
    let to_print = CString::new(s).unwrap();
    unsafe {
        __rt_init(to_print.as_ptr());
    }
}

pub fn __trace(s: &str) {
    let to_print = CString::new(s).unwrap();
    unsafe {
        __rt_trace(to_print.as_ptr());
    }
}

pub fn __cleanup(s: &str) {
    let to_print = CString::new(s).unwrap();
    unsafe {
        __rt_cleanup(to_print.as_ptr());
    }
}
