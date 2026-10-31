/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140125600 */

undefined8 * FUN_140125600(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_3 + 0xc0);
  uVar2 = *(undefined8 *)(param_3 + 200);
  uVar3 = *(undefined8 *)(param_3 + 0xd0);
  uVar4 = *(undefined8 *)(param_3 + 0xd8);
  uVar5 = *(undefined8 *)(param_3 + 0xe8);
  param_2[4] = *(undefined8 *)(param_3 + 0xe0);
  param_2[5] = uVar5;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return param_2;
}

