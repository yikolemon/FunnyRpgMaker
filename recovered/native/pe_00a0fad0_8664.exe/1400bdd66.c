/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bdd66 */

longlong FUN_1400bdd66(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14004319a(param_1,param_2,0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  *(undefined1 *)(param_1 + 100) = 1;
  return param_1;
}

