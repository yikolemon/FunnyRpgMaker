/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005783a */

undefined1 * FUN_14005783a(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  FUN_1400578a6(param_2);
  return param_1;
}

