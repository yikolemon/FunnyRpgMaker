/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401220bc */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1401220bc(undefined8 param_1,undefined4 param_2)

{
  LCID LVar1;
  code *pcVar2;
  
  if (DAT_14036f070 == (code *)0xffffffffffffffff) {
LAB_14012210b:
    LVar1 = GetUserDefaultLCID();
    FUN_140122290(LVar1,param_1,param_2,0);
  }
  else {
    pcVar2 = DAT_14036f070;
    if (DAT_14036f070 == (code *)0x0) {
      pcVar2 = (code *)FUN_1401225d8(0xe,"GetUserDefaultLocaleName",&DAT_140168940,&DAT_140168948);
      if (pcVar2 == (code *)0x0) goto LAB_14012210b;
    }
    (*pcVar2)(param_1,param_2);
  }
  return;
}

