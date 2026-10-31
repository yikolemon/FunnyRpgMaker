/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002a27c */

void FUN_1002a27c(int *param_1,uint param_2,uint param_3,uint *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
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
  
  lVar1 = (ulonglong)param_4[3] * (ulonglong)param_3;
  uVar4 = (uint)lVar1;
  lVar2 = (ulonglong)param_4[3] * (ulonglong)param_2;
  uVar11 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar5 = (uint)lVar2;
  lVar2 = (ulonglong)param_4[2] * (ulonglong)param_3;
  uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar6 = (uint)lVar2;
  lVar2 = (ulonglong)param_4[2] * (ulonglong)param_2;
  uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar7 = (uint)lVar2;
  uVar14 = uVar13 + uVar6;
  uVar8 = (uint)CARRY4(uVar13,uVar6);
  uVar19 = uVar12 + uVar4;
  uVar20 = uVar19 + uVar11;
  uVar15 = uVar14 + uVar5;
  uVar5 = (uint)CARRY4(uVar14,uVar5);
  uVar14 = uVar20 + uVar8;
  uVar21 = uVar14 + uVar5;
  lVar3 = (ulonglong)param_4[1] * (ulonglong)param_2 +
          ((ulonglong)*param_4 * (ulonglong)param_2 >> 0x20);
  uVar18 = (uint)((ulonglong)lVar3 >> 0x20);
  lVar2 = (ulonglong)*param_4 * (ulonglong)param_3;
  uVar16 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar6 = (uint)CARRY4((uint)lVar2,(uint)lVar3);
  uVar13 = uVar16 + uVar18;
  uVar17 = uVar13 + uVar6;
  lVar2 = (ulonglong)param_4[1] * (ulonglong)param_3;
  uVar9 = (uint)lVar2;
  uVar10 = uVar9 + uVar17;
  uVar13 = (int)((ulonglong)lVar2 >> 0x20) + (uint)(CARRY4(uVar16,uVar18) || CARRY4(uVar13,uVar6)) +
           (uint)CARRY4(uVar9,uVar17);
  uVar6 = (uint)CARRY4(uVar10,uVar7);
  uVar9 = uVar13 + uVar15;
  uVar13 = (uint)(CARRY4(uVar13,uVar15) || CARRY4(uVar9,uVar6));
  *param_1 = uVar21 + uVar13;
  param_1[1] = (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar12,uVar4) +
               (uint)CARRY4(uVar19,uVar11) + (uint)(CARRY4(uVar20,uVar8) || CARRY4(uVar14,uVar5)) +
               (uint)CARRY4(uVar21,uVar13);
  *(bool *)(param_1 + 2) = uVar9 + uVar6 == 0 && uVar10 + uVar7 == 0;
  return;
}

