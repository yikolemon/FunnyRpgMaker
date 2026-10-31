/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10117e47 */

undefined4 FUN_10117e47(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar6 = DAT_1039d74c;
  if ((((*(char *)(DAT_1039d74c + 0x2250) == '\x01') &&
       ((*(uint *)(DAT_1039d74c + 0x1e88) & 1) != 0)) && (*(int *)(DAT_1039d74c + 0x14d4) != 0)) &&
     ((iVar2 = *(int *)(DAT_1039d74c + 0x14cc),
      *(int *)(iVar2 + 0x3b0) == *(int *)(*(int *)(DAT_1039d74c + 0x14d4) + 0x3b0) &&
      (*(char *)(iVar2 + 0xfe) == '\0')))) {
    iVar1 = DAT_1039d74c + (*(uint *)(DAT_1039d74c + 0x1e88) & 2) * 0x10;
    iVar7 = *(int *)(DAT_1039d74c + 0x1e80);
    if (iVar7 == 0) {
      iVar7 = FUN_10113192((undefined4 *)(iVar1 + 0x1e8c));
      FUN_10103c09(iVar7);
    }
    if (*(int *)(iVar6 + 0x2268) != iVar7) {
      uVar3 = *(undefined4 *)(iVar1 + 0x1e90);
      uVar4 = *(undefined4 *)(iVar1 + 0x1e94);
      uVar5 = *(undefined4 *)(iVar1 + 0x1e98);
      *(undefined4 *)(iVar6 + 0x2298) = *(undefined4 *)(iVar1 + 0x1e8c);
      *(undefined4 *)(iVar6 + 0x229c) = uVar3;
      *(undefined4 *)(iVar6 + 0x22a0) = uVar4;
      *(undefined4 *)(iVar6 + 0x22a4) = uVar5;
      puVar8 = (undefined4 *)(iVar2 + 0x28c);
      if ((*(uint *)(iVar6 + 0x1e88) >> 9 & 1) != 0) {
        puVar8 = (undefined4 *)(iVar6 + 0x1ebc);
      }
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      *(undefined4 *)(iVar6 + 0x22a8) = *puVar8;
      *(undefined4 *)(iVar6 + 0x22ac) = uVar3;
      *(undefined4 *)(iVar6 + 0x22b0) = uVar4;
      *(undefined4 *)(iVar6 + 0x22b4) = uVar5;
      *(int *)(iVar6 + 0x22b8) = iVar7;
      *(undefined1 *)(iVar6 + 0x2252) = 1;
      return CONCAT31((int3)((uint)(iVar6 + 0x1ebc) >> 8),1);
    }
  }
  return 0;
}

