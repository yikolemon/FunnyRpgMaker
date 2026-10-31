/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fce8e */

void FUN_100fce8e(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar6 = DAT_1039d74c;
  iVar8 = *(int *)(DAT_1039d74c + 0x1f74);
  if (*(int *)(DAT_1039d74c + 0x1f74) < param_1) {
    FUN_100fcef5("Calling PopStyleColor() too many times!");
    param_1 = *(int *)(iVar6 + 0x1f74);
    iVar8 = param_1;
  }
  if (0 < param_1) {
    uVar7 = param_1 + 1;
    do {
      puVar2 = (undefined4 *)(*(int *)(iVar6 + 0x1f7c) + -0x10 + iVar8 * 0x14);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)
               (iVar6 + 0xe00 + *(int *)(*(int *)(iVar6 + 0x1f7c) + -0x14 + iVar8 * 0x14) * 0x10);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      iVar8 = *(int *)(iVar6 + 0x1f74) + -1;
      *(int *)(iVar6 + 0x1f74) = iVar8;
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  return;
}

