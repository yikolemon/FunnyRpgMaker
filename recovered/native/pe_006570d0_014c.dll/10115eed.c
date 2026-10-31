/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115eed */

void FUN_10115eed(int param_1,byte param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  iVar4 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar5 = *(int *)(DAT_1039d74c + 0x1fc8);
  if ((char)param_2 < '\0') {
    cVar3 = FUN_10103f84(0,0x400);
    if (cVar3 != '\0') goto LAB_101160dc;
  }
  local_2c = *(undefined4 *)(iVar2 + 0x2048);
  local_38 = *(undefined4 *)(iVar2 + 4);
  local_28 = *(undefined4 *)(*(int *)(iVar4 + 0x140) + -4 + *(int *)(iVar4 + 0x138) * 4);
  FUN_10116108();
  local_34 = local_18;
  local_20 = local_18;
  local_30 = local_1c;
  local_24 = local_1c;
  cVar3 = FUN_10103c30((undefined4 *)(iVar2 + 0xe4));
  puVar8 = &local_24;
  if (cVar3 != '\0') {
    puVar8 = (undefined4 *)(iVar2 + 0xe4);
  }
  uVar7 = *puVar8;
  uVar1 = puVar8[1];
  if ((*(byte *)(iVar2 + 0x27b4) & 8) != 0) {
    FUN_100f99e6("[popup] OpenPopupEx(0x%08X)\n",param_1);
  }
  iVar4 = *(int *)(iVar2 + 0x1fbc);
  if (iVar5 < iVar4) {
    if ((*(int *)(*(int *)(iVar2 + 0x1fc4) + iVar5 * 0x28) == param_1) &&
       ((iVar4 = *(int *)(iVar2 + 0x1fc4) + iVar5 * 0x28, (param_2 & 0x20) != 0 ||
        (*(int *)(iVar4 + 0x10) == *(int *)(iVar2 + 4) + -1)))) {
      *(undefined4 *)(iVar4 + 0x10) = local_38;
      goto LAB_101160dc;
    }
    FUN_1011630c(iVar5,1);
    iVar4 = *(int *)(iVar2 + 0x1fbc);
  }
  if (iVar4 == *(int *)(iVar2 + 0x1fc0)) {
    if (iVar4 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar4 / 2 + iVar4;
    }
    iVar6 = iVar4 + 1;
    if (iVar4 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    local_3c = uVar7;
    iVar5 = FUN_100fa1fa(iVar6 * 0x28);
    if (*(int *)(iVar2 + 0x1fc4) != 0) {
      FUN_1025b2d0(iVar5,*(int *)(iVar2 + 0x1fc4),*(int *)(iVar2 + 0x1fbc) * 0x28);
      FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x1fc4));
    }
    *(int *)(iVar2 + 0x1fc4) = iVar5;
    *(int *)(iVar2 + 0x1fc0) = iVar6;
    iVar4 = *(int *)(iVar2 + 0x1fbc);
    uVar7 = local_3c;
  }
  else {
    iVar5 = *(int *)(iVar2 + 0x1fc4);
  }
  *(int *)(iVar5 + iVar4 * 0x28) = param_1;
  *(undefined4 *)(iVar5 + 4 + iVar4 * 0x28) = 0;
  *(undefined4 *)(iVar5 + 8 + iVar4 * 0x28) = local_2c;
  *(undefined4 *)(iVar5 + 0xc + iVar4 * 0x28) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x10 + iVar4 * 0x28) = local_38;
  *(undefined4 *)(iVar5 + 0x14 + iVar4 * 0x28) = local_28;
  *(undefined4 *)(iVar5 + 0x1c + iVar4 * 0x28) = local_34;
  *(undefined4 *)(iVar5 + 0x18 + iVar4 * 0x28) = local_30;
  *(undefined4 *)(iVar5 + 0x24 + iVar4 * 0x28) = uVar1;
  *(undefined4 *)(iVar5 + 0x20 + iVar4 * 0x28) = uVar7;
  *(int *)(iVar2 + 0x1fbc) = *(int *)(iVar2 + 0x1fbc) + 1;
LAB_101160dc:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_3c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

