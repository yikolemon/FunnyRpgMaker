/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aa958 */

undefined4 * FUN_1800aa958(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar6 = *(undefined8 *)(param_2 + 4);
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar6;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 7;
  *(undefined2 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = param_2[0xc];
  uVar3 = param_2[0xd];
  uVar4 = param_2[0xe];
  uVar5 = param_2[0xf];
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1800448ea(param_1 + 0x14,*(longlong *)(param_2 + 0x16) - *(longlong *)(param_2 + 0x14),
                param_2 + 0x14,param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  FUN_1800448ea(param_1 + 0x1a,*(longlong *)(param_2 + 0x1c) - *(longlong *)(param_2 + 0x1a),
                param_2 + 0x1a,param_2 + 0x1c);
  return param_1;
}

