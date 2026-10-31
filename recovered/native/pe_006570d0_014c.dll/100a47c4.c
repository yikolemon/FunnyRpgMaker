/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a47c4 */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100a47c4(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  int local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_48;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c41a0;
  local_20 = ExceptionList;
  uStack_4c = 0;
  uStack_50 = 0x100a4807;
  ExceptionList = &local_20;
  uStack_4c = FUN_10080804();
  local_3c = auStack_48;
  local_18 = 0;
  local_24 = auStack_58;
  local_40 = auStack_58;
  FUN_1008c23a(_DAT_102944c0,_UNK_102944c4,_UNK_102944c8,_UNK_102944cc);
  local_18 = 2;
  FUN_1008bf00("events");
  local_18 = 0xffffffff;
  FUN_10084774();
  puVar1 = local_3c;
  local_24 = local_3c;
  local_40 = *(undefined1 **)(local_44 + 0x7c);
  for (local_44 = *(int *)(local_44 + 0x78); (undefined1 *)local_44 != local_40;
      local_44 = local_44 + 0x4c) {
    local_18 = 0;
    *(char **)(puVar1 + -4) = "events";
    *(undefined4 *)(puVar1 + -8) = 0x100a4881;
    local_3c = (undefined1 *)FUN_1008bf00();
    *(undefined1 **)(puVar1 + -4) = local_38;
    *(undefined4 *)(puVar1 + -8) = 0x100a4891;
    FUN_100a6f10();
    local_18 = 1;
    *(undefined1 **)(puVar1 + -4) = local_38;
    *(undefined4 *)(puVar1 + -8) = 0x100a48a6;
    FUN_1008bf84();
    local_18 = 0xffffffff;
    *(undefined4 *)(puVar1 + -4) = 0x100a48b6;
    FUN_1007f222();
  }
  ExceptionList = local_20;
  return param_1;
}

