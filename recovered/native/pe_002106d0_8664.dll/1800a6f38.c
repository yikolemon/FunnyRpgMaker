/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a6f38 */

longlong FUN_1800a6f38(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18006c134(param_1,param_2,0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  *(undefined1 *)(param_1 + 100) = 1;
  return param_1;
}

