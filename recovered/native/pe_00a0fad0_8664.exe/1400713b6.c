/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400713b6 */

uint * FUN_1400713b6(uint *param_1,undefined8 param_2)

{
  uint local_28;
  uint uStack_24;
  undefined8 uStack_20;
  uint *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = param_1;
  FUN_140070576(param_2,&local_28);
  *local_18 = local_28;
  local_18[1] = uStack_24;
  local_18[2] = (uint)uStack_20;
  local_18[3] = uStack_20._4_4_;
  local_28 = local_28 & 0xffffff00;
  uStack_20 = 0;
  FUN_140057b90(&local_28);
  return local_18;
}

