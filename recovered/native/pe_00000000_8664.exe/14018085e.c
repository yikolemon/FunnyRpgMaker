/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018085e */

undefined8 FUN_14018085e(longlong param_1,int param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_58 [32];
  uint local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if ((param_2 < 1) || ((param_3 < 1 || (int)(param_4 - 1) <= param_2) || param_5 + -1 <= param_3))
  {
    uVar4 = 0;
  }
  else {
    uVar7 = (uint)*(byte *)(param_1 + 0xc + (longlong)(int)~param_4 * 0x10);
    iVar6 = (uint)*(byte *)(param_1 + 0xc + (longlong)(int)(1 - param_4) * 0x10) * 0x100;
    lVar5 = (ulonglong)*(byte *)(param_1 + 0xc) * 0x100;
    iVar10 = (uint)*(byte *)(param_1 + 0xc + (ulonglong)(param_4 - 1) * 0x10) * 0x100;
    iVar3 = (uint)*(byte *)(param_1 + 0x1c + (longlong)(int)param_4 * 0x10) * 0x100;
    local_38 = (int)((ulonglong)*(byte *)(param_1 + 0x1c) * 0x16a0900 + 0x8000 >> 0x10) + iVar3 +
               ((iVar6 + uVar7 * -0x100) -
               ((int)((ulonglong)*(byte *)(param_1 + -4) * 0x16a0900 + 0x8000 >> 0x10) + iVar10));
    uStack_34 = (int)((ulonglong)*(byte *)(param_1 + 0xc + (longlong)(int)param_4 * 0x10) *
                      0x16a0900 + 0x8000 >> 0x10) + iVar3 +
                (iVar10 - (iVar6 + uVar7 * 0x100 +
                          (int)((ulonglong)*(byte *)(param_1 + 0xc + (longlong)(int)-param_4 * 0x10)
                                * 0x16a0900 + 0x8000 >> 0x10)));
    FUN_14012ce75(&local_38);
    uVar7 = (uint)lVar5;
    if ((local_38 == 0) || (uStack_34 == 0)) {
      iVar3 = 0x8000 - uVar7;
    }
    else {
      uVar1 = -local_38;
      if ((int)-local_38 < 0) {
        uVar1 = local_38;
      }
      uVar11 = -uStack_34;
      if ((int)-uStack_34 < 0) {
        uVar11 = uStack_34;
      }
      uVar2 = uVar11;
      if (uVar1 < uVar11) {
        uVar2 = uVar1;
      }
      uVar9 = (ulonglong)uVar2;
      uVar2 = uVar11;
      if (uVar11 < uVar1) {
        uVar2 = uVar1;
      }
      uVar8 = (ulonglong)uVar2;
      iVar3 = FUN_14012b378(uVar9,uVar8);
      if ((int)uVar7 < iVar3 / 2) {
        iVar3 = FUN_14012e8ba((uint)(uVar8 * (uVar9 * lVar5 + 0x8000 >> 0x10) + 0x8000 >> 0xf) &
                              0xfffffffe);
        iVar3 = (uVar11 + uVar1 >> 1) - iVar3;
      }
      else if (uVar7 < 0x10000U - iVar3 / 2) {
        lVar5 = uVar8 * (longlong)(int)(0x8000 - uVar7);
        iVar3 = (int)((ulonglong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10);
      }
      else {
        iVar3 = FUN_14012e8ba((uint)(uVar8 * ((0x10000 - uVar7) * uVar9 + 0x8000 >> 0x10) + 0x8000
                                    >> 0xf) & 0xfffffffe);
        iVar3 = iVar3 - (uVar11 + uVar1 >> 1);
      }
    }
    lVar5 = (longlong)(int)local_38 * (longlong)iVar3;
    local_38 = (uint)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
    lVar5 = (longlong)(int)uStack_34 * (longlong)iVar3;
    uStack_34 = (uint)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
    uVar4 = CONCAT44(uStack_34,local_38);
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

