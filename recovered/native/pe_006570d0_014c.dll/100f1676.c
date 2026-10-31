/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1676 */

uint FUN_100f1676(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  int local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  char local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_50;
  local_18 = &LAB_100f54b0;
  local_1c = ExceptionList;
  local_14 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = &LAB_100f190a;
  ExceptionList = &local_1c;
  FUN_100f199a(param_2);
  local_34 = local_30 + 2;
  do {
    if (*(int *)(param_3 + 0xa0) != 0) {
      local_21 = 1;
      break;
    }
    local_2c = *local_30;
    local_28 = 0;
    local_14 = 1;
    FUN_100446d6();
    local_28 = '\x01';
    local_14 = 2;
    if ((param_2 == 0) || (puVar3 = (uint *)FUN_10018d26(param_2 + 4), (*puVar3 & 1) == 0)) {
      local_3c = param_1;
      local_38 = param_1;
      FUN_100217b4();
      local_14 = 3;
      FUN_1022c750(local_34,*local_30);
      FUN_100217b4();
      iVar2 = local_38;
      local_14 = 0xffffffff;
      FUN_100f1b52();
      FUN_100446d6();
      *(undefined1 *)(iVar2 + 4) = 1;
      bVar1 = false;
    }
    else {
      FUN_100217b4();
      local_21 = *(int *)(param_3 + 0xa0) != 0;
      bVar1 = true;
    }
    local_14 = 0xffffffff;
    if (local_28 == '\x01') {
      FUN_1022c200(local_2c);
    }
  } while (!bVar1);
  local_14 = 0xffffffff;
  FUN_100f1b6c();
  FUN_100f0f14();
  ExceptionList = local_1c;
  return CONCAT31((int3)((uint)local_1c >> 8),local_21) & 0xffffff01;
}

