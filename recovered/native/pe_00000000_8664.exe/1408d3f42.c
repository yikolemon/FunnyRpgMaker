/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d3f42 */

int FUN_1408d3f42(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if ((uVar3 != 0) && (uVar3 != 0x10325310)) {
    LOCK();
    piVar1 = (int *)((ulonglong)uVar3 + 0xb0);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    return iVar2;
  }
  return 0x7fffffff;
}

