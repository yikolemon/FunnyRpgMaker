/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007e7b2 */

undefined8 FUN_14007e7b2(longlong param_1,int param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_58 [32];
  uint local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  if ((param_2 < 1) || ((param_3 < 1 || (int)(param_4 - 1) <= param_2) || param_5 + -1 <= param_3))
  {
    uVar6 = 0;
  }
  else {
    uVar5 = (uint)*(byte *)(param_1 + 0xc + (longlong)(int)~param_4 * 0x10);
    iVar8 = (uint)*(byte *)(param_1 + 0xc + (longlong)(int)(1 - param_4) * 0x10) * 0x100;
    lVar7 = (ulonglong)*(byte *)(param_1 + 0xc) * 0x100;
    iVar10 = (uint)*(byte *)(param_1 + 0xc + (ulonglong)(param_4 - 1) * 0x10) * 0x100;
    iVar4 = (uint)*(byte *)(param_1 + 0x1c + (longlong)(int)param_4 * 0x10) * 0x100;
    local_38 = (int)((ulonglong)*(byte *)(param_1 + 0x1c) * 0x16a0900 + 0x8000 >> 0x10) + iVar4 +
               ((iVar8 + uVar5 * -0x100) -
               ((int)((ulonglong)*(byte *)(param_1 + -4) * 0x16a0900 + 0x8000 >> 0x10) + iVar10));
    uStack_34 = (int)((ulonglong)*(byte *)(param_1 + 0xc + (longlong)(int)param_4 * 0x10) *
                      0x16a0900 + 0x8000 >> 0x10) + iVar4 +
                (iVar10 - (iVar8 + uVar5 * 0x100 +
                          (int)((ulonglong)*(byte *)(param_1 + 0xc + (longlong)(int)-param_4 * 0x10)
                                * 0x16a0900 + 0x8000 >> 0x10)));
    FUN_1400202a4(&local_38);
    uVar5 = (uint)lVar7;
    if ((local_38 == 0) || (uStack_34 == 0)) {
      iVar4 = 0x8000 - uVar5;
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
      uVar3 = uVar11;
      if (uVar11 < uVar1) {
        uVar3 = uVar1;
      }
      uVar9 = (ulonglong)uVar3;
      iVar4 = FUN_14001ecff(uVar2,uVar3);
      if ((int)uVar5 < iVar4 / 2) {
        uVar5 = FUN_140021ce9((uint)(uVar9 * ((ulonglong)uVar2 * lVar7 + 0x8000 >> 0x10) + 0x8000 >>
                                    0xf) & 0xfffffffe);
        iVar4 = (uVar11 + uVar1 >> 1) - uVar5;
      }
      else if (uVar5 < 0x10000U - iVar4 / 2) {
        lVar7 = uVar9 * (longlong)(int)(0x8000 - uVar5);
        iVar4 = (int)((ulonglong)(lVar7 + (lVar7 >> 0x3f) + 0x8000) >> 0x10);
      }
      else {
        uVar5 = FUN_140021ce9((uint)(uVar9 * ((ulonglong)(0x10000 - uVar5) * (ulonglong)uVar2 +
                                              0x8000 >> 0x10) + 0x8000 >> 0xf) & 0xfffffffe);
        iVar4 = uVar5 - (uVar11 + uVar1 >> 1);
      }
    }
    lVar7 = (longlong)(int)local_38 * (longlong)iVar4;
    local_38 = (uint)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
    lVar7 = (longlong)(int)uStack_34 * (longlong)iVar4;
    uStack_34 = (uint)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
    uVar6 = CONCAT44(uStack_34,local_38);
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

