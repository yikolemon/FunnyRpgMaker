/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401af80c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1401af80c(undefined8 param_1,undefined4 param_2)

{
  LCID LVar1;
  code *pcVar2;
  
  if (DAT_140f4f070 == (code *)0xffffffffffffffff) {
LAB_1401af85b:
    LVar1 = GetUserDefaultLCID();
    FUN_1401af9e0(LVar1,param_1,param_2,0);
  }
  else {
    pcVar2 = DAT_140f4f070;
    if (DAT_140f4f070 == (code *)0x0) {
      pcVar2 = (code *)FUN_1401afe18(0xe,"GetUserDefaultLocaleName",&DAT_140eb79e0,&DAT_140eb79e8);
      if (pcVar2 == (code *)0x0) goto LAB_1401af85b;
    }
    (*pcVar2)(param_1,param_2);
  }
  return;
}

