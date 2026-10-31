/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000aae1 */

int FUN_1000aae1(uint param_1,uint param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
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
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint local_34;
  uint local_30;
  uint local_18;
  uint local_14;
  
  lVar4 = (ulonglong)param_3[1] * (ulonglong)param_1 +
          ((ulonglong)*param_3 * (ulonglong)param_1 >> 0x20);
  uVar24 = (uint)((ulonglong)lVar4 >> 0x20);
  lVar3 = (ulonglong)*param_3 * (ulonglong)param_2;
  uVar16 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar10 = (uint)CARRY4((uint)lVar3,(uint)lVar4);
  uVar9 = uVar16 + uVar24;
  lVar8 = (ulonglong)param_3[1] * (ulonglong)param_2 +
          (ulonglong)CONCAT14(CARRY4(uVar16,uVar24) || CARRY4(uVar9,uVar10),uVar9 + uVar10);
  lVar3 = (ulonglong)param_3[2] * (ulonglong)param_1;
  uVar16 = (uint)((ulonglong)lVar3 >> 0x20);
  lVar4 = (ulonglong)param_3[3] * (ulonglong)param_1;
  uVar17 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar9 = (uint)lVar4;
  lVar4 = (ulonglong)param_3[2] * (ulonglong)param_2;
  uVar18 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar10 = (uint)lVar4;
  lVar4 = (ulonglong)param_3[3] * (ulonglong)param_2;
  uVar11 = (uint)lVar4;
  uVar24 = uVar10 + uVar16;
  uVar10 = (uint)CARRY4(uVar10,uVar16);
  uVar23 = uVar11 + uVar18;
  uVar25 = uVar23 + uVar10;
  uVar20 = uVar24 + uVar9;
  uVar9 = (uint)CARRY4(uVar24,uVar9);
  uVar1 = uVar25 + uVar17;
  uVar26 = uVar1 + uVar9;
  lVar5 = (ulonglong)param_3[4] * (ulonglong)param_1;
  uVar24 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar12 = (uint)lVar5;
  lVar5 = (ulonglong)param_3[5] * (ulonglong)param_1;
  lVar6 = (ulonglong)param_3[4] * (ulonglong)param_2;
  uVar19 = (uint)((ulonglong)lVar6 >> 0x20);
  uVar16 = (uint)lVar6;
  lVar6 = (ulonglong)param_3[5] * (ulonglong)param_2;
  uVar13 = (uint)lVar6;
  uVar29 = uVar16 + uVar24;
  uVar16 = (uint)CARRY4(uVar16,uVar24);
  uVar2 = uVar13 + uVar19;
  uVar21 = uVar2 + uVar16;
  local_18 = (uint)lVar5;
  uVar30 = uVar29 + local_18;
  uVar24 = (uint)CARRY4(uVar29,local_18);
  local_14 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar29 = uVar21 + local_14;
  uVar22 = uVar29 + uVar24;
  uVar27 = uVar26 + uVar12;
  local_34 = (uint)lVar8;
  local_30 = (uint)((ulonglong)lVar8 >> 0x20);
  uVar20 = (uint)(CARRY4(uVar20,local_30) ||
                 CARRY4(uVar20 + local_30,(uint)CARRY4((uint)lVar3,local_34)));
  uVar28 = uVar27 + uVar20;
  uVar9 = (int)((ulonglong)lVar4 >> 0x20) + (uint)(CARRY4(uVar11,uVar18) || CARRY4(uVar23,uVar10)) +
          (uint)(CARRY4(uVar25,uVar17) || CARRY4(uVar1,uVar9)) + uVar30 +
          (uint)CARRY4(uVar26,uVar12) + (uint)CARRY4(uVar27,uVar20);
  uVar10 = (uint)(uVar9 < uVar30 || uVar9 - uVar30 < (uint)(uVar28 < uVar12));
  uVar23 = uVar22 + uVar10;
  uVar20 = (int)((ulonglong)lVar6 >> 0x20) + (uint)(CARRY4(uVar13,uVar19) || CARRY4(uVar2,uVar16)) +
           (uint)(CARRY4(uVar21,local_14) || CARRY4(uVar29,uVar24)) + (uint)CARRY4(uVar22,uVar10);
  uVar16 = uVar20 * 0x800000 | uVar23 >> 9;
  uVar20 = uVar20 >> 9;
  uVar24 = (uint)((ulonglong)uVar16 * 0xa09b5a53 >> 0x20);
  lVar3 = (ulonglong)uVar20 * 0xa09b5a53;
  uVar10 = (uint)lVar3;
  lVar4 = (ulonglong)uVar16 * 0x44b82f;
  lVar3 = (ulonglong)uVar20 * 0x44b82f +
          (ulonglong)
          ((int)((ulonglong)lVar4 >> 0x20) +
           (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4(uVar10,uVar24) +
          (uint)CARRY4((uint)lVar4,uVar10 + uVar24));
  uVar10 = ((int)((ulonglong)lVar3 >> 0x20) << 0x15 | (uint)lVar3 >> 0xb) * -1000000000 + uVar23;
  if (param_4 < 0xa0) {
    uVar16 = uVar23 * 0x800000 | uVar9 >> 9;
    lVar4 = (ulonglong)(uVar10 >> 9) * 0xa09b5a53 + ((ulonglong)uVar16 * 0xa09b5a53 >> 0x20);
    lVar3 = (ulonglong)uVar16 * 0x44b82f;
    lVar3 = (ulonglong)(uVar10 >> 9) * 0x44b82f +
            (ulonglong)
            ((int)((ulonglong)lVar3 >> 0x20) + (int)((ulonglong)lVar4 >> 0x20) +
            (uint)CARRY4((uint)lVar3,(uint)lVar4));
    uVar10 = ((int)((ulonglong)lVar3 >> 0x20) << 0x15 | (uint)lVar3 >> 0xb) * -1000000000 + uVar9;
    iVar14 = 0;
    uVar9 = uVar28;
  }
  else {
    iVar14 = -0xa0;
  }
  bVar15 = (byte)(param_4 + iVar14);
  bVar7 = bVar15 & 0x1f;
  uVar16 = uVar10 >> (bVar15 & 0x1f);
  uVar24 = 0;
  if ((param_4 + iVar14 & 0x20U) == 0) {
    uVar24 = uVar16;
    uVar16 = uVar9 >> bVar7 | uVar10 << 0x20 - bVar7;
  }
  uVar9 = uVar24 << 0x17 | uVar16 >> 9;
  uVar20 = (uint)((ulonglong)uVar9 * 0xa09b5a53 >> 0x20);
  lVar3 = (ulonglong)(uVar24 >> 9) * 0xa09b5a53;
  uVar10 = (uint)lVar3;
  lVar4 = (ulonglong)uVar9 * 0x44b82f;
  lVar3 = (ulonglong)(uVar24 >> 9) * 0x44b82f +
          (ulonglong)
          ((int)((ulonglong)lVar4 >> 0x20) +
           (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4(uVar10,uVar20) +
          (uint)CARRY4((uint)lVar4,uVar10 + uVar20));
  return ((int)((ulonglong)lVar3 >> 0x20) << 0x15 | (uint)lVar3 >> 0xb) * -1000000000 + uVar16;
}

