/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002a086 */

void FUN_1002a086(uint *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
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
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  
  iVar13 = (param_2 + 0x124) / 0x1b;
  iVar24 = iVar13 * 0x1b + -0x124;
  iVar13 = iVar13 * 0x10;
  uVar7 = *(uint *)(&DAT_10290e4c + iVar13);
  uVar21 = *(uint *)(&DAT_10290e48 + iVar13);
  uVar27 = *(uint *)(&DAT_10290e54 + iVar13);
  uVar8 = *(uint *)(&DAT_10290e50 + iVar13);
  iVar13 = param_2 - iVar24;
  if (iVar13 != 0) {
    uVar1 = *(uint *)(&DAT_10290fcc + iVar13 * 8);
    uVar14 = (uint)((ulonglong)uVar1 * (ulonglong)uVar21 >> 0x20);
    uVar3 = (uint)((ulonglong)uVar1 * (ulonglong)uVar21);
    uVar18 = *(uint *)(&DAT_10290fc8 + iVar13 * 8);
    uVar15 = (uint)((ulonglong)uVar18 * (ulonglong)uVar7 >> 0x20);
    uVar4 = (uint)((ulonglong)uVar18 * (ulonglong)uVar7);
    uVar16 = (uint)((ulonglong)uVar18 * (ulonglong)uVar21 >> 0x20);
    uVar12 = ((uint)(param_2 * 0x1a934f) >> 0x13) - (((uint)(iVar24 * 0x1a934f) >> 0x13) + iVar13);
    uVar22 = uVar16 + uVar4;
    uVar17 = (uint)CARRY4(uVar16,uVar4);
    uVar4 = uVar3 + uVar22;
    bVar2 = (byte)uVar12;
    uVar25 = uVar4 >> (bVar2 & 0x1f);
    uVar16 = uVar25;
    if ((uVar12 & 0x20) != 0) {
      uVar16 = 0;
    }
    uVar4 = (uint)((ulonglong)uVar18 * (ulonglong)uVar21) >> (bVar2 & 0x1f) |
            uVar4 << 0x20 - (bVar2 & 0x1f);
    if ((uVar12 & 0x20) != 0) {
      uVar4 = uVar25;
    }
    uVar25 = (uint)((ulonglong)uVar1 * (ulonglong)uVar7);
    uVar5 = uVar25 + uVar15;
    uVar6 = uVar5 + uVar14;
    uVar3 = (uint)CARRY4(uVar22,uVar3);
    uVar22 = uVar17 + uVar6;
    uVar21 = uVar22 + uVar3;
    uVar26 = (int)((ulonglong)uVar1 * (ulonglong)uVar7 >> 0x20) + (uint)CARRY4(uVar25,uVar15) +
             (uint)CARRY4(uVar5,uVar14) + (uint)(CARRY4(uVar17,uVar6) || CARRY4(uVar22,uVar3));
    uVar15 = (uint)((ulonglong)uVar1 * (ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)((ulonglong)uVar1 * (ulonglong)uVar8);
    uVar17 = (uint)((ulonglong)uVar18 * (ulonglong)uVar27 >> 0x20);
    uVar7 = (uint)((ulonglong)uVar18 * (ulonglong)uVar27);
    uVar14 = (uint)((ulonglong)uVar18 * (ulonglong)uVar8 >> 0x20);
    uVar8 = (uint)((ulonglong)uVar18 * (ulonglong)uVar8);
    uVar22 = uVar14 + uVar7;
    uVar25 = (uint)CARRY4(uVar14,uVar7);
    uVar6 = uVar8 + uVar21;
    uVar7 = uVar22 + uVar3;
    uVar21 = (uint)CARRY4(uVar8,uVar21);
    uVar8 = uVar7 + uVar26;
    uVar5 = uVar8 + uVar21;
    uVar14 = uVar5 >> (bVar2 & 0x1f);
    uVar18 = uVar14;
    if ((uVar12 & 0x20) != 0) {
      uVar18 = 0;
    }
    uVar19 = uVar6 >> (bVar2 & 0x1f) | uVar5 << 0x20 - (bVar2 & 0x1f);
    if ((uVar12 & 0x20) != 0) {
      uVar19 = uVar14;
    }
    uVar9 = (uint)((ulonglong)uVar1 * (ulonglong)uVar27);
    uVar10 = uVar9 + uVar17;
    uVar11 = uVar10 + uVar15;
    uVar3 = (uint)CARRY4(uVar22,uVar3);
    uVar12 = uVar25 + uVar11;
    uVar20 = uVar12 + uVar3;
    uVar7 = (uint)(CARRY4(uVar7,uVar26) || CARRY4(uVar8,uVar21));
    uVar21 = uVar20 + uVar7;
    bVar2 = 0x40 - bVar2;
    uVar26 = uVar21 << (bVar2 & 0x1f);
    uVar23 = uVar6 << (bVar2 & 0x1f);
    uVar22 = uVar23;
    uVar14 = uVar5 << (bVar2 & 0x1f) | uVar6 >> 0x20 - (bVar2 & 0x1f);
    uVar8 = uVar26;
    uVar27 = (int)((ulonglong)uVar1 * (ulonglong)uVar27 >> 0x20) + (uint)CARRY4(uVar9,uVar17) +
             (uint)CARRY4(uVar10,uVar15) + (uint)(CARRY4(uVar25,uVar11) || CARRY4(uVar12,uVar3)) +
             (uint)CARRY4(uVar20,uVar7) << (bVar2 & 0x1f) | uVar21 >> 0x20 - (bVar2 & 0x1f);
    if ((bVar2 & 0x20) != 0) {
      uVar8 = 0;
      uVar22 = 0;
      uVar14 = uVar23;
      uVar27 = uVar26;
    }
    uVar8 = uVar8 | uVar19;
    uVar27 = uVar27 | uVar18;
    uVar21 = (uVar22 | uVar4) + 1;
    uVar7 = (uVar14 | uVar16) + (uint)(0xfffffffe < (uVar22 | uVar4));
  }
  *param_1 = uVar21;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar27;
  return;
}

