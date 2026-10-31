/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014a86a */

void FUN_1014a86a(int *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[1] < 0) {
    iVar3 = FUN_100fa1fa(0);
    if (param_1[2] != 0) {
      FUN_1025b2d0(iVar3,param_1[2],*param_1 * 0x18);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = iVar3;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    *param_1 = 0;
    if (param_1[1] != 0) {
      iVar3 = param_1[2];
      iVar2 = 0;
      goto LAB_1014a905;
    }
  }
  iVar3 = FUN_100fa1fa(0xc0);
  if (param_1[2] != 0) {
    FUN_1025b2d0(iVar3,param_1[2],*param_1 * 0x18);
    FUN_100fa2cb(param_1[2]);
  }
  param_1[2] = iVar3;
  param_1[1] = 8;
  iVar2 = *param_1;
LAB_1014a905:
  *(undefined4 *)(iVar3 + iVar2 * 0x18) = 1;
  *(undefined1 *)(iVar3 + 4 + iVar2 * 0x18) = param_2;
  *(undefined1 *)(iVar3 + 5 + iVar2 * 0x18) = 0;
  puVar1 = (undefined4 *)(iVar3 + 8 + iVar2 * 0x18);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  *param_1 = *param_1 + 1;
  return;
}

