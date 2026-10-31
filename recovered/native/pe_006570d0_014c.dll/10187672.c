/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10187672 */

void __fastcall FUN_10187672(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (1 < param_1[0x1d]) {
    FUN_10187968(param_1);
  }
  if (param_1[1] < 0) {
    iVar2 = FUN_100fa1fa(0);
    if (param_1[2] != 0) {
      FUN_1025b2d0(iVar2,param_1[2],*param_1 << 6);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = iVar2;
    param_1[1] = 0;
  }
  *param_1 = 0;
  if (param_1[4] < 0) {
    iVar2 = FUN_100fa1fa(0);
    if (param_1[5] != 0) {
      FUN_1025b2d0(iVar2,param_1[5],param_1[3] * 2);
      FUN_100fa2cb(param_1[5]);
    }
    param_1[5] = iVar2;
    param_1[4] = 0;
  }
  param_1[3] = 0;
  if (param_1[7] < 0) {
    iVar2 = FUN_100fa1fa(0);
    if (param_1[8] != 0) {
      FUN_1025b2d0(iVar2,param_1[8],param_1[6] * 0x14);
      FUN_100fa2cb(param_1[8]);
    }
    param_1[8] = iVar2;
    param_1[7] = 0;
  }
  param_1[6] = 0;
  param_1[9] = *(int *)(param_1[0xb] + 0x28);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_1[0x22] < 0) {
    iVar2 = FUN_100fa1fa(0);
    if (param_1[0x23] != 0) {
      FUN_1025b2d0(iVar2,param_1[0x23],param_1[0x21] << 4);
      FUN_100fa2cb(param_1[0x23]);
    }
    param_1[0x23] = iVar2;
    param_1[0x22] = 0;
  }
  param_1[0x21] = 0;
  if (param_1[0x25] < 0) {
    iVar2 = FUN_100fa1fa(0);
    if (param_1[0x26] != 0) {
      FUN_1025b2d0(iVar2,param_1[0x26],param_1[0x24] << 4);
      FUN_100fa2cb(param_1[0x26]);
    }
    param_1[0x26] = iVar2;
    param_1[0x25] = 0;
  }
  param_1[0x24] = 0;
  if (param_1[0x28] < 0) {
    iVar2 = FUN_100fa1fa(0);
    if (param_1[0x29] != 0) {
      FUN_1025b2d0(iVar2,param_1[0x29],param_1[0x27]);
      FUN_100fa2cb(param_1[0x29]);
    }
    param_1[0x29] = iVar2;
    param_1[0x28] = 0;
  }
  param_1[0x27] = 0;
  if (param_1[0xf] < 0) {
    iVar2 = FUN_100fa1fa(0);
    if (param_1[0x10] != 0) {
      FUN_1025b2d0(iVar2,param_1[0x10],param_1[0xe] << 3);
      FUN_100fa2cb(param_1[0x10]);
    }
    param_1[0x10] = iVar2;
    param_1[0xf] = 0;
  }
  param_1[0xe] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 1;
  iVar2 = *param_1;
  if (iVar2 == param_1[1]) {
    if (iVar2 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar2 / 2 + iVar2;
    }
    iVar4 = iVar2 + 1;
    if (iVar2 + 1 < iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = FUN_100fa1fa(iVar4 << 6);
    if (param_1[2] != 0) {
      FUN_1025b2d0(iVar3,param_1[2],*param_1 << 6);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = iVar3;
    param_1[1] = iVar4;
    iVar2 = *param_1;
  }
  else {
    iVar3 = param_1[2];
  }
  iVar2 = iVar2 * 0x40;
  puVar1 = (undefined4 *)(iVar3 + 0x30 + iVar2);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1 = (undefined4 *)(iVar3 + 0x20 + iVar2);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1 = (undefined4 *)(iVar3 + 0x10 + iVar2);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1 = (undefined4 *)(iVar3 + iVar2);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *param_1 = *param_1 + 1;
  param_1[0x2a] = *(int *)(param_1[0xb] + 0x24);
  return;
}

