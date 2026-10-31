/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d10b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d10b6(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 auStack_58 [4];
  int local_54;
  undefined8 local_50;
  int local_48;
  int local_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_58;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ddb50;
  local_20 = ExceptionList;
  local_50 = param_1;
  ExceptionList = &local_20;
  FUN_100446d6();
  local_18 = 0;
  uVar2 = FUN_100d7b05(&local_50);
  local_48 = DAT_1039cf74;
  iVar1 = *(int *)(DAT_1039cf74 + 4 + (uVar2 & _DAT_1039cf80) * 8);
  local_44 = DAT_1039cf6c;
  if (iVar1 != DAT_1039cf6c) {
    local_54 = iVar1;
    if (*(int *)(iVar1 + 8) != (int)local_50 || *(int *)(iVar1 + 0xc) != local_50._4_4_) {
      do {
        if (local_54 == *(int *)(DAT_1039cf74 + (uVar2 & _DAT_1039cf80) * 8)) goto code_r0x100d1204;
        local_54 = *(int *)(local_54 + 4);
      } while (*(int *)(local_54 + 8) != (int)local_50 || *(int *)(local_54 + 0xc) != local_50._4_4_
              );
    }
    if (local_54 != DAT_1039cf6c) {
      local_18 = 0;
      FUN_100d2010(&local_40,param_2,param_3);
      iVar1 = local_54;
      local_18 = 1;
      puVar3 = (uint *)(local_54 + 0x30);
      if (puVar3 != &local_40) {
        FUN_10004e60();
        *(ulonglong *)(iVar1 + 0x40) = CONCAT44(uStack_2c,local_30);
        *puVar3 = local_40;
        *(undefined4 *)(iVar1 + 0x34) = uStack_3c;
        *(undefined4 *)(iVar1 + 0x38) = uStack_38;
        *(undefined4 *)(iVar1 + 0x3c) = uStack_34;
        local_30 = 0;
        uStack_2c = 0xf;
        local_40 = local_40 & 0xffffff00;
      }
      local_18 = 0xffffffff;
      FUN_10001fee();
      local_18 = 0;
      FUN_100d125e(puVar3);
    }
  }
code_r0x100d1204:
  local_18 = 0xffffffff;
  FUN_1022c200(&DAT_10388da4);
  ExceptionList = local_20;
  return;
}

