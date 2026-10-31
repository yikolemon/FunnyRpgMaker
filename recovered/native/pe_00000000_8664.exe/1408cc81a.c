/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cc81a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408cc81a(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  
  piVar4 = (int *)(ulonglong)*(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc);
  if (*piVar4 != _DAT_150c71c7f) {
    uVar1 = *(undefined4 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
    pcVar3 = (char *)(ulonglong)_DAT_35081851039bbd0;
    *pcVar3 = *pcVar3 + (char)_DAT_35081851039bbd0;
    if (*pcVar3 == '\0') {
      iVar2 = FUN_1408ce4db(uVar1);
      *piVar4 = iVar2;
    }
  }
  return;
}

