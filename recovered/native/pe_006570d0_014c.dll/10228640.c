/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10228640 */

undefined4 * __thiscall FUN_10228640(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_c = param_2;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  _local_8 = CONCAT31((int3)((uint)param_1 >> 8),1);
  FUN_10258fb0(&local_c,param_1 + 1);
  *param_1 = std::length_error::vftable;
  return param_1;
}

