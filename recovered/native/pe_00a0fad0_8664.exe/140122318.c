/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140122318 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140122318(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (DAT_14036f0a0 == (code *)0xffffffffffffffff) {
LAB_140122367:
    FUN_140130b30(param_1);
  }
  else {
    pcVar1 = DAT_14036f0a0;
    if (DAT_14036f0a0 == (code *)0x0) {
      pcVar1 = (code *)FUN_1401225d8(0x14,"LocaleNameToLCID",&DAT_140168960,&DAT_140168968);
      if (pcVar1 == (code *)0x0) goto LAB_140122367;
    }
    (*pcVar1)(param_1,param_2);
  }
  return;
}

