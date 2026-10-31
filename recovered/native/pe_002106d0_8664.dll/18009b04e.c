/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009b04e */

undefined8 *
FUN_18009b04e(undefined8 *param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
             undefined1 *param_5)

{
  undefined8 *puVar1;
  
  *param_1 = Command::Command::vftable;
  puVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_18009c334(puVar1,param_3[1] - *param_3 >> 2,param_3,param_3 + 1,puVar1);
  *(undefined4 *)(param_1 + 4) = *param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_18006dbd0(param_1 + 5,param_4[1] - *param_4 >> 5,param_4,param_4 + 1,puVar1,param_1 + 5);
  *(undefined1 *)(param_1 + 8) = *param_5;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}

