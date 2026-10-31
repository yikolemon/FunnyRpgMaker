/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402bae */

undefined4 * __thiscall FUN_00402bae(void *this,uint *param_1)

{
  size_t sVar1;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_00406e80;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined8 *)((int)this + 0x10) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_14 = 0;
  sVar1 = _strlen((char *)param_1);
  local_24 = this;
  FUN_00402780(this,param_1,sVar1);
  ExceptionList = local_1c;
  return local_24;
}

