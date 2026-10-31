/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140137801 */

undefined4 * FUN_140137801(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140137927(param_2);
  *param_1 = uVar1;
  uVar2 = FUN_140137932(param_2);
  *(undefined8 *)(param_1 + 2) = uVar2;
  uVar2 = FUN_140137937(param_2);
  *(undefined8 *)(param_1 + 4) = uVar2;
  param_1[6] = 1;
  return param_1;
}

