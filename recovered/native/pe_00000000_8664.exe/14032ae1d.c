/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032ae1d */

void FUN_14032ae1d(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  
  lVar3 = DAT_14062a630;
  lVar1 = *(longlong *)(DAT_14062a630 + 0x15b0);
  iVar6 = *(int *)(DAT_14062a630 + 0x15a8);
  lVar2 = *(longlong *)(lVar1 + -8 + (longlong)iVar6 * 8);
  if ((lVar2 != param_1) && (1 < iVar6 && *(longlong *)(lVar2 + 0x428) != param_1)) {
    uVar5 = (ulonglong)(iVar6 - 1);
    iVar6 = 1;
    do {
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
      if (*(longlong *)(lVar1 + uVar5 * 8) == param_1) {
        FUN_1404b97c0(lVar1 + uVar5 * 8,lVar1 + uVar5 * 8 + 8,(longlong)iVar6 << 3);
        *(longlong *)(*(longlong *)(lVar3 + 0x15b0) + -8 + (longlong)*(int *)(lVar3 + 0x15a8) * 8) =
             param_1;
        return;
      }
      iVar6 = iVar6 + 1;
    } while (0 < (int)uVar4);
  }
  return;
}

