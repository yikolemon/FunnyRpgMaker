/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079a518 */

undefined4 FUN_14079a518(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  return CONCAT31((int3)(uVar1 >> 8),
                  *(int *)((ulonglong)uVar1 + 4) != *(int *)((ulonglong)uVar1 + 8));
}

