/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014ae84 */

void FUN_1014ae84(int *param_1,undefined1 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
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
    iVar3 = FUN_100fa1fa(iVar4 * 0x18);
    if (param_1[2] != 0) {
      FUN_1025b2d0(iVar3,param_1[2],*param_1 * 0x18);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = iVar3;
    param_1[1] = iVar4;
    iVar2 = *param_1;
  }
  else {
    iVar3 = param_1[2];
  }
  uVar5 = param_7;
  uVar1 = param_6;
  if (0 < param_3) {
    uVar5 = param_5;
    param_5 = param_7;
    uVar1 = param_4;
    param_4 = param_6;
  }
  *(undefined4 *)(iVar3 + iVar2 * 0x18) = 2;
  *(undefined1 *)(iVar3 + 4 + iVar2 * 0x18) = param_2;
  *(char *)(iVar3 + 5 + iVar2 * 0x18) = (char)param_3;
  *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x18) = uVar5;
  *(undefined4 *)(iVar3 + 8 + iVar2 * 0x18) = uVar1;
  *(undefined4 *)(iVar3 + 0x14 + iVar2 * 0x18) = param_5;
  *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x18) = param_4;
  *param_1 = *param_1 + 1;
  return;
}

