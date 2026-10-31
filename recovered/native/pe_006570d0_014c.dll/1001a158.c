/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001a158 */

void FUN_1001a158(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  return;
}

