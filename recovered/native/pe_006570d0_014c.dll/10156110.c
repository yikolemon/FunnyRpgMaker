/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10156110 */

int __fastcall FUN_10156110(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[6];
  if (iVar1 == *param_1) {
    iVar2 = iVar1 + 1;
    iVar3 = param_1[1];
    if (iVar3 <= iVar1) {
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      if (iVar3 <= iVar2) {
        iVar3 = iVar2;
      }
      iVar2 = FUN_100fa1fa(iVar3 * 0xa4);
      if (param_1[2] != 0) {
        FUN_1025b2d0(iVar2,param_1[2],*param_1 * 0xa4);
        FUN_100fa2cb(param_1[2]);
      }
      param_1[2] = iVar2;
      param_1[1] = iVar3;
      iVar2 = param_1[6] + 1;
    }
    *param_1 = iVar1 + 1;
  }
  else {
    iVar2 = *(int *)(param_1[2] + iVar1 * 0xa4);
  }
  param_1[6] = iVar2;
  FUN_1014e202();
  param_1[7] = param_1[7] + 1;
  return iVar1 * 0xa4 + param_1[2];
}

