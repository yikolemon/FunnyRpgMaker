/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cf174 */

bool FUN_1408cf174(void)

{
  int iVar1;
  
  iVar1 = FUN_1408b664b();
  if (*(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8) == iVar1) {
    return true;
  }
  iVar1 = FUN_1408b664b(2);
  if (*(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8) == iVar1) {
    FUN_1408d056e(1);
    iVar1 = FUN_1408db62e();
    return iVar1 != 0;
  }
  return false;
}

