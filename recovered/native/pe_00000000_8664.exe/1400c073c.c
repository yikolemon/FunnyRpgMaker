/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c073c */

ulonglong FUN_1400c073c(longlong param_1,longlong param_2,uint *param_3,code *param_4,
                       undefined8 param_5,byte param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 in_RAX;
  undefined7 uVar10;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  int local_78;
  ushort local_70;
  undefined1 local_6e;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  uVar2 = *param_3;
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar11 = uVar2;
  if (uVar2 < 0x20) {
    bVar12 = (byte)(uVar3 >> 0x1a) & 1;
    bVar13 = bVar12 & uVar2 == 10;
    if (((uVar2 == 10 & param_6) == 1) && (uVar11 = 10, (uVar3 >> 0x1a & 1) == 0)) {
      *param_3 = 0x20;
      bVar13 = 1;
      uVar11 = 0x20;
    }
    if ((((uVar11 == 9 & (byte)((uVar3 & 0x20) >> 5)) != 0) || (bVar13 != 0)) ||
       ((uVar11 == 10 & bVar12) != 0)) goto LAB_1400c07e8;
  }
  else {
LAB_1400c07e8:
    if (param_6 == 0) {
      uVar10 = 0;
      uVar8 = 0;
      if (((0xffff < uVar11) || (uVar11 == 0x7f)) || (uVar11 - 0xe000 < 0x1900)) goto LAB_1400c09a1;
    }
    else if (0xffff < uVar11) goto LAB_1400c099f;
    uVar9 = CONCAT71(uVar10,uVar2 < 0x20);
    if ((uVar3 & 0x1000001f) != 0 && uVar2 >= 0x20) {
      uVar1 = *(ushort *)(param_1 + 0xc80);
      uVar8 = (ulonglong)uVar11;
      if ((uVar11 & 0xfffd) == 0x2c) {
        uVar8 = (ulonglong)uVar1;
      }
      if ((uVar3 & 0x10000005) == 0) {
        uVar8 = (ulonglong)uVar11;
      }
      uVar9 = (ulonglong)((int)uVar8 - 0xfee0);
      if (0x5d < (int)uVar8 - 0xff01U) {
        uVar9 = uVar8;
      }
      if ((uVar3 & 7) == 0) {
        uVar9 = uVar8;
      }
      uVar2 = (uint)uVar9;
      uVar11 = uVar2 - 0x30;
      if ((((uVar3 & 1) != 0) && (9 < uVar11)) &&
         ((uVar2 != uVar1 &&
          ((uVar8 = 0, 0x2f < uVar2 || ((0xac0000000000U >> (uVar9 & 0x3f) & 1) == 0))))))
      goto LAB_1400c09a1;
      if (((uVar3 & 4) != 0) && ((9 < uVar11 && (uVar2 != uVar1)))) {
        uVar8 = 0;
        if ((0x3b < uVar2 - 0x2a) ||
           ((0x80000000800002bU >> ((ulonglong)(uVar2 - 0x2a) & 0x3f) & 1) == 0))
        goto LAB_1400c09a1;
      }
      uVar6 = uVar2 - 0x61;
      uVar9 = (ulonglong)uVar6;
      if (((((uVar3 & 2) != 0) && (9 < uVar11)) && (5 < uVar6)) && (5 < uVar2 - 0x41))
      goto LAB_1400c099f;
      uVar11 = uVar2 - 0x20;
      if (0x19 < uVar6) {
        uVar11 = uVar2;
      }
      if ((uVar3 & 8) == 0) {
        uVar11 = uVar2;
      }
      if ((uVar3 & 0x10) != 0) {
        uVar9 = 0;
        uVar8 = uVar9;
        if (((uVar11 == 9) || (uVar8 = 0, uVar11 == 0x20)) || (uVar11 == 0x3000))
        goto LAB_1400c09a1;
      }
      *param_3 = uVar11;
    }
    lVar5 = DAT_140f2a910;
    if ((uVar3 >> 0x15 & 1) == 0) {
LAB_1400c0929:
      uVar8 = CONCAT71((int7)(uVar9 >> 8),1);
      goto LAB_1400c09a1;
    }
    FUN_1400bfe82(&local_90);
    local_90 = lVar5;
    local_78 = *(int *)(param_2 + 0x14);
    local_88 = 0x200000;
    local_70 = (ushort)uVar11;
    if (*(int *)(lVar5 + 0x167c) == local_78) {
      local_6e = *(undefined1 *)(lVar5 + 0x1688);
    }
    else {
      local_6e = 0;
    }
    puVar4 = *(undefined4 **)(param_2 + 8);
    local_58 = *puVar4;
    local_54 = puVar4[1];
    local_50 = puVar4[2];
    local_80 = param_5;
    local_84 = uVar3;
    iVar7 = (*param_4)();
    if (iVar7 == 0) {
      uVar9 = (ulonglong)local_70;
      *param_3 = (uint)local_70;
      if (local_70 != 0) goto LAB_1400c0929;
    }
  }
LAB_1400c099f:
  uVar8 = 0;
LAB_1400c09a1:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_b8);
  }
  return uVar8;
}

