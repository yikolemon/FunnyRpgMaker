/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004046f8 */

undefined4 * __thiscall FUN_004046f8(void *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_00406fc0;
  local_14 = ExceptionList;
  local_c = 0;
  ExceptionList = &local_14;
  local_1c = this;
  FUN_0040352e(this);
  puVar1 = local_1c;
  local_c = 0xffffffff;
  if ((param_1 & 1) != 0) {
    FUN_0047f280(local_1c);
  }
  ExceptionList = local_14;
  return puVar1;
}

