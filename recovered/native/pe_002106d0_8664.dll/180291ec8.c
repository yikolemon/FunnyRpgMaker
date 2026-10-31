/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291ec8 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180291ec8(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (DAT_1804500a0 == (code *)0xffffffffffffffff) {
LAB_180291f17:
    FUN_1802a350c(param_1);
  }
  else {
    pcVar1 = DAT_1804500a0;
    if (DAT_1804500a0 == (code *)0x0) {
      pcVar1 = (code *)FUN_180292278(0x14,"LocaleNameToLCID",&DAT_180353720,&DAT_180353728);
      if (pcVar1 == (code *)0x0) goto LAB_180291f17;
    }
    (*pcVar1)(param_1,param_2);
  }
  return;
}

