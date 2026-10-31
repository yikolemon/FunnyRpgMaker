/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008592b */

void FUN_14008592b(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar2 = DAT_140f2a910;
  if (param_1 == 0) {
    uVar4 = *(int *)(DAT_140f2a910 + 0x15b8) - 1;
  }
  else {
    iVar7 = -1;
    if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
      do {
        param_1 = *(longlong *)(param_1 + 0x408);
      } while ((*(byte *)(param_1 + 0x17) & 1) != 0);
      iVar7 = 0;
    }
    iVar3 = FUN_14009520b();
    uVar4 = iVar3 + iVar7;
  }
  if (-1 < (int)uVar4) {
    lVar5 = (ulonglong)uVar4 + 1;
    do {
      lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x15c0) + -8 + lVar5 * 8);
      if ((((lVar6 != param_2) && (*(char *)(lVar6 + 0x10a) == '\x01')) &&
          ((param_3 == 0 || (*(longlong *)(lVar6 + 0x48) == param_3)))) &&
         ((~*(uint *)(lVar6 + 0x14) & 0x10200) != 0)) goto LAB_1400859bb;
      lVar6 = lVar5 + -1;
      bVar1 = 0 < lVar5;
      lVar5 = lVar6;
    } while (lVar6 != 0 && bVar1);
  }
  lVar6 = 0;
LAB_1400859bb:
  FUN_140081404(lVar6,param_4);
  return;
}

