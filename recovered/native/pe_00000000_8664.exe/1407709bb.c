/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407709bb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1407709bb(void)

{
  int iVar1;
  int unaff_EBX;
  uint uVar2;
  int *piVar3;
  
  iVar1 = *(int *)((ulonglong)_DAT_150b0e110 + 0x26f0);
  if (iVar1 != 0) {
    uVar2 = iVar1 + 4;
    do {
      piVar3 = (int *)(ulonglong)uVar2;
      if ((*piVar3 == unaff_EBX) && (*(char *)((longlong)piVar3 + 0x21) != '\x01')) {
        return piVar3;
      }
      uVar2 = uVar2 + piVar3[-1];
    } while (uVar2 != *(int *)((ulonglong)_DAT_150b0e110 + 0x26e8) + iVar1 + 4U);
  }
  return (int *)0x0;
}

