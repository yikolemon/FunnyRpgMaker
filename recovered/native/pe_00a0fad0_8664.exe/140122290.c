/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140122290 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140122290(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if (DAT_14036f098 == (code *)0xffffffffffffffff) {
LAB_1401222f5:
    FUN_140130bd8(param_1,param_2,param_3);
  }
  else {
    pcVar1 = DAT_14036f098;
    if (DAT_14036f098 == (code *)0x0) {
      pcVar1 = (code *)FUN_1401225d8(0x13,"LCIDToLocaleName",&DAT_140168958,&DAT_140168960);
      if (pcVar1 == (code *)0x0) goto LAB_1401222f5;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}

