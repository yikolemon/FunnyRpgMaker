/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075219b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075219b(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  iVar1 = piVar4[6];
  if (iVar1 != 0) {
    iVar3 = _DAT_1c74c0851039d74c + 0x2858;
    piVar4[1] = *(int *)((ulonglong)_DAT_1c74c0851039d74c + 4);
    *piVar4 = iVar3;
    piVar4[3] = -1;
    piVar4[-2] = 0x407521cc;
    piVar4[-1] = 1;
    FUN_14075b127();
  }
  *piVar4 = iVar1;
  pcVar2 = _DAT_150adbfaa;
  piVar4[-2] = 0x407521de;
  piVar4[-1] = 1;
  (*pcVar2)();
  return;
}

