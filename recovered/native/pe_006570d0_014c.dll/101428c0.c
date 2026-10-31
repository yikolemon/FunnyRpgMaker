/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101428c0 */

void __thiscall FUN_101428c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 < param_2) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    iVar1 = FUN_100fa1fa(iVar2);
    if (param_1[2] != 0) {
      FUN_1025b2d0(iVar1,param_1[2],*param_1);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = iVar1;
    param_1[1] = iVar2;
  }
  *param_1 = param_2;
  return;
}

