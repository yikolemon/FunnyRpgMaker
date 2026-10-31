/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d0c84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d0c84(undefined8 param_1,byte param_2)

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
  local_1c = &LAB_100ddb20;
  local_20 = ExceptionList;
  local_40 = param_1;
  ExceptionList = &local_20;
  FUN_100446d6();
  local_18 = 0;
  uVar1 = FUN_100d7b05(&local_40);
  local_34 = DAT_1039cf24;
  iVar2 = *(int *)(DAT_1039cf24 + 4 + (uVar1 & _DAT_1039cf30) * 8);
  local_30 = DAT_1039cf1c;
  if (iVar2 != DAT_1039cf1c) {
    local_38 = *(uint *)(iVar2 + 0xc) ^ local_40._4_4_;
    local_2c = (int)local_40;
    if (*(int *)(iVar2 + 8) != (int)local_40 || local_38 != 0) {
      do {
        if (iVar2 == *(int *)(DAT_1039cf24 + (uVar1 & _DAT_1039cf30) * 8)) goto code_r0x100d0d5c;
        iVar2 = *(int *)(iVar2 + 4);
      } while (*(int *)(iVar2 + 8) != (int)local_40 || *(uint *)(iVar2 + 0xc) != local_40._4_4_);
    }
    if (iVar2 != DAT_1039cf1c) {
      *(undefined4 *)(iVar2 + 0x4c) = 0;
      *(uint *)(iVar2 + 0x48) = (uint)param_2;
      local_18 = 0;
      FUN_100d0d9d((uint)param_2);
    }
  }
code_r0x100d0d5c:
  local_18 = 0xffffffff;
  FUN_1022c200(&DAT_10388d74);
  ExceptionList = local_20;
  return;
}

