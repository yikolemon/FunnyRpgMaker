/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d3f6b */

void FUN_1408d3f6b(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if (((uVar1 != 0) && (uVar1 != 0x10325310)) && (*(int *)((ulonglong)uVar1 + 0xb0) == 0)) {
    FUN_1408d35c7();
    FUN_1408cbff0();
  }
  return;
}

