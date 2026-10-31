/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404e7a */

int __thiscall FUN_00404e7a(void *this,int param_1)

{
  undefined4 uVar1;
  void *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_00407020;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_14 = 0;
  local_24 = this;
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (**(code **)**(undefined4 **)(param_1 + 0x24))(this);
    *(undefined4 *)((int)local_24 + 0x24) = uVar1;
  }
  ExceptionList = local_1c;
  return (int)local_24;
}

