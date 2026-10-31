/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407520ca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1407520ca(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)(ulonglong)((int)&stack0xfffffffffffffff0 - 0x10);
  iVar1 = piVar6[7];
  *piVar6 = iVar1;
  pcVar3 = _DAT_150adbead;
  piVar6[-2] = 0x407520e5;
  piVar6[-1] = 1;
  uVar4 = (*pcVar3)();
  iVar2 = *(int *)((ulonglong)_DAT_1874c0851039d74c + 4);
  iVar5 = _DAT_1874c0851039d74c + 0x2858;
  piVar6[3] = iVar1;
  piVar6[1] = iVar2;
  *piVar6 = iVar5;
  piVar6[-2] = 0x40752108;
  piVar6[-1] = 1;
  FUN_14075b127();
  return uVar4;
}

