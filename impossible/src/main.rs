use std::arch::asm;

fn main() {
    
    println!("Hello, world!");
    println!("Hidden from IDA");
    }
     
        



/*
.text:0000000140001150 ; void __fastcall impossible::main()
.text:0000000140001150 impossible__main proc near              ; DATA XREF: main+A↓o
.text:0000000140001150                                         ; .pdata:000000014002906C↓o
.text:0000000140001150
.text:0000000140001150 var_68          = qword ptr -68h
.text:0000000140001150 var_60          = byte ptr -60h
.text:0000000140001150 var_30          = byte ptr -30h
.text:0000000140001150
.text:0000000140001150                 sub     rsp, 88h
.text:0000000140001157                 lea     rcx, [rsp+88h+var_60]
.text:000000014000115C                 lea     rdx, helloWorld
.text:0000000140001163                 mov     r8d, 1
.text:0000000140001169                 lea     r9, HiddenStr
.text:0000000140001170                 xor     eax, eax
.text:0000000140001172                 mov     [rsp+88h+var_68], 0
.text:000000014000117B                 call    _ZN4core3fmt9Arguments6new_v117hfd7dca08f6e5a126E ; core::fmt::Arguments::new_v1::hfd7dca08f6e5a126
.text:0000000140001180                 lea     rcx, [rsp+88h+var_60]
.text:0000000140001185                 call    print
.text:000000014000118A
.text:000000014000118A loc_14000118A:                          ; CODE XREF: impossible__main:loc_14000118A↑j
.text:000000014000118A                 jmp     short near ptr loc_14000118A+1
.text:000000014000118C ; ---------------------------------------------------------------------------
.text:000000014000118C                 sar     bh, 0C8h
.text:000000014000118F                 lea     rcx, [rsp+88h+var_30]
.text:0000000140001194                 lea     rdx, off_14001E3B0
.text:000000014000119B                 mov     r8d, 1
.text:00000001400011A1                 lea     r9, HiddenStr
.text:00000001400011A8                 xor     eax, eax
.text:00000001400011AA                 mov     [rsp+88h+var_68], 0
.text:00000001400011B3                 call    _ZN4core3fmt9Arguments6new_v117hfd7dca08f6e5a126E ; core::fmt::Arguments::new_v1::hfd7dca08f6e5a126
.text:00000001400011B8                 lea     rcx, [rsp+88h+var_30]
.text:00000001400011BD                 call    print
.text:00000001400011C2                 nop
.text:00000001400011C3                 add     rsp, 88h
.text:00000001400011CA                 retn
.text:00000001400011CA impossible__main endp
 */

 /* 
 .text:0000000140001150 impossible__main proc near              ; DATA XREF: main+A↓o
.text:0000000140001150                                         ; .pdata:000000014002906C↓o
.text:0000000140001150
.text:0000000140001150 var_68          = qword ptr -68h
.text:0000000140001150 var_60          = byte ptr -60h
.text:0000000140001150 var_30          = byte ptr -30h
.text:0000000140001150
.text:0000000140001150                 sub     rsp, 88h
.text:0000000140001157                 lea     rcx, [rsp+88h+var_60]
.text:000000014000115C                 lea     rdx, off_14001E390 ; "Hello, world!\n"
.text:0000000140001163                 mov     r8d, 1
.text:0000000140001169                 lea     r9, unk_14001E3A0
.text:0000000140001170                 xor     eax, eax
.text:0000000140001172                 mov     [rsp+88h+var_68], 0
.text:000000014000117B                 call    _ZN4core3fmt9Arguments6new_v117hfd7dca08f6e5a126E ; core::fmt::Arguments::new_v1::hfd7dca08f6e5a126
.text:0000000140001180                 lea     rcx, [rsp+88h+var_60]
.text:0000000140001185                 call    _ZN3std2io5stdio6_print17h2a85daee8faaaa87E ; std::io::stdio::_print::h2a85daee8faaaa87
.text:000000014000118A                 lea     rcx, [rsp+88h+var_30]
.text:000000014000118F                 lea     rdx, off_14001E3B0
.text:0000000140001196                 mov     r8d, 1
.text:000000014000119C                 lea     r9, unk_14001E3A0
.text:00000001400011A3                 xor     eax, eax
.text:00000001400011A5                 mov     [rsp+88h+var_68], 0
.text:00000001400011AE                 call    _ZN4core3fmt9Arguments6new_v117hfd7dca08f6e5a126E ; core::fmt::Arguments::new_v1::hfd7dca08f6e5a126
.text:00000001400011B3                 lea     rcx, [rsp+88h+var_30]
.text:00000001400011B8                 call    _ZN3std2io5stdio6_print17h2a85daee8faaaa87E ; std::io::stdio::_print::h2a85daee8faaaa87
.text:00000001400011BD                 nop
.text:00000001400011BE                 add     rsp, 88h
.text:00000001400011C5                 retn
.text:00000001400011C5 impossible__main endp
*/