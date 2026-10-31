/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012c2c6 */

int __fastcall FUN_1012c2c6(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_1[6];
  if (iVar2 == *param_1) {
    iVar4 = iVar2 + 1;
    iVar5 = param_1[1];
    if (iVar2 < iVar5) {
      iVar3 = param_1[2];
    }
    else {
      if (iVar5 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar5 / 2 + iVar5;
      }
      if (iVar5 <= iVar4) {
        iVar5 = iVar4;
      }
      iVar3 = FUN_100fa1fa(iVar5 << 4);
      if (param_1[2] != 0) {
        FUN_1025b2d0(iVar3,param_1[2],*param_1 << 4);
        FUN_100fa2cb(param_1[2]);
      }
      param_1[2] = iVar3;
      param_1[1] = iVar5;
      iVar4 = param_1[6] + 1;
    }
    *param_1 = iVar2 + 1;
  }
  else {
    iVar3 = param_1[2];
    iVar4 = *(int *)(iVar3 + iVar2 * 0x10);
  }
  param_1[6] = iVar4;
  puVar1 = (undefined4 *)(iVar3 + iVar2 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  param_1[7] = param_1[7] + 1;
  return iVar2 * 0x10 + param_1[2];
}

