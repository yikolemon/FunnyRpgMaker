/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10057d3f */

uint * FUN_10057d3f(uint *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
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
  ulonglong uVar15;
  
  uVar15 = FUN_10057e98(param_2);
  uVar6 = (uint)(uVar15 >> 0x20);
  uVar12 = (uint)uVar15;
  uVar10 = uVar6 >> 0x14;
  uVar6 = uVar6 & 0xfffff;
  uVar13 = uVar6 + 0xfffff + (uint)(uVar12 != 0) + (uint)(0xfffffffe < uVar12 - 1);
  if (uVar10 == 0) {
    uVar13 = uVar6;
  }
  uVar6 = 0xfffffbce;
  if (uVar10 != 0) {
    uVar6 = uVar10 - 0x433;
  }
  uVar8 = uVar13 << 1 | uVar12 >> 0x1f;
  uVar10 = uVar12 * 2 + 1;
  uVar9 = uVar8;
  uVar11 = uVar6 - 1;
  do {
    uVar9 = uVar9 << 1 | uVar10 >> 0x1f;
    uVar10 = uVar10 * 2;
    uVar11 = uVar11 - 1;
    uVar3 = uVar12;
    uVar7 = uVar6;
    uVar14 = uVar13;
  } while (-1 < (int)uVar9);
  do {
    uVar14 = uVar14 << 1 | uVar3 >> 0x1f;
    uVar3 = uVar3 * 2;
    uVar7 = uVar7 - 1;
  } while (-1 < (int)uVar14);
  uVar5 = uVar6 - 1;
  iVar2 = uVar12 * 2;
  if ((uVar12 == 0 && (uVar15 & 0xfffff00000000) == 0) && (uVar15 & 0xffe0000000000000) != 0) {
    uVar5 = uVar6 - 2;
    iVar2 = uVar12 << 2;
    uVar8 = uVar13 << 2 | uVar12 >> 0x1e;
  }
  bVar4 = (byte)(uVar5 - uVar11);
  bVar1 = bVar4 & 0x1f;
  uVar13 = iVar2 - 1U << (bVar4 & 0x1f);
  uVar12 = 0;
  if ((uVar5 - uVar11 & 0x20) == 0) {
    uVar12 = uVar13;
    uVar13 = (uVar8 - 1) + (uint)(iVar2 != 0) << bVar1 | iVar2 - 1U >> 0x20 - bVar1;
  }
  *param_1 = uVar3;
  param_1[1] = uVar14;
  param_1[2] = uVar7;
  param_1[5] = uVar13;
  param_1[4] = uVar12;
  param_1[6] = uVar11;
  param_1[8] = uVar10;
  param_1[9] = uVar9;
  param_1[10] = uVar11;
  return param_1;
}

