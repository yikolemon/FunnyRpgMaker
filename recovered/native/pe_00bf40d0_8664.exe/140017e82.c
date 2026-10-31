/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140017e82 */

undefined8 * FUN_140017e82(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = NamedPipe::vftable;
  param_1[1] = 0xffffffffffffffff;
  *param_1 = NamedPipeClient::vftable;
  FUN_1400038fa(param_1 + 2,param_2);
  return param_1;
}

