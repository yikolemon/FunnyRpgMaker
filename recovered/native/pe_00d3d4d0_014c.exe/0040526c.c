/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040526c */

int * __fastcall FUN_0040526c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_2c [4];
  char local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_00407060;
  local_1c = ExceptionList;
  piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_1c;
    local_24 = param_1;
    FUN_00404fb4(local_2c,param_1);
    if (local_28 == '\x01') {
      local_14 = 1;
      iVar3 = (**(code **)(*piVar1 + 0x34))();
      iVar2 = *(int *)(*local_24 + 4);
      local_14 = 0;
      FUN_00405f74((void *)((int)local_24 + iVar2),
                   (uint)(*(int *)((int)local_24 + iVar2 + 0x38) == 0) << 2 |
                   (uint)(iVar3 == -1) << 2 | *(uint *)((int)local_24 + iVar2 + 0xc),'\0');
    }
    local_14 = 0xffffffff;
    FUN_004051ca();
    param_1 = local_24;
  }
  ExceptionList = local_1c;
  return param_1;
}

