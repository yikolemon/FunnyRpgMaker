/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e8de4 */

void FUN_1407e8de4(undefined8 *param_1)

{
  uint *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar9;
  int *piVar10;
  char unaff_BL;
  uint uVar11;
  ulonglong uVar13;
  longlong in_FS_OFFSET;
  bool bVar14;
  undefined4 *puVar8;
  ulonglong uVar12;
  
  uVar13 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar11 = (int)&stack0xfffffffffffffff8 - 0x10;
  uVar12 = (ulonglong)uVar11;
  uVar7 = (int)&stack0xfffffffffffffff8 - 0xc;
  puVar8 = (undefined4 *)(ulonglong)uVar7;
  puVar8[-1] = uVar11;
  puVar8[2] = 0xffffffff;
  puVar8[1] = 0x10196000;
  uVar3 = *(undefined4 *)(in_FS_OFFSET + 0x1407e8e05);
  *puVar8 = uVar3;
  *(uint *)(in_FS_OFFSET + 0x5189d23100000000) = uVar7;
  bVar5 = (byte)uVar7;
  uVar4 = (undefined3)(uVar7 >> 8);
  puVar1 = (uint *)((longlong)param_1 + 0x51890851);
  uVar7 = *puVar1 + (uint)param_1;
  bVar14 = CARRY4(*puVar1,(uint)param_1) || CARRY4(uVar7,(uint)(0x76 < bVar5));
  *puVar1 = uVar7 + (0x76 < bVar5);
  cVar6 = bVar5 - bVar14;
  *(undefined8 **)(uVar12 - 8) = param_1;
  *(char *)((longlong)param_1 + 0x50892051) =
       (*(char *)((longlong)param_1 + 0x50892051) - (char)param_1) -
       ((byte)(bVar5 + 0x89) < 0x89 || bVar5 < bVar14);
  pbVar2 = (byte *)((ulonglong)CONCAT31(uVar4,cVar6) - 0x76d7ae77);
  *pbVar2 = *pbVar2 | (byte)uVar3;
  *(undefined8 **)(uVar12 - 0x10) = param_1;
  uVar9 = (ulonglong)CONCAT31(uVar4,cVar6) & 0xffffffffffffff89;
  *(undefined8 **)(uVar12 - 0x18) = param_1;
  cVar6 = (char)uVar9 + '9';
  piVar10 = (int *)CONCAT71((int7)(uVar9 >> 8),cVar6);
  *piVar10 = *piVar10 + (int)piVar10;
  *(char *)piVar10 = (char)*piVar10 + cVar6;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  *(undefined4 *)(uVar13 - 4) = 0;
  *(undefined4 *)(in_FS_OFFSET + -0x3b7c377700000000) = *(undefined4 *)(uVar13 - 0xc);
  *(char *)(uVar13 - 0x3d) = *(char *)(uVar13 - 0x3d) + unaff_BL;
  *(ulonglong *)(uVar12 - 0x20) = uVar13;
  return;
}

