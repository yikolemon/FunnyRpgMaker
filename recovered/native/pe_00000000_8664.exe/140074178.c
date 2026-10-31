/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140074178 */

void FUN_140074178(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_58 = *param_1;
  uStack_50 = param_1[1];
  uVar1 = *param_1;
  param_1[1] = 0;
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *param_1 = *param_2;
  local_38 = uVar2;
  if (param_1 != param_2) {
    FUN_1400022f6(param_1 + 1);
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *param_2 = uVar1;
  if (param_2 != &local_58) {
    FUN_1400022f6(param_2 + 1);
    param_2[1] = uStack_50;
    param_2[2] = local_48;
    param_2[3] = uStack_40;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uVar2 = local_38;
  }
  *(undefined4 *)(param_2 + 4) = uVar2;
  FUN_1400022f6(&uStack_50);
  return;
}

