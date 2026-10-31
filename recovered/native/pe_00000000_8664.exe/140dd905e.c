/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dd905e */

int FUN_140dd905e(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if ((uVar3 != 0) && (uVar3 != 0x4f9790)) {
    LOCK();
    piVar1 = (int *)((ulonglong)uVar3 + 0xb0);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    return iVar2;
  }
  return 0x7fffffff;
}

