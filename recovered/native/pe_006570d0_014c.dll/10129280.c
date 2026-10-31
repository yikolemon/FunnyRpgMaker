/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10129280 */

void __thiscall FUN_10129280(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)param_1[1] < param_2) {
    uVar1 = FUN_100fa1fa(param_2);
    if (param_1[2] != 0) {
      FUN_1025b2d0(uVar1,param_1[2],*param_1);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = uVar1;
    param_1[1] = param_2;
  }
  return;
}

