/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404d1c */

undefined4 * __thiscall FUN_00404d1c(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_00407000;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  local_14 = 0;
  local_24 = this;
  iVar1 = FUN_0047f230(0x30);
  local_24[1] = iVar1;
  FUN_00404e7a((void *)(iVar1 + 8),param_2);
  ExceptionList = local_1c;
  return local_24;
}

