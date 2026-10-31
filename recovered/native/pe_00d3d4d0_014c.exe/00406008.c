/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00406008 */

undefined4 * FUN_00406008(uint *param_1,undefined4 *param_2)

{
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_004070e0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_00406288(*param_2,(int *)param_2[1],param_1);
  *local_20 = std::ios_base::failure::vftable;
  ExceptionList = local_18;
  return local_20;
}

