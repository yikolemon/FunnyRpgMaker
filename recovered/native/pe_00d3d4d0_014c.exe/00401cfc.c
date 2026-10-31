/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00401cfc */

undefined4 * __thiscall FUN_00401cfc(void *this,undefined4 *param_1)

{
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  local_10 = &LAB_00406d80;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004065e1(this,param_1);
  ExceptionList = local_14;
  return this;
}

