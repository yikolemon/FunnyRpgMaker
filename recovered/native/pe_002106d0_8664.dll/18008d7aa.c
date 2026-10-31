/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008d7aa */

uint * FUN_18008d7aa(uint *param_1,undefined8 param_2)

{
  uint local_28;
  uint uStack_24;
  undefined8 uStack_20;
  uint *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = param_1;
  FUN_18008d49e(param_2,&local_28);
  *local_18 = local_28;
  local_18[1] = uStack_24;
  local_18[2] = (uint)uStack_20;
  local_18[3] = uStack_20._4_4_;
  local_28 = local_28 & 0xffffff00;
  uStack_20 = 0;
  FUN_18007ff6e(&local_28);
  return local_18;
}

