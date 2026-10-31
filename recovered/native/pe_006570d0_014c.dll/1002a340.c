/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002a340 */

uint FUN_1002a340(uint param_1,uint param_2,uint *param_3,byte param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  lVar1 = (ulonglong)param_3[1] * (ulonglong)param_1;
  uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2;
  uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar3 = (uint)lVar1;
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_1;
  uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar13 = uVar11 + uVar3;
  uVar12 = (uint)CARRY4(uVar11,uVar3);
  bVar8 = 0x40 - param_4;
  uVar11 = uVar2 + uVar13;
  uVar4 = uVar11 >> (bVar8 & 0x1f);
  uVar3 = uVar4;
  if ((bVar8 & 0x20) != 0) {
    uVar3 = 0;
  }
  uVar11 = (uint)lVar1 >> (bVar8 & 0x1f) | uVar11 << 0x20 - (bVar8 & 0x1f);
  if ((bVar8 & 0x20) != 0) {
    uVar11 = uVar4;
  }
  lVar1 = (ulonglong)param_3[2] * (ulonglong)param_1;
  lVar1 = (ulonglong)param_3[1] * (ulonglong)param_2 +
          CONCAT44(param_1 * param_3[3] + (int)((ulonglong)lVar1 >> 0x20) + param_3[2] * param_2,
                   (int)lVar1);
  uVar5 = (uint)lVar1;
  uVar6 = uVar5 + uVar10;
  uVar7 = uVar6 + uVar9;
  uVar2 = (uint)CARRY4(uVar13,uVar2);
  uVar4 = uVar12 + uVar7;
  uVar13 = uVar4 + uVar2;
  uVar4 = (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar5,uVar10) + (uint)CARRY4(uVar6,uVar9) +
          (uint)(CARRY4(uVar12,uVar7) || CARRY4(uVar4,uVar2));
  uVar2 = uVar4 >> (bVar8 & 0x1f);
  if ((bVar8 & 0x20) == 0) {
    uVar2 = uVar13 >> (bVar8 & 0x1f) | uVar4 << 0x20 - (bVar8 & 0x1f);
  }
  uVar10 = uVar13 << (param_4 & 0x1f);
  uVar9 = uVar10;
  uVar4 = uVar4 << (param_4 & 0x1f) | uVar13 >> 0x20 - (param_4 & 0x1f);
  if ((param_4 & 0x20) != 0) {
    uVar9 = 0;
    uVar4 = uVar10;
  }
  return (uint)((uVar9 == 0 && uVar11 == 0) && (uVar4 == 0 && uVar3 == 0)) << 8 | uVar2 & 1;
}

