/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00418d04 */

undefined4 * __thiscall FUN_00418d04(void *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_0041a100;
  local_14 = ExceptionList;
  local_c = 0;
  ExceptionList = &local_14;
  *(undefined ***)this = NamedPipe::vftable;
  local_1c = this;
  ppuVar2 = &local_1c;
  if (*(HANDLE *)((int)this + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0xffffffff;
    ppuVar2 = (undefined4 **)local_18;
  }
  local_18 = (undefined1 *)ppuVar2;
  puVar1 = local_1c;
  local_c = 0xffffffff;
  if ((param_1 & 1) != 0) {
    FUN_0047f280(local_1c);
  }
  ExceptionList = local_14;
  return puVar1;
}

