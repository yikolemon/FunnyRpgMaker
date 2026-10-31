/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140067cfd */

undefined8 FUN_140067cfd(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  uVar10 = *(int *)(param_1 + 0x20) * param_3;
  uVar4 = FUN_140067f2a(param_2);
  uVar5 = 0xa1;
  iVar7 = (uint)uVar4 - uVar10;
  if (uVar10 <= (uint)uVar4) {
    if (param_3 != 0) {
      uVar12 = iVar7 + param_3;
      iVar11 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x28);
        uVar8 = iVar11 + iVar7;
        iVar2 = FUN_140067f37(param_2,uVar8);
        if (1 < *(uint *)(param_1 + 0x20)) {
          lVar9 = 1;
          uVar13 = uVar12;
          do {
            uVar12 = uVar13 + 1;
            iVar3 = FUN_140067f37(param_2,uVar13);
            lVar6 = (longlong)iVar3 * (longlong)*(int *)(lVar1 + lVar9 * 4);
            iVar2 = iVar2 + (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10);
            lVar9 = lVar9 + 1;
            uVar13 = uVar12;
          } while ((uint)lVar9 < *(uint *)(param_1 + 0x20));
        }
        FUN_1400687c0(param_2,uVar8,iVar2);
        iVar11 = iVar11 + 1;
      } while (iVar11 != param_3);
    }
    FUN_140068a13(param_2,uVar10 - param_3);
    uVar5 = 0;
  }
  return uVar5;
}

