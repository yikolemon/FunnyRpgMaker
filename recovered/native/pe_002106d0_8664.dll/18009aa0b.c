/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009aa0b */

undefined8 *
FUN_18009aa0b(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x70);
  puVar1[1] = 0x100000001;
  *puVar1 = std::_Ref_count_obj2<Command::Command>::vftable;
  FUN_18009b04e(puVar1 + 2,param_2,param_3,param_4,param_5);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

