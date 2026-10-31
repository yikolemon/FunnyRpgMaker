/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fcc65 */

void FUN_100fcc65(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  puVar2 = (undefined4 *)(DAT_1039d74c + 0xe00 + param_1 * 0x10);
  local_24 = *puVar2;
  uStack_20 = puVar2[1];
  uStack_1c = puVar2[2];
  uStack_18 = puVar2[3];
  iVar3 = *(int *)(DAT_1039d74c + 0x1f74);
  if (iVar3 == *(int *)(DAT_1039d74c + 0x1f78)) {
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    iVar5 = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      iVar5 = iVar4;
    }
    iVar4 = FUN_100fa1fa(iVar5 * 0x14);
    if (*(int *)(iVar1 + 0x1f7c) != 0) {
      FUN_1025b2d0(iVar4,*(int *)(iVar1 + 0x1f7c),*(int *)(iVar1 + 0x1f74) * 0x14);
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x1f7c));
    }
    *(int *)(iVar1 + 0x1f7c) = iVar4;
    *(int *)(iVar1 + 0x1f78) = iVar5;
    iVar3 = *(int *)(iVar1 + 0x1f74);
  }
  else {
    iVar4 = *(int *)(DAT_1039d74c + 0x1f7c);
  }
  *(int *)(iVar4 + iVar3 * 0x14) = param_1;
  puVar2 = (undefined4 *)(iVar4 + 4 + iVar3 * 0x14);
  *puVar2 = local_24;
  puVar2[1] = uStack_20;
  puVar2[2] = uStack_1c;
  puVar2[3] = uStack_18;
  *(int *)(iVar1 + 0x1f74) = *(int *)(iVar1 + 0x1f74) + 1;
  if (*(int *)(iVar1 + 0x1f70) != param_1) {
    iVar1 = iVar1 + param_1 * 0x10;
    FUN_100faced(&local_34,param_2);
    *(undefined4 *)(iVar1 + 0xe00) = local_34;
    *(undefined4 *)(iVar1 + 0xe04) = uStack_30;
    *(undefined4 *)(iVar1 + 0xe08) = uStack_2c;
    *(undefined4 *)(iVar1 + 0xe0c) = uStack_28;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_34)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

