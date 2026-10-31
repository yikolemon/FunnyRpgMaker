/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100509de */

undefined4 FUN_100509de(undefined4 param_1)

{
  undefined4 uVar1;
  int iStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  char *pcStack_54;
  undefined1 auStack_50 [3];
  char local_4d;
  int local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_50;
  local_18 = 0xffffffff;
  local_1c = &LAB_1005a900;
  local_20 = ExceptionList;
  pcStack_54 = (char *)param_1;
  uStack_58 = 0x10050a22;
  ExceptionList = &local_20;
  FUN_100523ca();
  local_18 = 0;
  uStack_5c = *(int *)(local_4c + 8) - *(int *)(local_4c + 4) >> 2;
  uStack_58 = 4;
  iStack_60 = 0x10050a42;
  pcStack_54 = local_38;
  local_4d = FUN_100510b2();
  pcStack_54 = &local_4d;
  uStack_5c = *(uint *)(local_4c + 0x2c);
  iStack_60 = ((int)uStack_5c >> 0x1f & 0xe0000000U) +
              (uStack_5c >> 5) * 4 + *(int *)(local_4c + 0x20);
  uStack_5c = uStack_5c & 0x1f;
  uStack_58 = 1;
  FUN_1001f6b2(local_40);
  if ((local_4d == '\x01') &&
     (pcStack_54 = *(char **)(local_4c + 8), *(int *)((int)pcStack_54 + -4) != 0)) {
    local_24 = (undefined1 *)&iStack_60;
    local_48 = (undefined1 *)&iStack_60;
    local_44 = auStack_50;
    FUN_10013db4(local_4c + 0x68);
    local_18 = 1;
    FUN_10052468(local_40,param_1);
    local_18 = 0xffffffff;
    uVar1 = FUN_1004eed0();
    local_24 = local_44;
    *(undefined4 *)(local_4c + 0x30) = uVar1;
  }
  local_18 = 0xffffffff;
  pcStack_54 = (char *)0x10050af6;
  FUN_10013efc();
  ExceptionList = local_20;
  return 1;
}

