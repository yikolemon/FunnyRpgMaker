/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00418dae */

undefined4 * __thiscall FUN_00418dae(void *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_0041a110;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined ***)this = NamedPipeClient::vftable;
  local_c = 0xffffffff;
  local_1c = this;
  FUN_0040230a((int *)((int)this + 8));
  puVar1 = local_1c;
  *local_1c = NamedPipe::vftable;
  if ((HANDLE)local_1c[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)local_1c[1]);
    puVar1[1] = 0xffffffff;
  }
  puVar1 = local_1c;
  if ((param_1 & 1) != 0) {
    FUN_0047f280(local_1c);
  }
  ExceptionList = local_14;
  return puVar1;
}

