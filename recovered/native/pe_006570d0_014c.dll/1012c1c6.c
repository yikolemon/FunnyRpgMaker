/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012c1c6 */

void __thiscall FUN_1012c1c6(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[1] < param_2) {
    iVar1 = FUN_100fa1fa(param_2 << 4);
    if (param_1[2] != 0) {
      FUN_1025b2d0(iVar1,param_1[2],*param_1 << 4);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = iVar1;
    param_1[1] = param_2;
  }
  if (param_1[4] < param_2) {
    iVar1 = FUN_100fa1fa(param_2 * 8);
    if (param_1[5] != 0) {
      FUN_1025b2d0(iVar1,param_1[5],param_1[3] << 3);
      FUN_100fa2cb(param_1[5]);
    }
    param_1[5] = iVar1;
    param_1[4] = param_2;
  }
  return;
}

