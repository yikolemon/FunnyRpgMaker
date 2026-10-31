/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f4eff */

undefined8 * FUN_1800f4eff(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x60);
  puVar1[1] = 0x100000001;
  *puVar1 = std::_Ref_count_obj2<std::mutex>::vftable;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0xffffffff;
  *(undefined4 *)(puVar1 + 2) = 2;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

