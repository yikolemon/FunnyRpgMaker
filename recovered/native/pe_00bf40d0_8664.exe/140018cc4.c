/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140018cc4 */

undefined8 * FUN_140018cc4(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  *param_1 = NamedPipe::vftable;
  param_1[1] = 0xffffffffffffffff;
  *param_1 = NamedPipeServer::vftable;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1400038fa(param_1 + 3,param_2);
  *(undefined4 *)(param_1 + 7) = param_3;
  return param_1;
}

