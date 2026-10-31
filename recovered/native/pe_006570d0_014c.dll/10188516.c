/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10188516 */

void __thiscall FUN_10188516(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((0xffff < (uint)(param_1[10] + param_3)) && ((*(byte *)(param_1 + 9) & 8) != 0)) {
    param_1[0x1a] = param_1[6];
    FUN_101880ca();
  }
  piVar1 = (int *)(param_1[2] + -0x18 + *param_1 * 0x40);
  *piVar1 = *piVar1 + param_2;
  iVar2 = param_1[6];
  iVar4 = param_1[7];
  param_3 = param_3 + iVar2;
  if (iVar4 < param_3) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar4 <= param_3) {
      iVar4 = param_3;
    }
    iVar3 = FUN_100fa1fa(iVar4 * 0x14);
    if (param_1[8] != 0) {
      FUN_1025b2d0(iVar3,param_1[8],param_1[6] * 0x14);
      FUN_100fa2cb(param_1[8]);
    }
    param_1[8] = iVar3;
    param_1[7] = iVar4;
  }
  else {
    iVar3 = param_1[8];
  }
  param_1[6] = param_3;
  param_1[0xc] = iVar3 + iVar2 * 0x14;
  iVar2 = param_1[3];
  iVar4 = param_1[4];
  param_2 = param_2 + iVar2;
  if (iVar4 < param_2) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar4 <= param_2) {
      iVar4 = param_2;
    }
    iVar3 = FUN_100fa1fa(iVar4 * 2);
    if (param_1[5] != 0) {
      FUN_1025b2d0(iVar3,param_1[5],param_1[3] * 2);
      FUN_100fa2cb(param_1[5]);
    }
    param_1[5] = iVar3;
    param_1[4] = iVar4;
  }
  else {
    iVar3 = param_1[5];
  }
  param_1[3] = param_2;
  param_1[0xd] = iVar3 + iVar2 * 2;
  return;
}

