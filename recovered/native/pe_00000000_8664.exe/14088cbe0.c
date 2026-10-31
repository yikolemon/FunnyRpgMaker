/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14088cbe0 */

void FUN_14088cbe0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if ((iVar1 != 0) && (uVar2 = iVar1 - 8, *(int *)(ulonglong)uVar2 == 0xdddd)) {
    *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8) = uVar2;
    thunk_FUN_1408cbff0();
    return;
  }
  return;
}

