/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042bed2 */

void * __thiscall FUN_0042bed2(void *this,int param_1)

{
  void *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_0042e800;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined1 *)((int)this + 0x28) = 0;
  local_14 = 0;
  local_24 = this;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_00404e7a(this,param_1);
    *(undefined1 *)((int)local_24 + 0x28) = 1;
  }
  ExceptionList = local_1c;
  return local_24;
}

