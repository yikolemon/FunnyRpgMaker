/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fcd80 */

void FUN_100fcd80(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  puVar2 = (undefined4 *)(DAT_1039d74c + 0xe00 + param_1 * 0x10);
  local_24 = *puVar2;
  uStack_20 = puVar2[1];
  uStack_1c = puVar2[2];
  uStack_18 = puVar2[3];
  iVar6 = *(int *)(DAT_1039d74c + 0x1f74);
  if (iVar6 == *(int *)(DAT_1039d74c + 0x1f78)) {
    if (iVar6 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar6 / 2 + iVar6;
    }
    iVar8 = iVar6 + 1;
    if (iVar6 + 1 < iVar7) {
      iVar8 = iVar7;
    }
    iVar7 = FUN_100fa1fa(iVar8 * 0x14);
    if (*(int *)(iVar1 + 0x1f7c) != 0) {
      FUN_1025b2d0(iVar7,*(int *)(iVar1 + 0x1f7c),*(int *)(iVar1 + 0x1f74) * 0x14);
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x1f7c));
    }
    *(int *)(iVar1 + 0x1f7c) = iVar7;
    *(int *)(iVar1 + 0x1f78) = iVar8;
    iVar6 = *(int *)(iVar1 + 0x1f74);
  }
  else {
    iVar7 = *(int *)(DAT_1039d74c + 0x1f7c);
  }
  *(int *)(iVar7 + iVar6 * 0x14) = param_1;
  puVar2 = (undefined4 *)(iVar7 + 4 + iVar6 * 0x14);
  *puVar2 = local_24;
  puVar2[1] = uStack_20;
  puVar2[2] = uStack_1c;
  puVar2[3] = uStack_18;
  *(int *)(iVar1 + 0x1f74) = *(int *)(iVar1 + 0x1f74) + 1;
  if (*(int *)(iVar1 + 0x1f70) != param_1) {
    iVar1 = iVar1 + param_1 * 0x10;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined4 *)(iVar1 + 0xe00) = *param_2;
    *(undefined4 *)(iVar1 + 0xe04) = uVar3;
    *(undefined4 *)(iVar1 + 0xe08) = uVar4;
    *(undefined4 *)(iVar1 + 0xe0c) = uVar5;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

