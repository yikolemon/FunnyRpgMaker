/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bfe5e */

void FUN_1400bfe5e(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 4) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 8) = uVar1;
  **(undefined4 **)(param_1 + 8) = uVar1;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x16) = 0;
  return;
}

