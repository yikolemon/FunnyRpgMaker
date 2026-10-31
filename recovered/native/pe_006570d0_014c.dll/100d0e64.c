/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d0e64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100d0e64(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_48;
  int local_44;
  undefined8 local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_48;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ddb40;
  local_20 = ExceptionList;
  local_40 = param_2;
  ExceptionList = &local_20;
  FUN_100446d6();
  local_18 = 0;
  uVar2 = FUN_100d7b05(&local_40);
  local_38 = DAT_1039cf74;
  iVar3 = *(int *)(DAT_1039cf74 + 4 + (uVar2 & _DAT_1039cf80) * 8);
  local_34 = DAT_1039cf6c;
  iVar1 = local_48;
  if (iVar3 != DAT_1039cf6c) {
    local_44 = (int)local_40;
    local_48 = iVar3;
    iVar1 = iVar3;
    if (*(int *)(iVar3 + 8) != (int)local_40 || *(int *)(iVar3 + 0xc) != local_40._4_4_) {
      do {
        if (local_48 == *(int *)(DAT_1039cf74 + (uVar2 & _DAT_1039cf80) * 8)) goto code_r0x100d0f32;
        local_48 = *(int *)(local_48 + 4);
      } while (*(int *)(local_48 + 8) != (int)local_40 || *(int *)(local_48 + 0xc) != local_40._4_4_
              );
    }
    if (local_48 != DAT_1039cf6c) {
      if (*(uint *)(local_48 + 0x44) < 0x10) {
        iVar3 = local_48 + 0x30;
      }
      else {
        iVar3 = *(int *)(local_48 + 0x30);
      }
      local_30 = FUN_10270b06(iVar3,0,0);
      local_18 = 0;
      FUN_100d0fba(local_48 + 0x18,&local_30);
      goto code_r0x100d0f73;
    }
  }
code_r0x100d0f32:
  local_48 = iVar1;
  FUN_100d103a();
code_r0x100d0f73:
  local_18 = 0xffffffff;
  FUN_1022c200(&DAT_10388da4);
  ExceptionList = local_20;
  return param_1;
}

