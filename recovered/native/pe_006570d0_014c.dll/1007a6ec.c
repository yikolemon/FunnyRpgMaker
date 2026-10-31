/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007a6ec */

int * __fastcall FUN_1007a6ec(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_2c [4];
  char local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2d10;
  local_1c = ExceptionList;
  piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_1c;
    local_24 = param_1;
    FUN_1007a540(param_1);
    if (local_28 == '\x01') {
      local_14 = 1;
      iVar2 = (**(code **)(*piVar1 + 0x34))();
      local_14 = 0;
      FUN_10073a60((uint)(*(int *)((int)local_24 + *(int *)(*local_24 + 4) + 0x38) == 0) << 2 |
                   (uint)(iVar2 == -1) << 2 |
                   *(uint *)((int)local_24 + *(int *)(*local_24 + 4) + 0xc),0);
    }
    local_14 = 0xffffffff;
    FUN_1007a64a();
    param_1 = local_24;
  }
  ExceptionList = local_1c;
  return param_1;
}

