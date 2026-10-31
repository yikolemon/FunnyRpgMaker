/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140125552 */

undefined8 * FUN_140125552(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_3 + 0x90);
  uVar2 = *(undefined8 *)(param_3 + 0x98);
  uVar3 = *(undefined8 *)(param_3 + 0xa0);
  uVar4 = *(undefined8 *)(param_3 + 0xa8);
  uVar5 = *(undefined8 *)(param_3 + 0xb8);
  param_2[4] = *(undefined8 *)(param_3 + 0xb0);
  param_2[5] = uVar5;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return param_2;
}

