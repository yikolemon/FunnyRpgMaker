/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00403b4c */

undefined4 * __thiscall FUN_00403b4c(void *this,uint *param_1)

{
  uint *puVar1;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_00406f50;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined8 *)((int)this + 0x10) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_14 = 0;
  puVar1 = param_1 + 4;
  if (0xf < param_1[5]) {
    param_1 = (uint *)*param_1;
  }
  local_24 = this;
  FUN_00403e24(this,param_1,*puVar1);
  ExceptionList = local_1c;
  return local_24;
}

