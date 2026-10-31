/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140040aba */

undefined8 *
FUN_140040aba(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = *param_2;
  FUN_14003f708(param_1 + 1,param_3,param_3,param_4,param_1 + 1,0xfffffffffffffffe);
  param_1[5] = param_4;
  return param_1;
}

