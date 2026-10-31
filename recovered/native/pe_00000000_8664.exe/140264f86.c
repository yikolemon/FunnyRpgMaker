/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140264f86 */

undefined8 * FUN_140264f86(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140227884(param_1 + 1,0);
  *(undefined1 *)param_1 = 3;
  uVar1 = FUN_140255c4c(param_2);
  param_1[1] = uVar1;
  return param_1;
}

