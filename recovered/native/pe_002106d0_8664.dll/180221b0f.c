/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180221b0f */

undefined8 FUN_180221b0f(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  puVar6 = (uint *)(param_1 + 0x10);
  if (*(uint **)(param_2 + 0x108) < puVar6) {
    FUN_1801ca519(param_2,8);
  }
  uVar5 = *(uint *)(param_1 + 4);
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  iVar4 = (uint)*(byte *)(param_1 + 0xc) * 0x1000000;
  iVar3 = (uint)*(byte *)(param_1 + 0xd) * 0x10000;
  bVar1 = *(byte *)(param_1 + 0xe);
  bVar2 = *(byte *)(param_1 + 0xf);
  uVar9 = iVar3 + iVar4 | (uint)bVar1 << 8 | (uint)bVar2;
  if (((uVar5 < 0x10) || ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar5)) ||
     ((uVar5 - 0x10) / 0xc < uVar9)) {
    FUN_1801ca519(param_2,8);
  }
  if (uVar9 != 0) {
    iVar10 = 0;
    uVar5 = 0;
    do {
      uVar9 = *puVar6;
      uVar8 = puVar6[1];
      uVar7 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar9 = puVar6[2];
      if (uVar8 < uVar7) {
        FUN_1801ca519(param_2,8);
      }
      if ((iVar10 != 0) && (uVar7 <= uVar5)) {
        FUN_1801ca519(param_2,8);
      }
      if (0 < *(int *)(param_2 + 0x110)) {
        if ((*(uint *)(param_2 + 0x120) < uVar8 - uVar7) ||
           (*(uint *)(param_2 + 0x120) - (uVar8 - uVar7) <=
            (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18))) {
          FUN_1801ca519(param_2,0x10);
        }
      }
      iVar10 = iVar10 + 1;
      puVar6 = puVar6 + 3;
      uVar5 = uVar8;
    } while ((uint)CONCAT11(bVar1,bVar2) + iVar4 + iVar3 != iVar10);
  }
  return 0;
}

