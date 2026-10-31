/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004283d */

undefined8 * FUN_14004283d(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1400d3680(0x58);
  puVar1[1] = 0x100000001;
  *puVar1 = std::_Ref_count_obj2<std::filesystem::_Dir_enum_impl>::vftable;
  FUN_14004319a(puVar1 + 2,param_2,*param_3);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

