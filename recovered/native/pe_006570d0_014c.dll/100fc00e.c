/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fc00e */

void __thiscall FUN_100fc00e(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  if ((int)param_1[5] < 0) {
    uVar1 = FUN_100fa1fa(0);
    if (param_1[6] != 0) {
      FUN_1025b2d0(uVar1,param_1[6],param_1[4] * 0xc);
      FUN_100fa2cb(param_1[6]);
    }
    param_1[6] = uVar1;
    param_1[5] = 0;
  }
  param_1[4] = 0;
  return;
}

