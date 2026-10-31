/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14039fe72 */

void FUN_14039fe72(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar6;
  int iVar7;
  longlong lVar5;
  
  if (1 < param_1[0x23]) {
    FUN_1403a0192(param_1 + 0x22,param_1);
  }
  if (param_1[1] < 0) {
    uVar3 = FUN_14030fcc8(0);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1404b97c0(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x48);
      FUN_14030fda4(*(undefined8 *)(param_1 + 2));
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = 0;
  }
  *param_1 = 0;
  if (param_1[5] < 0) {
    uVar3 = FUN_14030fcc8(0);
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1404b97c0(uVar3,*(longlong *)(param_1 + 6),(longlong)param_1[4] * 2);
      FUN_14030fda4(*(undefined8 *)(param_1 + 6));
    }
    *(undefined8 *)(param_1 + 6) = uVar3;
    param_1[5] = 0;
  }
  param_1[4] = 0;
  if (param_1[9] < 0) {
    uVar3 = FUN_14030fcc8(0);
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_1404b97c0(uVar3,*(longlong *)(param_1 + 10),(longlong)param_1[8] * 0x14);
      FUN_14030fda4(*(undefined8 *)(param_1 + 10));
    }
    *(undefined8 *)(param_1 + 10) = uVar3;
    param_1[9] = 0;
  }
  param_1[8] = 0;
  param_1[0xc] = *(int *)(*(longlong *)(param_1 + 0xe) + 0x34);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (param_1[0x29] < 0) {
    uVar3 = FUN_14030fcc8(0);
    if (*(longlong *)(param_1 + 0x2a) != 0) {
      FUN_1404b97c0(uVar3,*(longlong *)(param_1 + 0x2a),(longlong)param_1[0x28] << 4);
      FUN_14030fda4(*(undefined8 *)(param_1 + 0x2a));
    }
    *(undefined8 *)(param_1 + 0x2a) = uVar3;
    param_1[0x29] = 0;
  }
  param_1[0x28] = 0;
  if (param_1[0x2d] < 0) {
    uVar3 = FUN_14030fcc8(0);
    if (*(longlong *)(param_1 + 0x2e) != 0) {
      FUN_1404b97c0(uVar3,*(longlong *)(param_1 + 0x2e),(longlong)param_1[0x2c] << 4);
      FUN_14030fda4(*(undefined8 *)(param_1 + 0x2e));
    }
    *(undefined8 *)(param_1 + 0x2e) = uVar3;
    param_1[0x2d] = 0;
  }
  param_1[0x2c] = 0;
  if (param_1[0x31] < 0) {
    uVar3 = FUN_14030fcc8(0);
    if (*(longlong *)(param_1 + 0x32) != 0) {
      FUN_1404b97c0(uVar3,*(longlong *)(param_1 + 0x32),(longlong)param_1[0x30]);
      FUN_14030fda4(*(undefined8 *)(param_1 + 0x32));
    }
    *(undefined8 *)(param_1 + 0x32) = uVar3;
    param_1[0x31] = 0;
  }
  param_1[0x30] = 0;
  if (param_1[0x15] < 0) {
    uVar3 = FUN_14030fcc8(0);
    if (*(longlong *)(param_1 + 0x16) != 0) {
      FUN_1404b97c0(uVar3,*(longlong *)(param_1 + 0x16),(longlong)param_1[0x14] << 3);
      FUN_14030fda4(*(undefined8 *)(param_1 + 0x16));
    }
    *(undefined8 *)(param_1 + 0x16) = uVar3;
    param_1[0x15] = 0;
  }
  param_1[0x14] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 1;
  iVar2 = *param_1;
  if (iVar2 == param_1[1]) {
    if (iVar2 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar2 / 2 + iVar2;
    }
    iVar7 = iVar2 + 1;
    if (iVar2 + 1 < iVar6) {
      iVar7 = iVar6;
    }
    lVar4 = FUN_14030fcc8((longlong)iVar7 * 0x48);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1404b97c0(lVar4,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x48);
      FUN_14030fda4(*(undefined8 *)(param_1 + 2));
    }
    *(longlong *)(param_1 + 2) = lVar4;
    param_1[1] = iVar7;
    iVar2 = *param_1;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 2);
  }
  lVar5 = (longlong)iVar2;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar5 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = 0;
  *param_1 = *param_1 + 1;
  param_1[0x34] = *(int *)(*(longlong *)(param_1 + 0xe) + 0x30);
  return;
}

