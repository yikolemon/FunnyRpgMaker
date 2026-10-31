/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009be44 */

undefined8 *
FUN_14009be44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1400d3680(0x70);
  puVar1[1] = 0x100000001;
  *puVar1 = std::_Ref_count_obj2<Command::CommandSpecialClasses::ProFeature>::vftable;
  FUN_14009f338(puVar1 + 2,param_2,param_3,param_4,param_5);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

