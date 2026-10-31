/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d6c87 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1408d6c87(void)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  iVar2 = FUN_1408db62e();
  if (iVar2 != 0) {
    uVar5 = (ulonglong)(uint)((int)uVar1 >> 6);
    uVar3 = (ulonglong)((uVar1 & 0x3f) * 0x38);
    if (*(char *)((ulonglong)*(uint *)(uVar5 * 4 + 0x103a5230) + 0x28 + uVar3) < '\0') {
      uVar4 = (ulonglong)*(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc);
      if (*(char *)(uVar4 + 0x14) == '\0') {
        FUN_1408b6b20(uVar4);
      }
      if ((*(int *)((ulonglong)*(uint *)(uVar4 + 0xc) + 0xa8) != 0) ||
         (*(char *)((ulonglong)*(uint *)(uVar5 * 4 + 0x103a5230) + 0x29 + uVar3) != '\0')) {
        iVar2 = (*_DAT_150c34c2e)();
        return iVar2 != 0;
      }
    }
  }
  return false;
}

