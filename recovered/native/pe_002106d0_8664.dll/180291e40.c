/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291e40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180291e40(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if (DAT_180450098 == (code *)0xffffffffffffffff) {
LAB_180291ea5:
    FUN_1802a35b4(param_1,param_2,param_3);
  }
  else {
    pcVar1 = DAT_180450098;
    if (DAT_180450098 == (code *)0x0) {
      pcVar1 = (code *)FUN_180292278(0x13,"LCIDToLocaleName",&DAT_180353718,&DAT_180353720);
      if (pcVar1 == (code *)0x0) goto LAB_180291ea5;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}

