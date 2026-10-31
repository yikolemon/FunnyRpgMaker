/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011994d */

void FUN_18011994d(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  
  lVar3 = DAT_180419160;
  lVar1 = *(longlong *)(DAT_180419160 + 0x15b0);
  iVar6 = *(int *)(DAT_180419160 + 0x15a8);
  lVar2 = *(longlong *)(lVar1 + -8 + (longlong)iVar6 * 8);
  if ((lVar2 != param_1) && (1 < iVar6 && *(longlong *)(lVar2 + 0x428) != param_1)) {
    uVar5 = (ulonglong)(iVar6 - 1);
    iVar6 = 1;
    do {
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
      if (*(longlong *)(lVar1 + uVar5 * 8) == param_1) {
        FUN_1802a82f0(lVar1 + uVar5 * 8,lVar1 + uVar5 * 8 + 8,(longlong)iVar6 << 3);
        *(longlong *)(*(longlong *)(lVar3 + 0x15b0) + -8 + (longlong)*(int *)(lVar3 + 0x15a8) * 8) =
             param_1;
        return;
      }
      iVar6 = iVar6 + 1;
    } while (0 < (int)uVar4);
  }
  return;
}

