/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013292c */

undefined4 FUN_14013292c(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  if (param_3 != 0) {
    FUN_1401287d4(**(undefined8 **)(param_1 + 0x30),uVar1,0x803,param_3);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return uVar1;
}

