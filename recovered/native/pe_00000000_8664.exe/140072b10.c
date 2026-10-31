/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140072b10 */

undefined8 *
FUN_140072b10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_1401887b0(0x20);
  param_1[1] = lVar1;
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)*param_4;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  return param_1;
}

