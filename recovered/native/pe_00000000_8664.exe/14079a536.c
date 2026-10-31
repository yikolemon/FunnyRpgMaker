/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079a536 */

void FUN_14079a536(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)((ulonglong)*(uint *)(param_1 + 4) + 4) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((ulonglong)*(uint *)(param_1 + 4) + 8) = uVar1;
  *(undefined4 *)(ulonglong)*(uint *)(param_1 + 4) = uVar1;
  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 4) + 0x16) = 0;
  return;
}

