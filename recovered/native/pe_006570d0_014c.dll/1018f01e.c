/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018f01e */

int __thiscall FUN_1018f01e(int param_1,undefined4 *param_2)

{
  int iVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_20;
  
  if (*(int *)(param_1 + 0x290) == 0) {
    FUN_1018f313(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (*(char *)((int)param_2 + 0x31) == '\0') {
    local_20 = FUN_100fa1fa(0x3c);
    FUN_1018f402();
    iVar4 = *(int *)(param_1 + 0x280);
    *(int *)(param_1 + 0x280) = iVar4 + 1;
    *(int *)(local_20 + 0x10) = iVar4;
    *(undefined4 *)(local_20 + 8) = param_2[0x1b];
    *(undefined4 *)(local_20 + 0x14) = param_2[0xe];
    *(undefined4 *)(local_20 + 0xc) = param_2[0x19];
    iVar4 = *(int *)(param_1 + 0x54);
    if (iVar4 == *(int *)(param_1 + 0x58)) {
      if (iVar4 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar4 / 2 + iVar4;
      }
      iVar7 = iVar4 + 1;
      if (iVar4 + 1 < iVar5) {
        iVar7 = iVar5;
      }
      iVar5 = FUN_100fa1fa(iVar7 * 4);
      if (*(int *)(param_1 + 0x5c) != 0) {
        FUN_1025b2d0(iVar5,*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54) << 2);
        FUN_100fa2cb(*(undefined4 *)(param_1 + 0x5c));
      }
      *(int *)(param_1 + 0x5c) = iVar5;
      *(int *)(param_1 + 0x58) = iVar7;
      iVar4 = *(int *)(param_1 + 0x54);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x5c);
    }
    *(int *)(iVar5 + iVar4 * 4) = local_20;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  else {
    local_20 = param_2[0x1c];
    if (local_20 == 0) {
      local_20 = *(int *)(*(int *)(param_1 + 0x5c) + -4 + iVar1 * 4);
    }
    FUN_1018f4da(param_1,local_20,0);
  }
  iVar4 = *(int *)(param_1 + 0x60);
  if (iVar4 == *(int *)(param_1 + 100)) {
    if (iVar4 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar4 / 2 + iVar4;
    }
    iVar7 = iVar4 + 1;
    if (iVar4 + 1 < iVar5) {
      iVar7 = iVar5;
    }
    iVar5 = FUN_100fa1fa(iVar7 << 7);
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1025b2d0(iVar5,*(int *)(param_1 + 0x68),*(int *)(param_1 + 0x60) << 7);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x68));
    }
    *(int *)(param_1 + 0x68) = iVar5;
    *(int *)(param_1 + 100) = iVar7;
    iVar4 = *(int *)(param_1 + 0x60);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x68);
  }
  puVar9 = (undefined4 *)(iVar4 * 0x80 + iVar5);
  for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *param_2;
    param_2 = param_2 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x68);
  iVar7 = *(int *)(param_1 + 0x60) + 1;
  *(int *)(param_1 + 0x60) = iVar7;
  iVar7 = iVar7 * 0x80;
  iVar4 = iVar5 + iVar7;
  if (*(int *)(iVar5 + -0x10 + iVar7) == 0) {
    *(int *)(iVar5 + iVar7 + -0x10) = local_20;
  }
  iVar7 = iVar7 + iVar5 + -0x80;
  iVar5 = *(int *)(local_20 + 0x18);
  if (iVar5 == *(int *)(local_20 + 0x1c)) {
    if (iVar5 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar5 / 2 + iVar5;
    }
    iVar10 = iVar5 + 1;
    if (iVar5 + 1 < iVar8) {
      iVar10 = iVar8;
    }
    iVar8 = FUN_100fa1fa(iVar10 * 4);
    if (*(int *)(local_20 + 0x20) != 0) {
      FUN_1025b2d0(iVar8,*(int *)(local_20 + 0x20),*(int *)(local_20 + 0x18) << 2);
      FUN_100fa2cb(*(undefined4 *)(local_20 + 0x20));
    }
    *(int *)(local_20 + 0x20) = iVar8;
    *(int *)(local_20 + 0x1c) = iVar10;
    iVar5 = *(int *)(local_20 + 0x18);
  }
  else {
    iVar8 = *(int *)(local_20 + 0x20);
  }
  *(int *)(iVar8 + iVar5 * 4) = iVar7;
  *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
  FUN_1018f55d(param_1);
  psVar2 = *(short **)(iVar4 + -0x40);
  if (psVar2 != (short *)0x0) {
    if (*psVar2 == 0) {
      iVar5 = 2;
    }
    else {
      iVar5 = FUN_10271d80(psVar2 + 1);
      iVar5 = iVar5 * 2 + 4;
    }
    uVar6 = FUN_100fa240(psVar2,iVar5);
    *(undefined4 *)(iVar4 + -0x40) = uVar6;
  }
  iVar5 = param_1;
  cVar3 = FUN_1018f679(param_1,iVar7);
  if (cVar3 == '\0') {
    FUN_1018e6b7(iVar5,iVar7);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + -1;
    iVar5 = 0;
    if (*(char *)(iVar4 + -0x4f) == '\0') {
      FUN_1018f6a6(local_20);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
    }
  }
  else {
    FUN_1018f6b9(param_1,local_20,iVar7);
    iVar5 = local_20;
    if (iVar1 == 0) {
      FUN_1018e4d8(param_1,0,local_20);
    }
  }
  return iVar5;
}

