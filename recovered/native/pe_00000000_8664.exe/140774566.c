/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140774566 */

void FUN_140774566(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if (((uVar1 != 0) && (uVar1 != (uint)param_2)) &&
     (*(int *)((ulonglong)uVar1 + 0x434) == (int)param_1)) {
    *(undefined4 *)((ulonglong)uVar1 + 0x434) = 0;
  }
  *(int *)(param_2 + 0x434) = (int)param_1;
  *(uint *)(param_1 + 0x78) = (uint)param_2;
  return;
}

