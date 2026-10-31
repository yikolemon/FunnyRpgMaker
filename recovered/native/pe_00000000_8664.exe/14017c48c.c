/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017c48c */

undefined8 FUN_14017c48c(longlong param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  
  iVar9 = FUN_14017c53a(param_2);
  bVar5 = *param_2;
  bVar6 = param_2[1];
  bVar7 = param_2[2];
  bVar8 = param_2[3];
  iVar9 = FUN_14017c38b(param_1,iVar9 + 1,param_3);
  if (iVar9 == 0) {
    puVar11 = *(uint **)(param_1 + 0x30);
    for (uVar13 = (uint)bVar7 << 8 | (uint)bVar6 << 0x10 | (uint)bVar5 << 0x18 | (uint)bVar8;
        uVar13 != 0; uVar13 = uVar13 - 1) {
      pbVar1 = param_2 + 4;
      pbVar2 = param_2 + 5;
      pbVar3 = param_2 + 6;
      pbVar4 = param_2 + 7;
      param_2 = param_2 + 4;
      uVar12 = (uint)*pbVar3 | (uint)*pbVar2 << 8 | (uint)*pbVar1 << 0x10;
      iVar9 = *pbVar4 + 1;
      do {
        *puVar11 = uVar12;
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *puVar11 = 0;
    uVar10 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

