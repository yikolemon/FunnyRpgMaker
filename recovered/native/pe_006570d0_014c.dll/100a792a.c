/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a792a */

void FUN_100a792a(void)

{
  char cVar1;
  char **ppcVar2;
  int iVar3;
  char **local_1bc;
  undefined8 local_1b8;
  char **local_1b0;
  char **local_1ac;
  char **local_1a8;
  char *local_1a4 [9];
  char *local_180 [9];
  char *local_15c [9];
  char *local_138 [9];
  char *local_114 [9];
  undefined4 local_f0;
  undefined4 local_ec;
  char *local_e8;
  char *local_e4;
  char *local_e0;
  undefined4 uStack_dc;
  char *local_d8;
  undefined4 uStack_d4;
  char *local_d0;
  undefined4 uStack_cc;
  char *local_c8;
  undefined4 local_c4;
  char *local_c0;
  char *local_bc;
  char *local_b0 [6];
  char *local_98 [6];
  char *local_80;
  char *local_7c [6];
  char *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50;
  char *local_4c;
  int local_48;
  char *local_44;
  char *local_40;
  uint *local_3c;
  char *local_38;
  undefined4 uStack_34;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_1bc;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4340;
  local_1c = ExceptionList;
  local_1bc = (char **)0x10331456;
  ExceptionList = &local_1c;
  cVar1 = FUN_10095cc4();
  if (cVar1 == '\0') {
    local_1bc = (char **)0x10333dd3;
    FUN_10001f66();
    local_14 = 0;
    local_1bc = (char **)0x10331456;
    FUN_10001f66();
    local_14 = 1;
    local_38 = "Key \'{}\' for object \'{}\' not found in patch";
    uStack_34 = 0x2b;
    local_1b8._0_4_ = "Key \'{}\' for object \'{}\' not found in patch";
    local_1b8._4_4_ = (char **)0x2b;
    local_1ac = &local_c8;
    local_1b0 = local_b0;
    local_1bc = local_7c;
    FUN_1006b520();
    local_14 = 2;
    local_4c = (char *)0x95;
    local_48 = 0x24;
    local_44 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_40 = "void __thiscall Page::Patch(const nlohmann::ordered_json &)";
    local_1b8 = CONCAT44(local_1b8._4_4_,&local_4c);
    local_1bc = local_98;
    FUN_10072232();
    local_14 = 3;
    local_1bc = (char **)CONCAT31(local_1bc._1_3_,local_64._0_1_);
    local_1b8._4_4_ = local_7c;
    local_1b8._0_4_ = (char *)local_98;
    FUN_100ac9f0();
    local_14 = 4;
    local_1bc = &local_38;
    FUN_1006f6d8();
    local_1bc = local_1a4;
    local_1b8 = CONCAT44(local_1b8._4_4_,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0();
  }
  local_1bc = (char **)&DAT_1033a3fb;
  cVar1 = FUN_10095cc4();
  if (cVar1 == '\0') {
    local_1bc = (char **)0x10333dd3;
    FUN_10001f66();
    local_14 = 5;
    local_1bc = (char **)&DAT_1033a3fb;
    FUN_10001f66();
    local_14 = 6;
    local_38 = "Key \'{}\' for object \'{}\' not found in patch";
    uStack_34 = 0x2b;
    local_1b8._0_4_ = "Key \'{}\' for object \'{}\' not found in patch";
    local_1b8._4_4_ = (char **)0x2b;
    local_1ac = &local_c8;
    local_1b0 = local_b0;
    local_1bc = local_7c;
    FUN_1006b520();
    local_14 = 7;
    local_4c = (char *)0x96;
    local_48 = 0x22;
    local_44 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_40 = "void __thiscall Page::Patch(const nlohmann::ordered_json &)";
    local_1b8 = CONCAT44(local_1b8._4_4_,&local_4c);
    local_1bc = local_98;
    FUN_10072232();
    local_14 = 8;
    local_1bc = (char **)CONCAT31(local_1bc._1_3_,local_64._0_1_);
    local_1b8._4_4_ = local_7c;
    local_1b8._0_4_ = (char *)local_98;
    FUN_100ac9f0();
    local_14 = 9;
    local_1bc = &local_38;
    FUN_1006f6d8();
    local_1bc = local_180;
    local_1b8 = CONCAT44(local_1b8._4_4_,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0();
  }
  local_1bc = (char **)&DAT_1033a3fb;
  local_1bc = (char **)FUN_1008c8aa();
  local_1b8._0_4_ = (char *)&local_38;
  local_38 = (char *)0x0;
  FUN_10095de8();
  local_80 = local_38;
  if (local_38 != (char *)*local_3c) {
    local_c8 = (char *)0x9b;
    local_c4 = 0x5c;
    local_c0 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_bc = "void __thiscall Page::Patch(const nlohmann::ordered_json &)";
    local_1b8 = CONCAT44(local_1b8._4_4_,&local_c8);
    local_1bc = local_7c;
    FUN_10072232();
    local_14 = 10;
    local_e0 = "{}Page ID mismatch in patch (expected {}, got {})";
    uStack_dc = 0x31;
    local_1b8._0_4_ = "{}Page ID mismatch in patch (expected {}, got {})";
    local_1b8._4_4_ = (char **)0x31;
    local_1a8 = &local_80;
    local_1ac = (char **)local_3c;
    local_1bc = &local_38;
    local_1b0 = local_7c;
    FUN_1007d8ca();
    local_14 = 0xb;
    local_1bc = &local_38;
    FUN_1006f6d8();
    local_1bc = local_15c;
    local_1b8 = CONCAT44(local_1b8._4_4_,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0();
  }
  local_54 = 0;
  local_1bc = (char **)0x10331456;
  local_64 = (char *)FUN_1008c8aa();
  local_44 = (char *)0x0;
  local_48 = 0;
  local_40 = (char *)0x80000000;
  cVar1 = *local_64;
  if (cVar1 == '\0') {
    local_40 = (char *)0x1;
  }
  else if (cVar1 == '\x02') {
    local_44 = (char *)**(int **)(local_64 + 8);
  }
  else if (cVar1 == '\x01') {
    local_48 = **(int **)(local_64 + 8);
  }
  else {
    local_40 = (char *)0x0;
  }
  local_5c = 0;
  local_60 = 0;
  local_58 = 0x80000000;
  if (*local_64 == '\x02') {
    local_5c = *(undefined4 *)(*(int *)(local_64 + 8) + 4);
  }
  else if (*local_64 == '\x01') {
    local_60 = *(undefined4 *)(*(int *)(local_64 + 8) + 4);
  }
  else {
    local_58 = 1;
  }
  local_1bc = &local_64;
  local_4c = local_64;
  cVar1 = FUN_10051c02();
  if (cVar1 == '\0') {
    iVar3 = 1;
    do {
      ppcVar2 = (char **)FUN_1008c930();
      local_1bc = (char **)0x103309f5;
      cVar1 = FUN_10095cc4();
      if (cVar1 == '\0') {
        local_d8 = "pages::list[{}]";
        uStack_d4 = 0xf;
        local_1b8 = 0xf1033b86b;
        local_1b0 = (char **)&local_54;
        local_1bc = &local_c8;
        FUN_10095d0a();
        local_14 = 0xc;
        local_1bc = (char **)0x103309f5;
        FUN_10001f66();
        local_14 = 0xd;
        local_38 = "Key \'{}\' for object \'{}\' not found in patch";
        uStack_34 = 0x2b;
        local_1b8._0_4_ = "Key \'{}\' for object \'{}\' not found in patch";
        local_1b8._4_4_ = (char **)0x2b;
        local_1ac = &local_c8;
        local_1b0 = local_b0;
        local_1bc = local_7c;
        FUN_1006b520();
        local_14 = 0xe;
        local_f0 = 0xa1;
        local_ec = 0x48;
        local_e8 = 
        "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp"
        ;
        local_e4 = "void __thiscall Page::Patch(const nlohmann::ordered_json &)";
        local_1b8 = CONCAT44(local_1b8._4_4_,&local_f0);
        local_1bc = local_98;
        FUN_10072232();
        local_14 = 0xf;
        local_1bc = (char **)CONCAT31(local_1bc._1_3_,local_50);
        local_1b8._4_4_ = local_7c;
        local_1b8._0_4_ = (char *)local_98;
        FUN_100ac9f0();
        local_14 = 0x10;
        local_1bc = &local_38;
        FUN_1006f6d8();
        local_1bc = local_138;
        local_1b8 = CONCAT44(local_1b8._4_4_,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
        FUN_102586e0();
      }
      local_1bc = (char **)0x103309f5;
      local_54 = iVar3;
      local_1bc = (char **)FUN_1008c8aa();
      local_38 = (char *)0x0;
      local_1b8._0_4_ = (char *)&local_38;
      FUN_10095de8();
      local_b0[0] = local_38;
      local_98[0] = (char *)((int)(local_3c[0x14] - local_3c[0x13]) >> 3);
      if (local_98[0] <= local_38) {
        local_c8 = (char *)0xa6;
        local_c4 = 0x70;
        local_c0 = 
        "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp"
        ;
        local_bc = "void __thiscall Page::Patch(const nlohmann::ordered_json &)";
        local_1b8 = CONCAT44(local_1b8._4_4_,&local_c8);
        local_1bc = local_7c;
        FUN_10072232();
        local_14 = 0x11;
        local_d0 = "{}Command index out of range in patch (index: {}, command count: {})";
        uStack_cc = 0x44;
        local_1b8._0_4_ = "{}Command index out of range in patch (index: {}, command count: {})";
        local_1b8._4_4_ = (char **)0x44;
        local_1a8 = local_98;
        local_1ac = local_b0;
        local_1bc = &local_38;
        local_1b0 = local_7c;
        FUN_1007d8ca();
        local_14 = 0x12;
        local_1bc = &local_38;
        FUN_1006f6d8();
        local_1bc = local_114;
        local_1b8 = CONCAT44(local_1b8._4_4_,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
        FUN_102586e0();
      }
      local_1bc = ppcVar2;
      (**(code **)(**(int **)(local_3c[0x13] + (int)local_38 * 8) + 4))();
      if (*local_4c == '\x02') {
        local_44 = (char *)((int)local_44 + 0x10);
      }
      else if (*local_4c == '\x01') {
        local_48 = local_48 + 0x28;
      }
      else {
        local_40 = (char *)((int)local_40 + 1);
      }
      local_1bc = &local_64;
      cVar1 = FUN_10051c02();
      iVar3 = iVar3 + 1;
    } while (cVar1 == '\0');
  }
  ExceptionList = local_1c;
  return;
}

