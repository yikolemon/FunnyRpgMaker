/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f29b4 */

int * __thiscall FUN_100f29b4(int *param_1,char param_2)

{
  void **ppvVar1;
  char cVar2;
  int *piVar3;
  void **ppvVar4;
  int *local_38;
  int **local_34;
  int *local_30;
  int *local_2c;
  char local_28;
  void **local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  ppvVar4 = &local_1c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f55c0;
  local_1c = ExceptionList;
  local_2c = param_1 + 5;
  local_34 = (int **)0x100f29ed;
  ExceptionList = ppvVar4;
  FUN_100446d6();
  local_28 = '\x01';
  local_14 = 0;
  if ((param_2 != '\0') && ((char)param_1[0x1b] != '\0')) {
    local_34 = (int **)0x2;
                    /* WARNING: Subroutine does not return */
    local_38 = (int *)&UNK_100f2aab;
    FUN_100f2ce8();
  }
  local_34 = (int **)(param_1 + 3);
  local_38 = (int *)0x100f2a16;
  local_24 = local_34;
  cVar2 = FUN_102354c0();
  ppvVar1 = local_24;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x1b) = 1;
    if (*(char *)((int)param_1 + 0x76) == '\0') {
      *(undefined1 *)((int)param_1 + 0x76) = 1;
      local_34 = &local_2c;
      local_38 = (int *)0x100f2a3f;
      local_30 = param_1;
      (**(code **)(*param_1 + 0x10))();
      param_1 = local_30;
    }
    if (param_1[0x1c] == 0) {
      do {
        local_34 = (int **)local_2c;
        local_38 = param_1 + 0x11;
        FUN_1022c750();
      } while (param_1[0x1c] == 0);
    }
    ppvVar4 = local_24;
    local_34 = local_24;
    local_38 = (int *)0x100f2a69;
    cVar2 = FUN_102354c0();
    if (cVar2 == '\0') {
      local_14 = 0xffffffff;
      if (local_28 == '\x01') {
        local_34 = (int **)local_2c;
        local_38 = (int *)0x100f2a88;
        FUN_1022c200();
      }
      ExceptionList = local_1c;
      return param_1 + 2;
    }
  }
  else {
    local_20 = (undefined1 *)&local_38;
    local_24 = &local_38;
    local_38 = (int *)0x0;
    local_34 = (int **)0x0;
    FUN_102353d0(&local_38,ppvVar1);
    local_14 = 0;
    FUN_100f2d11();
  }
  local_20 = (undefined1 *)&local_38;
  local_24 = &local_38;
  local_38 = (int *)0x0;
  local_34 = (int **)0x0;
  FUN_102353d0(&local_38,ppvVar4);
  local_14 = 0;
  FUN_100f2d11();
  local_34 = (int **)&stack0xfffffffc;
  piVar3 = (int *)FUN_10235380(local_18);
  return piVar3;
}

