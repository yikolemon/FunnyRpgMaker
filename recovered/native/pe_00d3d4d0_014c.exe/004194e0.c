/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004194e0 */

void __cdecl FUN_004194e0(void *param_1,undefined4 *param_2)

{
  uint local_38 [6];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_0041a150;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00402bae(local_38,(uint *)*param_2);
  local_14 = 0;
  FUN_00419582(param_1,local_38,0xff);
  local_14 = 0xffffffff;
  FUN_0040230a((int *)local_38);
  ExceptionList = local_1c;
  return;
}

