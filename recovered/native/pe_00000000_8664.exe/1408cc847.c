/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cc847 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408cc847(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar1 = *(uint *)(uVar5 + 0xc);
  if (*(int *)(ulonglong)uVar1 != *(int *)((ulonglong)*(uint *)(uVar5 + 0x10) * 4 + 0x103a50f0)) {
    uVar2 = *(undefined4 *)(uVar5 + 8);
    pcVar4 = (char *)(ulonglong)_DAT_35081851039bbd0;
    *pcVar4 = *pcVar4 + (char)_DAT_35081851039bbd0;
    if (*pcVar4 == '\0') {
      iVar3 = FUN_1408d3f9c(uVar2);
      *(int *)(ulonglong)uVar1 = iVar3;
    }
  }
  return;
}

