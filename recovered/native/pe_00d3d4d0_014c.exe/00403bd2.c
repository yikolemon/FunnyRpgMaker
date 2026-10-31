/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00403bd2 */

undefined4 * __thiscall FUN_00403bd2(void *this,undefined4 *param_1)

{
  undefined4 *local_2c;
  undefined1 local_28;
  int *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_2c;
  local_10 = 0xffffffff;
  local_14 = &LAB_00406f60;
  local_18 = ExceptionList;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  ExceptionList = &local_18;
  *(undefined ***)this = std::exception::vftable;
  local_24 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  local_28 = 1;
  local_2c = param_1;
  local_20 = this;
  FUN_00485740((int *)&local_2c,local_24);
  *local_20 = std::runtime_error::vftable;
  ExceptionList = local_18;
  return local_20;
}

