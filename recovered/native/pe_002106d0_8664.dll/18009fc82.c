/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009fc82 */

undefined8 *
FUN_18009fc82(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_2[2];
  param_2[2] = 0;
  uVar6 = *param_2;
  uVar7 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = uVar1;
  uVar1 = param_2[5];
  param_2[5] = 0;
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  param_1[5] = uVar1;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  FUN_18006d722(param_1 + 7,param_2 + 7,param_3,param_4,param_1 + 3,param_1 + 7);
  FUN_18006d722(param_1 + 0xb,param_2 + 0xb);
  return param_1;
}

