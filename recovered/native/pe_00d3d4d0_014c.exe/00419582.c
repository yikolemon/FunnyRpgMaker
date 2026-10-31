/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00419582 */

undefined4 * __thiscall FUN_00419582(void *this,uint *param_1,undefined4 param_2)

{
  void *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_0041a160;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined ***)this = NamedPipe::vftable;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  local_14 = 0;
  *(undefined ***)this = NamedPipeServer::vftable;
  *(undefined1 *)((int)this + 8) = 0;
  local_28 = (void *)((int)this + 0xc);
  local_24 = this;
  FUN_00403b4c(local_28,param_1);
  local_24[9] = param_2;
  ExceptionList = local_1c;
  return local_24;
}

