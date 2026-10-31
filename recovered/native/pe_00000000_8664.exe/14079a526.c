/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079a526 */

void FUN_14079a526(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ulonglong)*(uint *)(param_1 + 4);
  ((undefined4 *)(ulonglong)*(uint *)(param_1 + 4))[2] = uVar1;
  *(undefined4 *)((ulonglong)*(uint *)(param_1 + 4) + 4) = uVar1;
  return;
}

