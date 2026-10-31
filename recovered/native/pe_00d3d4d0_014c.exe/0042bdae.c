/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042bdae */

void * __thiscall FUN_0042bdae(void *this,int param_1)

{
  void *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_0042e7e0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_1c = this;
  FUN_0042be40(this,param_1);
  ExceptionList = local_14;
  return local_1c;
}

