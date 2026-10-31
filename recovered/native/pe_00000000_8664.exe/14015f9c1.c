/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015f9c1 */

short FUN_14015f9c1(longlong param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  
  puVar4 = *(ushort **)(param_1 + 0x18);
  uVar2 = puVar4[2];
  uVar6 = (*param_2 + 1 >> 8) - (uint)uVar2;
  uVar3 = *puVar4;
  uVar10 = (*param_2 + 1 & 0xff) - (uint)uVar3;
  uVar9 = (uint)puVar4[3] - (uint)uVar2;
  uVar1 = uVar9 + 1;
  sVar5 = 0;
  if ((int)uVar6 < 1) {
    uVar6 = 0;
  }
  if ((int)uVar10 < 1) {
    uVar10 = 0;
  }
  uVar7 = uVar6;
  if (uVar6 < uVar1) {
    uVar8 = ((uint)puVar4[1] - (uint)uVar3) + 1;
    iVar12 = uVar6 * uVar8;
    sVar5 = 0;
    uVar11 = uVar10;
    do {
      if (uVar11 < uVar8) {
        uVar10 = uVar11;
        do {
          sVar5 = *(short *)(*(longlong *)(puVar4 + 8) + (ulonglong)(iVar12 + uVar10) * 2);
          uVar7 = uVar6;
          if (sVar5 != -1) goto LAB_14015fa4d;
          uVar10 = uVar10 + 1;
        } while (uVar8 != uVar10);
        sVar5 = -1;
      }
      iVar12 = iVar12 + uVar8;
      uVar11 = 0;
      uVar10 = 0;
      bVar13 = uVar6 != uVar9;
      uVar6 = uVar6 + 1;
      uVar7 = uVar1;
    } while (bVar13);
  }
LAB_14015fa4d:
  *param_2 = uVar10 + uVar3 | (uVar7 + uVar2) * 0x100;
  return sVar5;
}

