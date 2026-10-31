/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401afb1c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1401afb1c(void)

{
  code *pcVar1;
  
  if (DAT_140f4f0c8 != (code *)0xffffffffffffffff) {
    pcVar1 = DAT_140f4f0c8;
    if ((DAT_140f4f0c8 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_1401afe18(0x19,"RoUninitialize",&DAT_140eb7a0c,&DAT_140eb7a10),
       pcVar1 == (code *)0x0)) {
      return;
    }
    (*pcVar1)();
  }
  return;
}

