/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180184d54 */

undefined4 * FUN_180184d54(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *param_3;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[4];
  *(undefined8 *)(param_1 + 8) = param_3[3];
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = uVar2;
  param_3[3] = 0;
  param_3[4] = 0xf;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}

