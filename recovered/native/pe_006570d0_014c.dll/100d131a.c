/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d131a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100d131a(undefined4 param_1,undefined8 param_2)

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
  local_1c = &LAB_100ddb70;
  local_20 = ExceptionList;
  local_40 = param_2;
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
        if (iVar2 == *(int *)(DAT_1039ce34 + (uVar1 & _DAT_1039ce40) * 8)) goto code_r0x100d13eb;
        iVar2 = *(int *)(iVar2 + 4);
      } while (*(int *)(iVar2 + 8) != (int)local_40 || *(uint *)(iVar2 + 0xc) != local_40._4_4_);
    }
    if (iVar2 != DAT_1039ce2c) {
      local_18 = 0;
      FUN_100d0fba(iVar2 + 0x18,iVar2 + 0x48);
      goto code_r0x100d13fb;
    }
  }
code_r0x100d13eb:
  FUN_100d103a();
code_r0x100d13fb:
  local_18 = 0xffffffff;
  FUN_1022c200(&DAT_10388dd4);
  ExceptionList = local_20;
  return param_1;
}

