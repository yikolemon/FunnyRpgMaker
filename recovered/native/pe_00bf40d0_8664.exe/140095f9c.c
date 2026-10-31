/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140095f9c */

void FUN_140095f9c(uint param_1,longlong param_2)

{
  uint uVar1;
  
  *(undefined1 *)(param_2 + 0x38) = 1;
  *(uint *)(param_2 + 0x34) = param_1;
  uVar1 = FUN_140095ecc(param_1);
  *(uint *)(param_2 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}

