/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007849e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007849e(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  
  iVar26 = 0x3fe;
  do {
    param_1[iVar26 + -0x3fd] =
         -(param_1[iVar26 + -0x18c] & 1) & 0x9908b0df ^ param_1[iVar26] ^
         (param_1[iVar26 + -0x18c] & 0x7ffffffe | param_1[iVar26 + -0x18d] & 0x80000000) >> 1;
    uVar25 = _UNK_1029455c;
    uVar24 = _UNK_10294558;
    uVar23 = _UNK_10294554;
    uVar22 = _DAT_10294550;
    uVar21 = _UNK_1029454c;
    uVar20 = _UNK_10294548;
    uVar19 = _UNK_10294544;
    uVar18 = _DAT_10294540;
    uVar17 = _UNK_1028f62c;
    uVar16 = _UNK_1028f628;
    uVar15 = _UNK_1028f624;
    uVar14 = _DAT_1028f620;
    iVar26 = iVar26 + 1;
  } while (iVar26 != 0x4e1);
  iVar26 = 0x355;
  do {
    puVar2 = param_1 + iVar26 + -1;
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar1 = param_1 + iVar26;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar3 = param_1 + iVar26 + -0x354;
    uVar11 = puVar3[1];
    uVar12 = puVar3[2];
    uVar13 = puVar3[3];
    puVar4 = param_1 + iVar26 + -0x271;
    *puVar4 = *puVar3 ^ (*puVar1 & uVar18 | *puVar2 & uVar14) >> 1 ^
              (int)(*puVar1 << 0x1f) >> 0x1f & uVar22;
    puVar4[1] = uVar11 ^ (uVar5 & uVar19 | uVar8 & uVar15) >> 1 ^
                (int)(uVar5 << 0x1f) >> 0x1f & uVar23;
    puVar4[2] = uVar12 ^ (uVar6 & uVar20 | uVar9 & uVar16) >> 1 ^
                (int)(uVar6 << 0x1f) >> 0x1f & uVar24;
    puVar4[3] = uVar13 ^ (uVar7 & uVar21 | uVar10 & uVar17) >> 1 ^
                (int)(uVar7 << 0x1f) >> 0x1f & uVar25;
    iVar26 = iVar26 + 4;
  } while (iVar26 != 0x4e1);
  param_1[0x270] =
       -(param_1[1] & 1) & 0x9908b0df ^ param_1[0x18d] ^
       (param_1[1] & 0x7ffffffe | param_1[0x4e0] & 0x80000000) >> 1;
  *param_1 = 0;
  return;
}

