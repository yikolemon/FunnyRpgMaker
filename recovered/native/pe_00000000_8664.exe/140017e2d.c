/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140017e2d */

undefined8 * FUN_140017e2d(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1401887b0(0x128);
  puVar1[1] = 0x100000001;
  *puVar1 = std::_Ref_count_obj2<spdlog::logger>::vftable;
  FUN_140037943(puVar1 + 2,param_2,param_3);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

