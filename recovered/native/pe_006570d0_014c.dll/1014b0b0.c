/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014b0b0 */

void __fastcall FUN_1014b0b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[4] = 1;
  if ((int)param_1[6] < 0) {
    uVar1 = FUN_100fa1fa(0);
    if (param_1[7] != 0) {
      FUN_1025b2d0(uVar1,param_1[7],param_1[5] << 3);
      FUN_100fa2cb(param_1[7]);
    }
    param_1[7] = uVar1;
    param_1[6] = 0;
  }
  param_1[5] = 0;
  return;
}

