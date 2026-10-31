/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004063fc */

int * __thiscall FUN_004063fc(void *this,undefined2 param_1)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  undefined1 local_2c [4];
  char local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_00407120;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = this;
  FUN_00404fb4(local_2c,this);
  uVar3 = 4;
  if (local_28 == '\x01') {
    local_14 = 1;
    sVar2 = FUN_00405198(*(void **)((int)local_24 + *(int *)(*local_24 + 4) + 0x38),param_1);
    uVar3 = (uint)(sVar2 == -1) << 2;
  }
  iVar1 = *(int *)(*local_24 + 4);
  local_14 = 0;
  FUN_00405f74((void *)((int)local_24 + iVar1),
               (uint)(*(int *)((int)local_24 + iVar1 + 0x38) == 0) << 2 |
               uVar3 | *(uint *)((int)local_24 + iVar1 + 0xc),'\0');
  local_14 = 0xffffffff;
  FUN_004051ca();
  ExceptionList = local_1c;
  return local_24;
}

