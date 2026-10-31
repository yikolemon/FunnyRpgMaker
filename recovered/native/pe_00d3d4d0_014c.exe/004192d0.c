/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004192d0 */

undefined4 * __cdecl FUN_004192d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_0041a130;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = (undefined4 *)FUN_0047f230(0x34);
  local_24[1] = 1;
  local_24[2] = 1;
  *local_24 = std::_Ref_count_obj2<NamedPipeServer>::vftable;
  local_28 = local_24 + 3;
  local_14 = 0;
  FUN_004194e0(local_28,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = local_28;
  param_1[1] = local_24;
  ExceptionList = local_1c;
  return param_1;
}

