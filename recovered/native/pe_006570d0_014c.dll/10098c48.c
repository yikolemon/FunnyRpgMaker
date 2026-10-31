/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10098c48 */

void FUN_10098c48(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_d8 [36];
  undefined4 local_b4;
  undefined4 local_b0;
  char *local_ac;
  char *local_a8;
  undefined1 local_a4 [24];
  char *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  char *local_74;
  int local_70;
  int local_6c;
  int local_68;
  char *local_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int local_40;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_d8;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3b90;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  cVar3 = FUN_10095cc4("code");
  if (cVar3 == '\0') {
    FUN_10001f66("command");
    local_14 = 0;
    FUN_10001f66("code");
    local_14 = 1;
    local_58 = "Key \'{}\' for object \'{}\' not found in patch";
    iStack_54 = 0x2b;
    FUN_1006b520(&local_3c,0x2b10337384,&local_8c,&local_74);
    local_14 = 2;
    local_b4 = 0xed;
    local_b0 = 0x26;
    local_ac = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Command.hpp"
    ;
    local_a8 = "virtual void __thiscall Command::Command::Patch(const nlohmann::ordered_json &)";
    FUN_10072232(local_a4,&local_b4);
    local_14 = 3;
    FUN_100ac9f0();
    local_14 = 4;
    FUN_1006f6d8(&local_58);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_d8,&DAT_10367ca8);
  }
  cVar3 = FUN_10095cc4("stringArgs");
  if (cVar3 != '\0') {
    iVar5 = *(int *)(local_24 + 0x14);
    iVar1 = *(int *)(local_24 + 0x18);
    if (iVar5 != iVar1) {
      do {
        FUN_10001134();
        iVar5 = iVar5 + 0x18;
      } while (iVar5 != iVar1);
      *(undefined4 *)(local_24 + 0x18) = *(undefined4 *)(local_24 + 0x14);
      local_14 = 0xffffffff;
    }
    local_8c = (char *)FUN_1008c8aa("stringArgs");
    local_6c = 0;
    local_70 = 0;
    local_68 = -0x80000000;
    cVar3 = *local_8c;
    if (cVar3 == '\0') {
      local_68 = 1;
    }
    else if (cVar3 == '\x02') {
      local_6c = **(int **)(local_8c + 8);
    }
    else if (cVar3 == '\x01') {
      local_70 = **(int **)(local_8c + 8);
    }
    else {
      local_68 = 0;
    }
    local_84 = 0;
    local_88 = 0;
    local_80 = 0x80000000;
    if (*local_8c == '\x02') {
      local_84 = *(undefined4 *)(*(int *)(local_8c + 8) + 4);
    }
    else if (*local_8c == '\x01') {
      local_88 = *(undefined4 *)(*(int *)(local_8c + 8) + 4);
    }
    else {
      local_80 = 1;
    }
    local_40 = local_24 + 0x14;
    local_74 = local_8c;
    while (cVar3 = FUN_10051c02(&local_8c), cVar3 == '\0') {
      FUN_1008c930();
      FUN_1008cb0a(&local_3c,local_a4[0]);
      local_14 = 5;
      if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc78
          ) && (FUN_1022c0d0(&DAT_1039cc78), DAT_1039cc78 == -1)) {
        local_14 = 6;
        FUN_10075be2();
        FUN_1022c3a0(&LAB_1008ada7);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_1039cc78);
      }
      local_14 = 5;
      FUN_1008adb2();
      local_14 = 7;
      FUN_1008b09c(&local_58);
      local_14 = 0xffffffff;
      FUN_10001134();
      FUN_10001fee();
      if (*local_74 == '\x02') {
        local_6c = local_6c + 0x10;
      }
      else if (*local_74 == '\x01') {
        local_70 = local_70 + 0x28;
      }
      else {
        local_68 = local_68 + 1;
      }
    }
  }
  cVar3 = FUN_10095cc4("intArgs");
  if (cVar3 == '\0') {
    ExceptionList = local_1c;
    return;
  }
  if (*(int *)(local_24 + 4) != *(int *)(local_24 + 8)) {
    *(int *)(local_24 + 8) = *(int *)(local_24 + 4);
  }
  local_58 = (char *)FUN_1008c8aa("intArgs");
  local_50 = 0;
  iStack_54 = 0;
  local_4c = -0x80000000;
  cVar3 = *local_58;
  if (cVar3 == '\0') {
    local_4c = 1;
  }
  else {
    if (cVar3 == '\x02') {
      local_50 = **(int **)(local_58 + 8);
      local_38 = 0;
      local_30 = 0x80000000;
      local_34 = *(undefined4 *)(*(int *)(local_58 + 8) + 4);
      goto LAB_10098f81;
    }
    if (cVar3 == '\x01') {
      iStack_54 = **(int **)(local_58 + 8);
      local_34 = 0;
      local_30 = 0x80000000;
      local_38 = *(undefined4 *)(*(int *)(local_58 + 8) + 4);
      goto LAB_10098f81;
    }
    local_4c = 0;
  }
  local_34 = 0;
  local_38 = 0;
  local_30 = 1;
LAB_10098f81:
  local_3c = local_58;
  cVar3 = FUN_10051c02(&local_3c);
  if (cVar3 == '\0') {
    local_40 = local_24 + 4;
    do {
      uVar4 = FUN_1008c930();
      local_74 = (char *)0x0;
      FUN_10095de8(uVar4,&local_74);
      puVar2 = *(undefined4 **)(local_24 + 8);
      if (puVar2 == *(undefined4 **)(local_24 + 0xc)) {
        FUN_10051662(puVar2,&local_74);
      }
      else {
        *puVar2 = local_74;
        *(int *)(local_24 + 8) = *(int *)(local_24 + 8) + 4;
      }
      if (*local_58 == '\x02') {
        local_50 = local_50 + 0x10;
      }
      else if (*local_58 == '\x01') {
        iStack_54 = iStack_54 + 0x28;
      }
      else {
        local_4c = local_4c + 1;
      }
      cVar3 = FUN_10051c02(&local_3c);
    } while (cVar3 == '\0');
  }
  ExceptionList = local_1c;
  return;
}

