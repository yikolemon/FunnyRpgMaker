/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140284826 */

undefined1 *
FUN_140284826(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_140284ece(param_1 + 0x10,1,param_3,param_4,param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  return param_1;
}

