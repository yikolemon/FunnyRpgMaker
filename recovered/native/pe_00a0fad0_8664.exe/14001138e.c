/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001138e */

undefined8 * FUN_14001138e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (undefined8 *)FUN_1400d3680(0x18);
  puVar1[1] = 0x100000001;
  *puVar1 = std::_Ref_count<CLI::Formatter>::vftable;
  puVar1[2] = param_2;
  *param_1 = param_2;
  param_1[1] = puVar1;
  return param_1;
}

