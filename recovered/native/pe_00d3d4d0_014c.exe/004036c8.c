/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004036c8 */

void * __thiscall FUN_004036c8(void *this,uint *param_1)

{
  void *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_00406f10;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_1c = this;
  FUN_00403f2a(this,param_1);
  ExceptionList = local_14;
  return local_1c;
}

