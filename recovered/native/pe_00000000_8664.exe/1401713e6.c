/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401713e6 */

undefined8 FUN_1401713e6(longlong param_1,longlong param_2)

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
    FUN_1401294ed(param_2,8);
  }
  uVar5 = *(uint *)(param_1 + 4);
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  iVar4 = (uint)*(byte *)(param_1 + 0xc) * 0x1000000;
  iVar3 = (uint)*(byte *)(param_1 + 0xd) * 0x10000;
  bVar1 = *(byte *)(param_1 + 0xe);
  bVar2 = *(byte *)(param_1 + 0xf);
  uVar8 = iVar3 + iVar4 | (uint)bVar1 << 8 | (uint)bVar2;
  if (((uVar5 < 0x10) || ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar5)) ||
     ((uVar5 - 0x10) / 0xc < uVar8)) {
    FUN_1401294ed(param_2,8);
  }
  if (uVar8 != 0) {
    iVar10 = 0;
    uVar5 = 0;
    do {
      uVar8 = *puVar6;
      uVar7 = puVar6[1];
      uVar9 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar8 = puVar6[2];
      if (uVar7 < uVar9) {
        FUN_1401294ed(param_2,8);
      }
      if ((iVar10 != 0) && (uVar9 <= uVar5)) {
        FUN_1401294ed(param_2,8);
      }
      if ((0 < *(int *)(param_2 + 0x110)) &&
         (*(uint *)(param_2 + 0x120) <=
          (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18))) {
        FUN_1401294ed(param_2,0x10);
      }
      iVar10 = iVar10 + 1;
      puVar6 = puVar6 + 3;
      uVar5 = uVar7;
    } while ((uint)CONCAT11(bVar1,bVar2) + iVar4 + iVar3 != iVar10);
  }
  return 0;
}

