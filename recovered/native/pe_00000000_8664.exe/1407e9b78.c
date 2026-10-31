/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e9b78 */

void FUN_1407e9b78(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  
  pbVar8 = (byte *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  iVar13 = *(int *)(pbVar8 + 0x28);
  uVar7 = *(uint *)(pbVar8 + 0x24);
  uVar14 = (ulonglong)*(uint *)(pbVar8 + 0x20);
  if (uVar7 == 0xffffffff) {
    uVar7 = *(uint *)((ulonglong)*(uint *)(uVar14 + 0x30) + 0x1c);
  }
  uVar3 = *(undefined4 *)(uVar14 + 0x290);
  if (iVar13 == -1) {
    iVar13 = *(int *)((ulonglong)*(uint *)(uVar14 + 0x30) + 0x20);
  }
  *pbVar8 = iVar13 <= (int)uVar7;
  iVar2 = *(int *)(uVar14 + 8);
  uVar6 = (int)CONCAT71((int7)((ulonglong)param_1 >> 8),(int)uVar7 < iVar13) + iVar2;
  *(undefined4 *)(pbVar8 + 8) = uVar3;
  uVar6 = (int)uVar6 >> 1 | uVar6;
  uVar6 = (int)uVar6 >> 2 | uVar6;
  uVar6 = (int)uVar6 >> 4 | uVar6;
  uVar6 = (int)uVar6 >> 8 | uVar6;
  *(int *)(pbVar8 + 4) = iVar13;
  bVar1 = *pbVar8;
  *(ulonglong *)(pbVar8 + -8) = (ulonglong)((int)uVar6 >> 0x10 | uVar6);
  *(ulonglong *)(pbVar8 + -0x10) = (ulonglong)(uVar7 << ((int)uVar7 < iVar13));
  pbVar8[-0x18] = 0xf9;
  pbVar8[-0x17] = 0x9b;
  pbVar8[-0x16] = 0x7e;
  pbVar8[-0x15] = 0x40;
  pbVar8[-0x14] = 1;
  pbVar8[-0x13] = 0;
  pbVar8[-0x12] = 0;
  pbVar8[-0x11] = 0;
  uVar3 = FUN_140753b3a();
  puVar9 = (undefined4 *)(ulonglong)((int)(pbVar8 + -0x10) + 8);
  *puVar9 = uVar3;
  uVar6 = iVar2 + *(int *)((ulonglong)(uint)puVar9[2] + 0x9c);
  uVar6 = (int)uVar6 >> 1 | uVar6;
  uVar6 = (int)uVar6 >> 2 | uVar6;
  uVar6 = (int)uVar6 >> 4 | uVar6;
  uVar6 = (int)uVar6 >> 8 | uVar6;
  *(ulonglong *)(puVar9 + -2) = (ulonglong)((int)uVar6 >> 0x10 | uVar6);
  *(ulonglong *)(puVar9 + -4) = (ulonglong)(uint)(iVar13 << (bVar1 & 0x1f));
  uVar14 = (ulonglong)(uint)puVar9[6];
  *(undefined8 *)(puVar9 + -6) = 0x1407e9c37;
  uVar6 = FUN_140753b3a();
  uVar10 = (ulonglong)((int)(puVar9 + -4) + 8);
  *(undefined8 *)(uVar10 - 8) = *(undefined8 *)(uVar14 + 0x14);
  *(undefined8 *)(uVar10 - 0x10) = *(undefined8 *)(uVar14 + 0xc);
  *(undefined8 *)(uVar10 - 0x18) = *(undefined8 *)(uVar10 - 8);
  *(undefined8 *)(uVar10 - 0x20) = 0x1407e9c4b;
  uVar4 = FUN_14077dc6a();
  uVar11 = (ulonglong)((int)(uVar10 - 0x18) + 0xc);
  *(undefined8 *)(uVar11 - 8) = *(undefined8 *)(uVar14 + 0x18);
  *(undefined8 *)(uVar11 - 0x10) = *(undefined8 *)(uVar14 + 0x10);
  *(ulonglong *)(uVar11 - 0x18) = (ulonglong)uVar6;
  *(undefined8 *)(uVar11 - 0x20) = 0x1407e9c5c;
  uVar5 = FUN_14077dc6a();
  uVar12 = (ulonglong)((int)(uVar11 - 0x18) + 0xc);
  if ((uVar4 != uVar7) || ((int)uVar5 != *(int *)(uVar12 + 4))) {
    *(undefined8 *)(uVar12 - 8) = uVar5;
    *(ulonglong *)(uVar12 - 0x10) = (ulonglong)uVar4;
    *(ulonglong *)(uVar12 - 0x18) = uVar14;
    *(undefined8 *)(uVar12 - 0x20) = 0x1407e9c76;
    FUN_1407e9598();
  }
  return;
}

