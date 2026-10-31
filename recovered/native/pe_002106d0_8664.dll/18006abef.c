/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006abef */

undefined8 * FUN_18006abef(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x328);
  puVar1[1] = 0x100000001;
  *puVar1 = std::_Ref_count_obj2<WolfRPG>::vftable;
  FUN_18006dd4c(puVar1 + 2,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

