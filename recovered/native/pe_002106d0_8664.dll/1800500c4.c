/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800500c4 */

undefined1 * FUN_1800500c4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  FUN_1800137c6(param_2);
  return param_1;
}

