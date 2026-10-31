/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019ea0c */

void FUN_14019ea0c(undefined4 param_1,longlong param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 0x38) = 1;
  *(undefined4 *)(param_2 + 0x34) = param_1;
  uVar1 = FUN_14019e93c();
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}

