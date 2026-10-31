/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00401f26 */

undefined4 * __thiscall FUN_00401f26(void *this,undefined1 (*param_1) [32])

{
  uint uVar1;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_00406db0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined8 *)((int)this + 0x10) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_14 = 0;
  uVar1 = FUN_00494090(param_1);
  local_24 = this;
  FUN_00404a4a(this,(uint *)param_1,uVar1);
  ExceptionList = local_1c;
  return local_24;
}

