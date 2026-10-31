/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401af9e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1401af9e0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if (DAT_140f4f098 == (code *)0xffffffffffffffff) {
LAB_1401afa45:
    FUN_1401c0788(param_1,param_2,param_3);
  }
  else {
    pcVar1 = DAT_140f4f098;
    if (DAT_140f4f098 == (code *)0x0) {
      pcVar1 = (code *)FUN_1401afe18(0x13,"LCIDToLocaleName",&DAT_140eb79f8,&DAT_140eb7a00);
      if (pcVar1 == (code *)0x0) goto LAB_1401afa45;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}

