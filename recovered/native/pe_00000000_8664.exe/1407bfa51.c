/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bfa51 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1407bfa51(void)

{
  int iVar1;
  int unaff_EBX;
  uint uVar2;
  int *piVar3;
  
  iVar1 = *(int *)((ulonglong)_DAT_150b5d1a6 + 0x26fc);
  if (iVar1 != 0) {
    uVar2 = iVar1 + 4;
    do {
      piVar3 = (int *)(ulonglong)uVar2;
      if (*piVar3 == unaff_EBX) {
        return piVar3;
      }
      uVar2 = uVar2 + piVar3[-1];
    } while (uVar2 != *(int *)((ulonglong)_DAT_150b5d1a6 + 0x26f4) + iVar1 + 4U);
  }
  return (int *)0x0;
}

