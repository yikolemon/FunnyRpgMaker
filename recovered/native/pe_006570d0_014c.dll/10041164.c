/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10041164 */

/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_10041164(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_94 [52];
  undefined1 local_60 [24];
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a360;
  local_1c = ExceptionList;
  local_2c = *(undefined4 *)(param_1 + 0xc);
  uStack_44 = 0x1004119e;
  ExceptionList = &local_1c;
  local_40 = param_1;
  FUN_100446d6();
  local_14 = 0;
  uStack_44 = 0x98;
  uStack_48 = 0x100411b0;
  uStack_44 = FUN_10228350();
  local_14 = 1;
  local_20 = auStack_94;
  local_24 = auStack_94;
  local_38 = local_60;
  local_3c = (undefined1 *)&local_40;
  local_28 = uStack_44;
  FUN_10022d74();
  local_14 = 2;
  local_34 = local_24 + 0x1c;
  FUN_10001f66("\r\n");
  local_14 = 3;
  FUN_1000334a(param_2);
  *(undefined4 *)(local_24 + 0x18) = 0;
  local_14 = 1;
  FUN_100342ae();
  puVar3 = local_3c;
  local_20 = local_3c;
  local_30 = local_28;
  local_14 = 5;
  puVar1 = *(undefined4 **)(local_40 + 0x14);
  *(undefined4 *)(local_40 + 0x14) = local_28;
  puVar4 = local_3c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
    *(undefined4 *)(local_3c + -4) = 1;
    pcVar2 = (code *)*puVar1;
    puVar4 = puVar3 + -8;
    *(undefined4 *)(puVar3 + -8) = 0x10041264;
    (*pcVar2)();
  }
  local_30 = 0;
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar4 + -4) = local_2c;
  *(undefined4 *)(puVar4 + -8) = 0x1004127c;
  FUN_1022c200();
  ExceptionList = local_1c;
  return;
}

