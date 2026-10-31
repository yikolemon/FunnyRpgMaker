/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dac54 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100dac54(void)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined1 auStack_b8 [4];
  undefined4 uStack_b4;
  char *pcStack_b0;
  char **ppcStack_ac;
  char *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  char *local_98;
  undefined4 *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  char local_88 [8];
  undefined4 *local_80;
  undefined1 *local_74;
  char *local_70;
  undefined1 *local_6c;
  char *local_68;
  undefined4 local_64;
  undefined4 ***local_60;
  undefined4 local_5c;
  undefined1 local_58 [24];
  undefined4 ***local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_a8;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ddcc0;
  local_20 = ExceptionList;
  ppcStack_ac = (char **)0x100dac9b;
  ExceptionList = &local_20;
  FUN_100446d6();
  local_18 = 0;
  ppcStack_ac = (char **)0x103515fe;
  pcStack_b0 = (char *)0x100dacaf;
  FUN_10001f66();
  local_18 = 5;
  pcStack_b0 = local_88;
  ppcStack_ac = (char **)local_58;
  uStack_b4 = 0x100dacc7;
  FUN_100145e4();
  local_18 = 0xffffffff;
  ppcStack_ac = (char **)0x100dacdd;
  FUN_10001fee();
  iVar1 = DAT_1039cfbc;
  local_18 = 1;
  if (local_88[0] != '\x02') goto code_r0x100daed9;
  iVar5 = DAT_1039cfb8;
  if (DAT_1039cfb8 == DAT_1039cfbc) {
code_r0x100dad7b:
    local_9c = 0x80000000;
    local_a4 = 0;
    local_a0 = *local_80;
    local_94 = (undefined4 *)0x0;
    local_8c = 0x80000000;
    local_90 = local_80[1];
  }
  else {
    do {
      ppcStack_ac = (char **)0x100dad0a;
      FUN_10013efc();
      iVar5 = iVar5 + 0x10;
    } while (iVar5 != iVar1);
    DAT_1039cfbc = DAT_1039cfb8;
    local_a0 = 0;
    local_a4 = 0;
    local_9c = 0x80000000;
    if (local_88[0] == '\0') {
      local_9c = 1;
LAB_100dadb2:
      local_90 = 0;
      local_94 = (undefined4 *)0x0;
      local_8c = 1;
    }
    else {
      if (local_88[0] == '\x02') goto code_r0x100dad7b;
      if (local_88[0] != '\x01') {
        local_9c = 0;
        goto LAB_100dadb2;
      }
      local_94 = (undefined4 *)*local_80;
      local_a4 = *local_94;
      local_90 = 0;
      local_8c = 0x80000000;
    }
  }
  local_a8 = local_88;
  local_18 = 1;
  local_98 = local_a8;
  while( true ) {
    ppcStack_ac = &local_98;
    pcStack_b0 = (char *)0x100daddd;
    cVar3 = FUN_10051c02();
    if (cVar3 != '\0') break;
    ppcStack_ac = (char **)0x100dadec;
    pcVar4 = (char *)FUN_100dc366();
    if (*pcVar4 == '\x01') {
      local_74 = auStack_b8;
      local_24 = auStack_b8;
      local_68 = "name";
      local_64 = 4;
      local_70 = pcVar4;
      local_6c = (undefined1 *)&local_a8;
      FUN_100db8d0(&local_68);
      local_18 = 2;
      local_60 = local_40;
      if (0xf < local_2c) {
        local_60 = local_40[0];
      }
      local_5c = local_30;
      FUN_101575f2(local_58,&local_60);
      local_18 = 3;
      FUN_100dc9d0(local_58);
      local_18 = 4;
      FUN_10013d2e("name");
      local_18 = 0xffffffff;
      FUN_1004eed0();
      puVar2 = local_6c;
      local_24 = local_6c;
      *(undefined4 *)(local_6c + -4) = 0x100daead;
      FUN_10001fee();
      *(undefined4 *)(puVar2 + -4) = 0x100daeb5;
      FUN_10001fee();
      local_18 = 1;
      *(char **)(puVar2 + -4) = local_70;
      *(undefined4 *)(puVar2 + -8) = 0x100daecc;
      FUN_100dca6e();
    }
    ppcStack_ac = (char **)0x100daed3;
    FUN_10051ba0();
  }
code_r0x100daed9:
  local_18 = 0xffffffff;
  ppcStack_ac = (char **)0x100daeeb;
  FUN_10013efc();
  ppcStack_ac = (char **)&DAT_10388e14;
  pcStack_b0 = (char *)0x100daef6;
  FUN_1022c200();
  ExceptionList = local_20;
  return;
}

