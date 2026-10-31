/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401afa68 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1401afa68(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (DAT_140f4f0a0 == (code *)0xffffffffffffffff) {
LAB_1401afab7:
    FUN_1401c06e0(param_1);
  }
  else {
    pcVar1 = DAT_140f4f0a0;
    if (DAT_140f4f0a0 == (code *)0x0) {
      pcVar1 = (code *)FUN_1401afe18(0x14,"LocaleNameToLCID",&DAT_140eb7a00,&DAT_140eb7a08);
      if (pcVar1 == (code *)0x0) goto LAB_1401afab7;
    }
    (*pcVar1)(param_1,param_2);
  }
  return;
}

