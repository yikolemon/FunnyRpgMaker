/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291c6c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180291c6c(undefined8 param_1,undefined4 param_2)

{
  LCID LVar1;
  code *pcVar2;
  
  if (DAT_180450070 == (code *)0xffffffffffffffff) {
LAB_180291cbb:
    LVar1 = GetUserDefaultLCID();
    FUN_180291e40(LVar1,param_1,param_2,0);
  }
  else {
    pcVar2 = DAT_180450070;
    if (DAT_180450070 == (code *)0x0) {
      pcVar2 = (code *)FUN_180292278(0xe,"GetUserDefaultLocaleName",&DAT_180353700,&DAT_180353708);
      if (pcVar2 == (code *)0x0) goto LAB_180291cbb;
    }
    (*pcVar2)(param_1,param_2);
  }
  return;
}

