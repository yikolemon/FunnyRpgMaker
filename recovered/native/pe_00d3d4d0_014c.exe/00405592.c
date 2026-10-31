/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405592 */

undefined1 * __thiscall FUN_00405592(void *this,char *param_1)

{
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_00407090;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = this;
  FUN_0047f2d0(this,0);
  *(undefined4 *)(local_24 + 4) = 0;
  local_24[8] = 0;
  *(undefined4 *)(local_24 + 0xc) = 0;
  local_24[0x10] = 0;
  *(undefined4 *)(local_24 + 0x14) = 0;
  *(undefined2 *)(local_24 + 0x18) = 0;
  *(undefined4 *)(local_24 + 0x1c) = 0;
  *(undefined2 *)(local_24 + 0x20) = 0;
  *(undefined4 *)(local_24 + 0x24) = 0;
  local_24[0x28] = 0;
  *(undefined4 *)(local_24 + 0x2c) = 0;
  local_24[0x30] = 0;
  local_14 = 6;
  if (param_1 != (char *)0x0) {
    FUN_0047f3f0((int)local_24,param_1);
    ExceptionList = local_1c;
    return local_24;
  }
  FUN_0047f8d0(0x503ebb);
  if (*(LPVOID *)(local_18 + 0x2c) != (LPVOID)0x0) {
    local_24 = &stack0xfffffffc;
    thunk_FUN_00495f00(*(LPVOID *)(local_18 + 0x2c));
  }
  *(undefined4 *)(local_18 + 0x2c) = 0;
  return local_18;
}

