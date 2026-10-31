/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004831e0 */

void __thiscall FUN_004831e0(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  *(bool *)((int)this + 0x48) = param_2 == 1;
  *(undefined4 **)((int)this + 0xc) = (undefined4 *)((int)this + 4);
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 8);
  *(undefined1 *)((int)this + 0x3d) = 0;
  *(undefined4 **)((int)this + 0x20) = (undefined4 *)((int)this + 0x18);
  *(undefined4 **)((int)this + 0x1c) = (undefined4 *)((int)this + 0x14);
  *(undefined4 **)((int)this + 0x2c) = (undefined4 *)((int)this + 0x24);
  *(undefined4 **)((int)this + 0x30) = (undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_8 = this;
  if (param_1 != 0) {
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    __get_stream_buffer_pointers(param_1,&local_c,&local_10,&local_14);
    *(int *)((int)local_8 + 0xc) = local_c;
    *(int *)((int)local_8 + 0x10) = local_c;
    *(int *)((int)local_8 + 0x1c) = local_10;
    *(int *)((int)local_8 + 0x20) = local_10;
    *(int *)((int)local_8 + 0x2c) = local_14;
    *(int *)((int)local_8 + 0x30) = local_14;
  }
  *(int *)((int)local_8 + 0x4c) = param_1;
  uVar1 = DAT_0051bc70;
  *(undefined4 *)((int)local_8 + 0x40) = DAT_0051bc6c;
  *(undefined4 *)((int)local_8 + 0x44) = uVar1;
  *(undefined4 *)((int)local_8 + 0x38) = 0;
  return;
}

