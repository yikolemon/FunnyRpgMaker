/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021c242 */

undefined4 __fastcall FUN_1021c242(int param_1,byte *param_2,undefined4 param_3)

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
  undefined4 uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  
  FUN_1021c2d7();
  bVar5 = *param_2;
  bVar6 = param_2[1];
  bVar7 = param_2[2];
  bVar8 = param_2[3];
  iVar9 = FUN_1021c17a(param_3);
  uVar10 = 0;
  if (iVar9 == 0) {
    puVar11 = *(uint **)(param_1 + 0x20);
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
    uVar10 = *(undefined4 *)(param_1 + 0x20);
  }
  return uVar10;
}

