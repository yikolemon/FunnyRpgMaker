/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291f7c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180291f7c(void)

{
  code *pcVar1;
  
  if (DAT_1804500c8 != (code *)0xffffffffffffffff) {
    pcVar1 = DAT_1804500c8;
    if ((DAT_1804500c8 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_180292278(0x19,"RoUninitialize",&DAT_18035372c,&DAT_180353730),
       pcVar1 == (code *)0x0)) {
      return;
    }
    (*pcVar1)();
  }
  return;
}

