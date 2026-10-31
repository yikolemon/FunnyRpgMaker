/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027e7ac */

void FUN_18027e7ac(undefined4 param_1,longlong param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 0x38) = 1;
  *(undefined4 *)(param_2 + 0x34) = param_1;
  uVar1 = FUN_18027e6dc();
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}

