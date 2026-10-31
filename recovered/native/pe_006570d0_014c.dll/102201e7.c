/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102201e7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_102201e7(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  if (param_2 < 1) {
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    uVar3 = 0;
    uVar6 = 0;
    if ((param_3 < param_5 + -1 && param_2 < (int)(param_4 - 1)) && 0 < param_3) {
      uVar4 = (uint)*(byte *)(param_1 + 0xc + ~param_4 * 0x10);
      local_20 = uVar4 * 0x100;
      iVar7 = (uint)*(byte *)(param_1 + 0xc + (1 - param_4) * 0x10) * 0x100;
      local_30 = (uint)*(byte *)(param_1 + 0xc) << 8;
      local_2c = (uint)*(byte *)(param_1 + 0xc + (param_4 - 1) * 0x10) * 0x100;
      local_24 = (uint)*(byte *)(param_1 + 0x1c + param_4 * 0x10) * 0x100;
      lVar1 = (ulonglong)*(byte *)(param_1 + -4) * 0x16a0900 + 0x8000;
      lVar12 = (ulonglong)*(byte *)(param_1 + param_4 * -0x10 + 0xc) * 0x16a0900 + 0x8000;
      lVar10 = (ulonglong)*(byte *)(param_1 + 0xc + param_4 * 0x10) * 0x16a0900;
      local_28 = (undefined4)((ulonglong)lVar10 >> 0x20);
      local_34 = (undefined4)lVar10;
      local_1c = CONCAT44((local_2c -
                          (((int)((ulonglong)lVar12 >> 0x20) << 0x10 | (uint)lVar12 >> 0x10) +
                           local_20 + iVar7)) + local_24 +
                          (int)((ulonglong)(lVar10 + _UNK_10302e78) >> 0x10),
                          ((iVar7 + uVar4 * -0x100) -
                          (((int)((ulonglong)lVar1 >> 0x20) * 0x10000 | (uint)lVar1 >> 0x10) +
                          local_2c)) + local_24 +
                          (int)((ulonglong)*(byte *)(param_1 + 0x1c) * 0x16a0900 + _DAT_10302e70 >>
                               0x10));
      FUN_101c3f10(&local_1c);
      if (((uint)local_1c == 0) || (local_1c._4_4_ == 0)) {
        uVar4 = 0x8000 - local_30;
      }
      else {
        uVar4 = -(uint)local_1c;
        if ((int)-(uint)local_1c < 0) {
          uVar4 = (uint)local_1c;
        }
        uVar5 = -local_1c._4_4_;
        if ((int)-local_1c._4_4_ < 0) {
          uVar5 = local_1c._4_4_;
        }
        uVar8 = uVar5;
        if (uVar4 < uVar5) {
          uVar8 = uVar4;
        }
        uVar9 = uVar5;
        if (uVar5 < uVar4) {
          uVar9 = uVar4;
        }
        iVar7 = FUN_101c2523(uVar8,uVar9);
        if ((int)local_30 < iVar7 / 2) {
          uVar2 = (ulonglong)uVar8 * (ulonglong)local_30 + 0x8000 >> 0x10;
          lVar10 = (uVar2 & 0xffffffff) * (ulonglong)uVar9 +
                   CONCAT44((int)(uVar2 >> 0x20) * uVar9,0x8000);
          iVar7 = FUN_101c573d((int)((ulonglong)lVar10 >> 0x20) << 0x11 |
                               (uint)lVar10 >> 0xf & 0xfffffffe);
          uVar4 = (uVar5 + uVar4 >> 1) - iVar7;
        }
        else if (local_30 < 0x10000U - iVar7 / 2) {
          lVar10 = (ulonglong)uVar9 * (ulonglong)(0x8000 - local_30);
          uVar4 = (uint)lVar10;
          iVar7 = ((int)(0x8000 - local_30) >> 0x1f) * uVar9 + (int)((ulonglong)lVar10 >> 0x20);
          uVar8 = iVar7 >> 0x1f;
          uVar5 = uVar4 + uVar8;
          uVar4 = (uVar8 + iVar7 + (uint)CARRY4(uVar4,uVar8) + (uint)(0xffff7fff < uVar5)) * 0x10000
                  | uVar5 + 0x8000 >> 0x10;
        }
        else {
          uVar2 = (ulonglong)uVar8 * (ulonglong)(0x10000 - local_30) + 0x8000 >> 0x10;
          lVar10 = (uVar2 & 0xffffffff) * (ulonglong)uVar9 +
                   CONCAT44((int)(uVar2 >> 0x20) * uVar9,0x8000);
          iVar7 = FUN_101c573d((int)((ulonglong)lVar10 >> 0x20) << 0x11 |
                               (uint)lVar10 >> 0xf & 0xfffffffe);
          uVar4 = iVar7 - (uVar5 + uVar4 >> 1);
        }
      }
      auVar13._0_4_ = -(uint)((int)local_1c < 0);
      auVar13._4_4_ = -(uint)((longlong)local_1c < 0);
      auVar13._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
      auVar11._8_4_ = (int)(local_1c >> 0x20);
      auVar11._0_8_ = local_1c;
      auVar11._12_4_ = auVar13._4_4_;
      auVar15._0_8_ = (longlong)(int)uVar4;
      auVar15._8_4_ = uVar4;
      auVar15._12_4_ = (int)uVar4 >> 0x1f;
      auVar13._8_4_ = auVar13._4_4_;
      lVar10 = (local_1c & 0xffffffff) * (ulonglong)uVar4 +
               ((ulonglong)(uint)((int)uVar4 >> 0x1f) * (local_1c & 0xffffffff) +
                (ulonglong)auVar13._0_4_ * (ulonglong)uVar4 << 0x20);
      lVar12 = (auVar11._8_8_ & 0xffffffff) * (ulonglong)uVar4 +
               ((auVar15._8_8_ >> 0x20) * (auVar11._8_8_ & 0xffffffff) +
                (auVar13._8_8_ & 0xffffffff) * (ulonglong)uVar4 << 0x20);
      iVar7 = (int)(lVar10 >> 0x3f);
      auVar14._0_8_ = CONCAT44(iVar7,iVar7);
      auVar14._8_4_ = (int)(lVar12 >> 0x3f);
      auVar14._12_4_ = auVar14._8_4_;
      uVar3 = (undefined4)((ulonglong)(auVar14._0_8_ + lVar10 + _DAT_10302e70) >> 0x10);
      uVar6 = (undefined4)((ulonglong)(auVar14._8_8_ + lVar12 + _UNK_10302e78) >> 0x10);
      local_1c = CONCAT44(uVar6,uVar3);
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_34)) {
    return CONCAT44(uVar6,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

