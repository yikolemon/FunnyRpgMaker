/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b0ac1 */

undefined8 *
FUN_1800b0ac1(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  uVar7 = param_2[1];
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar1 = param_2[6];
  param_2[6] = 0;
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 5);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  param_1[6] = uVar1;
  FUN_1800b0bca(param_1 + 7,param_2 + 7,uVar2,param_4,param_1 + 7,param_1 + 4,param_1,
                0xfffffffffffffffe);
  return param_1;
}

