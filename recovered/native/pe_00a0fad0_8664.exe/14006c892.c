/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006c892 */

undefined8 * FUN_14006c892(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140063f00(param_1 + 1,0);
  *(undefined1 *)param_1 = 3;
  uVar1 = FUN_14006b874(param_2);
  param_1[1] = uVar1;
  return param_1;
}

