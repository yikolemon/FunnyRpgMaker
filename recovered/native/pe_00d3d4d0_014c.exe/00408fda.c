/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00408fda */

LPVOID __thiscall FUN_00408fda(void *this,uint param_1)

{
  LPVOID pvVar1;
  LPVOID local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_004180f0;
  local_14 = ExceptionList;
  local_1c = (LPVOID)((int)this + -0x20);
  local_c = 0;
  ExceptionList = &local_14;
  FUN_00409070((int)local_1c);
  pvVar1 = local_1c;
  local_c = 0xffffffff;
  if ((param_1 & 1) != 0) {
    FUN_0047f280(local_1c);
  }
  ExceptionList = local_14;
  return pvVar1;
}

