/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d21cb */

void FUN_100d21cb(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  *param_1 = 0xc000000830000000;
  param_1[1] = uVar1;
  uVar2 = param_3[4];
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  *(undefined4 **)(param_1 + 2) = param_3;
  *(undefined4 *)((int)param_1 + 0x14) = uVar2;
  return;
}

