/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022d410 */

undefined8 * FUN_14022d410(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14044e540(1);
  param_1[3] = uVar1;
  uVar1 = FUN_14022d4ac(param_1 + 2);
  *param_1 = uVar1;
  uVar1 = FUN_14022d5bc(param_1 + 2);
  param_1[1] = uVar1;
  return param_1;
}

