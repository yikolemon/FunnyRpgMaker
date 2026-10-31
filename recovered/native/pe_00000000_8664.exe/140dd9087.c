/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dd9087 */

void FUN_140dd9087(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if (((uVar1 != 0) && (uVar1 != 0x4f9790)) && (*(int *)((ulonglong)uVar1 + 0xb0) == 0)) {
    FUN_140dd8695();
    FUN_140dd41d0();
  }
  return;
}

