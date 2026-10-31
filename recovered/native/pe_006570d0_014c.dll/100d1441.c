/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d1441 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d1441(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 local_40;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_40;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ddb80;
  local_20 = ExceptionList;
  local_40 = param_1;
  ExceptionList = &local_20;
  FUN_100446d6();
  local_18 = 0;
  uVar1 = FUN_100d7b05(&local_40);
  local_34 = DAT_1039ce34;
  iVar2 = *(int *)(DAT_1039ce34 + 4 + (uVar1 & _DAT_1039ce40) * 8);
  local_30 = DAT_1039ce2c;
  if (iVar2 != DAT_1039ce2c) {
    local_38 = *(uint *)(iVar2 + 0xc) ^ local_40._4_4_;
    local_2c = (int)local_40;
    if (*(int *)(iVar2 + 8) != (int)local_40 || local_38 != 0) {
      do {
        if (iVar2 == *(int *)(DAT_1039ce34 + (uVar1 & _DAT_1039ce40) * 8)) goto code_r0x100d1522;
        iVar2 = *(int *)(iVar2 + 4);
      } while (*(int *)(iVar2 + 8) != (int)local_40 || *(uint *)(iVar2 + 0xc) != local_40._4_4_);
    }
    if (iVar2 != DAT_1039ce2c) {
      *(undefined4 *)(iVar2 + 0x48) = param_2;
      *(undefined4 *)(iVar2 + 0x4c) = param_3;
      local_18 = 0;
      FUN_100d1565(local_40._4_4_,param_2,param_3);
    }
  }
code_r0x100d1522:
  local_18 = 0xffffffff;
  FUN_1022c200(&DAT_10388dd4);
  ExceptionList = local_20;
  return;
}

