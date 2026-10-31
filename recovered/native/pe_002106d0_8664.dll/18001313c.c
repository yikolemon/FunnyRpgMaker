/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001313c */

undefined8 * FUN_18001313c(undefined8 *param_1)

{
  *param_1 = NamedPipe::vftable;
  param_1[1] = 0xffffffffffffffff;
  *param_1 = NamedPipeClient::vftable;
  FUN_180003216();
  return param_1;
}

