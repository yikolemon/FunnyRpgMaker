/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c1847 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c1847(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  undefined1 auVar13 [16];
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  
  if (param_2 != (uint *)0x0 && param_1 != (uint *)0x0) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    auVar13._0_4_ = -(uint)((int)uVar2 < 0);
    auVar13._4_4_ = -(uint)((int)uVar4 < 0);
    auVar13._12_4_ = -(uint)((int)uVar5 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
    uVar1 = *param_1;
    auVar15._0_8_ = (longlong)(int)uVar1;
    auVar15._8_4_ = uVar1;
    auVar15._12_4_ = (int)uVar1 >> 0x1f;
    auVar13._8_4_ = auVar13._4_4_;
    lVar6 = (ulonglong)uVar2 * (ulonglong)uVar1 +
            ((ulonglong)(uint)((int)uVar1 >> 0x1f) * (ulonglong)uVar2 +
             (ulonglong)auVar13._0_4_ * (ulonglong)uVar1 << 0x20);
    lVar7 = (ulonglong)uVar4 * (ulonglong)uVar1 +
            ((auVar15._8_8_ >> 0x20) * (ulonglong)uVar4 +
             (auVar13._8_8_ & 0xffffffff) * (ulonglong)uVar1 << 0x20);
    iVar14 = (int)(lVar6 >> 0x3f);
    auVar16._0_8_ = CONCAT44(iVar14,iVar14);
    auVar16._8_4_ = (int)(lVar7 >> 0x3f);
    auVar16._12_4_ = auVar16._8_4_;
    auVar11._4_4_ = uVar5;
    auVar11._0_4_ = uVar3;
    auVar8._0_4_ = -(uint)((int)uVar3 < 0);
    auVar8._4_4_ = -(uint)((int)uVar5 < 0);
    auVar8._12_4_ = -(uint)((int)uVar5 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
    auVar11._8_4_ = uVar5;
    auVar11._12_4_ = auVar8._4_4_;
    uVar1 = param_1[1];
    auVar17._0_8_ = (longlong)(int)uVar1;
    auVar17._8_4_ = uVar1;
    auVar17._12_4_ = (int)uVar1 >> 0x1f;
    auVar8._8_4_ = auVar8._4_4_;
    lVar10 = (ulonglong)uVar3 * (ulonglong)uVar1 +
             ((ulonglong)(uint)((int)uVar1 >> 0x1f) * (ulonglong)uVar3 +
              (ulonglong)auVar8._0_4_ * (ulonglong)uVar1 << 0x20);
    lVar12 = (auVar11._8_8_ & 0xffffffff) * (ulonglong)uVar1 +
             ((auVar17._8_8_ >> 0x20) * (auVar11._8_8_ & 0xffffffff) +
              (auVar8._8_8_ & 0xffffffff) * (ulonglong)uVar1 << 0x20);
    iVar14 = (int)(lVar10 >> 0x3f);
    auVar9._0_8_ = CONCAT44(iVar14,iVar14);
    auVar9._8_4_ = (int)(lVar12 >> 0x3f);
    auVar9._12_4_ = auVar9._8_4_;
    *(ulonglong *)param_1 =
         CONCAT44((int)((ulonglong)(lVar12 + _UNK_10302e78 + auVar9._8_8_) >> 0x10) +
                  (int)((ulonglong)(lVar7 + _UNK_10302e78 + auVar16._8_8_) >> 0x10),
                  (int)((ulonglong)(lVar10 + _DAT_10302e70 + auVar9._0_8_) >> 0x10) +
                  (int)((ulonglong)(lVar6 + _DAT_10302e70 + auVar16._0_8_) >> 0x10));
  }
  return;
}

