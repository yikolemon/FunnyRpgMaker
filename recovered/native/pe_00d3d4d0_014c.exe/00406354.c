/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00406354 */

void __fastcall FUN_00406354(int *param_1)

{
  int iVar1;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_00407110;
  local_1c = ExceptionList;
  iVar1 = *(int *)(*param_1 + 4);
  if ((*(int *)((int)param_1 + iVar1 + 0xc) == 0) &&
     ((*(byte *)((int)param_1 + iVar1 + 0x14) & 2) != 0)) {
    local_14 = 0;
    ExceptionList = &local_1c;
    local_24 = param_1;
    iVar1 = (**(code **)(**(int **)((int)param_1 + iVar1 + 0x38) + 0x34))();
    if (iVar1 == -1) {
      FUN_00405f74((void *)((int)local_24 + *(int *)(*local_24 + 4)),
                   *(uint *)((int)local_24 + *(int *)(*local_24 + 4) + 0xc) | 4,'\0');
    }
  }
  ExceptionList = local_1c;
  return;
}

