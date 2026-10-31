/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140018a59 */

undefined8 * FUN_140018a59(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1400863a0(0x50);
  puVar1[1] = 0x100000001;
  *puVar1 = std::_Ref_count_obj2<NamedPipeServer>::vftable;
  FUN_140018c3c(puVar1 + 2,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

