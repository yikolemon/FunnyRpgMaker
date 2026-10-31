/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10094e06 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_10094e06(int param_1)

{
  char cVar1;
  char ******ppppppcVar2;
  int iVar3;
  char *******pppppppcVar4;
  char *******local_204;
  undefined8 local_200;
  char *******local_1f8;
  char ******local_1f4;
  char ******local_1f0;
  char *****local_1ec [9];
  char *****local_1c8 [9];
  char *****local_1a4 [9];
  char *****local_180 [9];
  char *****local_15c [9];
  char *****local_138 [9];
  char *****local_114 [9];
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
  char ******local_c8;
  char *****local_c4;
  undefined4 local_c0;
  char *local_bc;
  char *local_b8;
  char ******local_ac [6];
  char ******local_94 [6];
  int local_7c;
  char *****local_78;
  char ***local_74;
  char ***local_70;
  undefined4 local_6c;
  undefined1 local_68;
  char *****local_64;
  char ***local_60;
  char ***local_5c;
  char *local_58;
  int local_54;
  char *******local_50 [4];
  int local_40;
  uint local_3c;
  char ******local_38;
  undefined4 uStack_34;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_204;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3a70;
  local_1c = ExceptionList;
  local_204 = (char *******)&DAT_1033a3fb;
  ExceptionList = &local_1c;
  cVar1 = FUN_10095cc4();
  if (cVar1 == '\0') {
    local_204 = (char *******)0x1033183c;
    FUN_10001f66();
    local_14 = 0;
    local_204 = (char *******)&DAT_1033a3fb;
    FUN_10001f66();
    local_14 = 1;
    local_38 = (char ******)0x10337384;
    uStack_34 = 0x2b;
    local_200._0_4_ = "Key \'{}\' for object \'{}\' not found in patch";
    local_200._4_4_ = (char *******)0x2b;
    local_1f4 = &local_c4;
    local_1f8 = local_ac;
    local_204 = (char *******)local_50;
    FUN_1006b520();
    local_14 = 2;
    local_64 = (char *****)0x8c;
    local_60 = (char ***)0x28;
    local_5c = (char ***)0x103351d4;
    local_58 = "void __thiscall CommonEvent::Patch(const nlohmann::ordered_json &)";
    local_200 = CONCAT44(local_200._4_4_,&local_64);
    local_204 = local_94;
    FUN_10072232();
    local_14 = 3;
    local_204 = (char *******)CONCAT31(local_204._1_3_,local_78._0_1_);
    local_200._4_4_ = (char *******)local_50;
    local_200._0_4_ = (char *)local_94;
    FUN_100ac9f0();
    local_14 = 4;
    local_204 = &local_38;
    FUN_1006f6d8();
    local_204 = (char *******)local_1ec;
    local_200 = CONCAT44(local_200._4_4_,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0();
  }
  local_204 = (char *******)&DAT_1033a3fb;
  local_204 = (char *******)FUN_1008c8aa();
  local_38 = (char ******)0x0;
  local_200 = CONCAT44(local_200._4_4_,&local_38);
  FUN_10095de8();
  local_c8 = local_38;
  local_54 = param_1;
  if (local_38 != *(char *******)(param_1 + 8)) {
    local_c4 = (char *****)0x91;
    local_c0 = 0x57;
    local_bc = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
    ;
    local_b8 = "void __thiscall CommonEvent::Patch(const nlohmann::ordered_json &)";
    local_200 = CONCAT44(local_200._4_4_,&local_c4);
    local_204 = (char *******)local_50;
    FUN_10072232();
    local_14 = 5;
    local_1f4 = (char ******)(local_54 + 8);
    local_e0 = "{}ID mismatch in patch (expected {}, got {})";
    uStack_dc = 0x2c;
    local_200._0_4_ = "{}ID mismatch in patch (expected {}, got {})";
    local_200._4_4_ = (char *******)0x2c;
    local_1f0 = (char ******)&local_c8;
    local_204 = &local_38;
    local_1f8 = (char *******)local_50;
    FUN_1007d8ca();
    local_14 = 6;
    local_204 = &local_38;
    FUN_1006f6d8();
    local_204 = (char *******)local_1c8;
    local_200 = CONCAT44(local_200._4_4_,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0();
  }
  local_204 = (char *******)0x103394d7;
  cVar1 = FUN_10095cc4();
  if (cVar1 == '\0') {
    local_204 = (char *******)0x1033183c;
    FUN_10001f66();
    local_14 = 7;
    local_204 = (char *******)0x103394d7;
    FUN_10001f66();
    local_14 = 8;
    local_38 = (char ******)0x10337384;
    uStack_34 = 0x2b;
    local_200._0_4_ = "Key \'{}\' for object \'{}\' not found in patch";
    local_200._4_4_ = (char *******)0x2b;
    local_1f4 = &local_c4;
    local_1f8 = local_ac;
    local_204 = (char *******)local_50;
    FUN_1006b520();
    local_14 = 9;
    local_64 = (char *****)0x93;
    local_60 = (char ***)0x2a;
    local_5c = (char ***)0x103351d4;
    local_58 = "void __thiscall CommonEvent::Patch(const nlohmann::ordered_json &)";
    local_200 = CONCAT44(local_200._4_4_,&local_64);
    local_204 = local_94;
    FUN_10072232();
    local_14 = 10;
    local_204 = (char *******)CONCAT31(local_204._1_3_,local_78._0_1_);
    local_200._4_4_ = (char *******)local_50;
    local_200._0_4_ = (char *)local_94;
    FUN_100ac9f0();
    local_14 = 0xb;
    local_204 = &local_38;
    FUN_1006f6d8();
    local_204 = (char *******)local_1a4;
    local_200 = CONCAT44(local_200._4_4_,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0();
  }
  local_204 = (char *******)0x10335d5d;
  cVar1 = FUN_10095cc4();
  if (cVar1 != '\0') {
    local_204 = (char *******)0x10333f3f;
    cVar1 = FUN_10095cc4();
    if (cVar1 == '\0') {
      local_204 = (char *******)0x1033183c;
      FUN_10001f66();
      local_14 = 0x11;
      local_204 = (char *******)0x10333f3f;
      FUN_10001f66();
      local_14 = 0x12;
      local_38 = (char ******)0x10337384;
      uStack_34 = 0x2b;
      local_200._0_4_ = "Key \'{}\' for object \'{}\' not found in patch";
      local_200._4_4_ = (char *******)0x2b;
      local_1f4 = &local_c4;
      local_1f8 = local_ac;
      local_204 = (char *******)local_50;
      FUN_1006b520();
      local_14 = 0x13;
      local_64 = (char *****)0x95;
      local_60 = (char ***)0x2e;
      local_5c = (char ***)0x103351d4;
      local_58 = "void __thiscall CommonEvent::Patch(const nlohmann::ordered_json &)";
      local_200 = CONCAT44(local_200._4_4_,&local_64);
      local_204 = local_94;
      FUN_10072232();
      local_14 = 0x14;
      local_204 = (char *******)CONCAT31(local_204._1_3_,local_78._0_1_);
      local_200._4_4_ = (char *******)local_50;
      local_200._0_4_ = (char *)local_94;
      FUN_100ac9f0();
      local_14 = 0x15;
      local_204 = &local_38;
      FUN_1006f6d8();
      local_204 = (char *******)local_15c;
      local_200 = CONCAT44(local_200._4_4_,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0();
    }
    local_204 = (char *******)0x103394d7;
    FUN_1008c8aa();
    local_200 = CONCAT71(local_200._1_7_,local_38._0_1_);
    local_204 = (char *******)local_50;
    FUN_1008cb0a();
    local_14 = 0x16;
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc78) {
      local_204 = (char *******)&DAT_1039cc78;
      FUN_1022c0d0();
      if (DAT_1039cc78 == -1) {
        local_14 = 0x17;
        FUN_10075be2();
        local_204 = (char *******)&LAB_1008ada7;
        FUN_1022c3a0();
        local_14 = 0xffffffff;
        local_204 = (char *******)&DAT_1039cc78;
        FUN_1022c180();
      }
    }
    pppppppcVar4 = (char *******)local_50;
    if (0xf < local_3c) {
      pppppppcVar4 = local_50[0];
    }
    local_14 = 0x16;
    local_200 = CONCAT44(local_40 + (int)pppppppcVar4,pppppppcVar4);
    local_204 = &local_38;
    FUN_1008adb2();
    local_14 = 0x18;
    local_204 = &local_38;
    FUN_100128b2();
    local_14 = 0xffffffff;
    FUN_10001134();
    FUN_10001fee();
    local_204 = (char *******)0x10335d5d;
    FUN_1008c8aa();
    local_200 = CONCAT71(local_200._1_7_,local_38._0_1_);
    local_204 = (char *******)local_50;
    FUN_1008cb0a();
    local_14 = 0x19;
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc78) {
      local_204 = (char *******)&DAT_1039cc78;
      FUN_1022c0d0();
      if (DAT_1039cc78 == -1) {
        local_14 = 0x1a;
        FUN_10075be2();
        local_204 = (char *******)&LAB_1008ada7;
        FUN_1022c3a0();
        local_14 = 0xffffffff;
        local_204 = (char *******)&DAT_1039cc78;
        FUN_1022c180();
      }
    }
    local_204 = &local_38;
    local_200._0_4_ = (char *)local_50;
    if (0xf < local_3c) {
      local_200._0_4_ = (char *)local_50[0];
    }
    local_200._4_4_ = (char *******)(local_40 + (int)(char *)local_200);
    local_14 = 0x19;
    FUN_1008adb2();
    local_204 = &local_38;
    local_14 = 0x1b;
    FUN_100128b2();
    local_14 = 0xffffffff;
    FUN_10001134();
    FUN_10001fee();
    local_7c = 0;
    local_204 = (char *******)0x10333f3f;
    local_78 = (char *****)FUN_1008c8aa();
    local_5c = (char ***)0x0;
    local_60 = (char ***)0x0;
    local_58 = (char *)0x80000000;
    cVar1 = *(char *)local_78;
    if (cVar1 == '\0') {
      local_58 = (char *)0x1;
    }
    else if (cVar1 == '\x02') {
      local_5c = *local_78[2];
    }
    else if (cVar1 == '\x01') {
      local_60 = *local_78[2];
    }
    else {
      local_58 = (char *)0x0;
    }
    local_70 = (char ***)0x0;
    local_74 = (char ***)0x0;
    local_6c = 0x80000000;
    if (*(char *)local_78 == '\x02') {
      local_70 = local_78[2][1];
    }
    else if (*(char *)local_78 == '\x01') {
      local_74 = local_78[2][1];
    }
    else {
      local_6c = 1;
    }
    local_204 = (char *******)&local_78;
    local_64 = local_78;
    cVar1 = FUN_10051c02();
    if (cVar1 == '\0') {
      iVar3 = 1;
      do {
        ppppppcVar2 = (char ******)FUN_1008c930();
        local_204 = (char *******)0x103309f5;
        cVar1 = FUN_10095cc4();
        if (cVar1 == '\0') {
          local_d8 = "CommonEvent::commands[{}]";
          uStack_d4 = 0x19;
          local_200 = 0x191033b87b;
          local_1f8 = (char *******)&local_7c;
          local_204 = (char *******)&local_c4;
          FUN_10095d0a();
          local_14 = 0x1c;
          local_204 = (char *******)0x103309f5;
          FUN_10001f66();
          local_14 = 0x1d;
          local_38 = (char ******)0x10337384;
          uStack_34 = 0x2b;
          local_200._0_4_ = "Key \'{}\' for object \'{}\' not found in patch";
          local_200._4_4_ = (char *******)0x2b;
          local_1f4 = &local_c4;
          local_1f8 = local_ac;
          local_204 = (char *******)local_50;
          FUN_1006b520();
          local_14 = 0x1e;
          local_f0 = 0x9e;
          local_ec = 0x52;
          local_e8 = 
          "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
          ;
          local_e4 = "void __thiscall CommonEvent::Patch(const nlohmann::ordered_json &)";
          local_200 = CONCAT44(local_200._4_4_,&local_f0);
          local_204 = local_94;
          FUN_10072232();
          local_14 = 0x1f;
          local_204 = (char *******)CONCAT31(local_204._1_3_,local_68);
          local_200._4_4_ = (char *******)local_50;
          local_200._0_4_ = (char *)local_94;
          FUN_100ac9f0();
          local_14 = 0x20;
          local_204 = &local_38;
          FUN_1006f6d8();
          local_204 = (char *******)local_138;
          local_200 = CONCAT44(local_200._4_4_,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
          FUN_102586e0();
        }
        local_204 = (char *******)0x103309f5;
        local_7c = iVar3;
        local_204 = (char *******)FUN_1008c8aa();
        local_38 = (char ******)0x0;
        local_200._0_4_ = (char *)&local_38;
        FUN_10095de8();
        local_ac[0] = local_38;
        local_94[0] = (char ******)(*(int *)(local_54 + 0x38) - *(int *)(local_54 + 0x34) >> 3);
        if (local_94[0] <= local_38) {
          local_c4 = (char *****)0xa3;
          local_c0 = 0x6f;
          local_bc = 
          "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
          ;
          local_b8 = "void __thiscall CommonEvent::Patch(const nlohmann::ordered_json &)";
          local_200 = CONCAT44(local_200._4_4_,&local_c4);
          local_204 = (char *******)local_50;
          FUN_10072232();
          local_14 = 0x21;
          local_d0 = "{}Command index out of range in patch (index {}, commands count {})";
          uStack_cc = 0x43;
          local_200._0_4_ = "{}Command index out of range in patch (index {}, commands count {})";
          local_200._4_4_ = (char *******)0x43;
          local_1f0 = (char ******)local_94;
          local_1f4 = (char ******)local_ac;
          local_1f8 = (char *******)local_50;
          local_204 = &local_38;
          FUN_1007d8ca();
          local_14 = 0x22;
          local_204 = &local_38;
          FUN_1006f6d8();
          local_204 = (char *******)local_114;
          local_200 = CONCAT44(local_200._4_4_,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
          FUN_102586e0();
        }
        local_204 = (char *******)ppppppcVar2;
        (**(code **)(**(int **)(*(int *)(local_54 + 0x34) + (int)local_38 * 8) + 4))();
        if (*(char *)local_64 == '\x02') {
          local_5c = local_5c + 4;
        }
        else if (*(char *)local_64 == '\x01') {
          local_60 = local_60 + 10;
        }
        else {
          local_58 = (char *)((int)local_58 + 1);
        }
        local_204 = (char *******)&local_78;
        cVar1 = FUN_10051c02();
        iVar3 = iVar3 + 1;
      } while (cVar1 == '\0');
    }
    ExceptionList = local_1c;
    return;
  }
  local_204 = (char *******)0x1033183c;
  FUN_10001f66();
  local_14 = 0xc;
  local_204 = (char *******)0x10335d5d;
  FUN_10001f66();
  local_14 = 0xd;
  local_38 = (char ******)0x10337384;
  uStack_34 = 0x2b;
  local_200._0_4_ = "Key \'{}\' for object \'{}\' not found in patch";
  local_200._4_4_ = (char *******)0x2b;
  local_1f4 = &local_c4;
  local_1f8 = local_ac;
  local_204 = (char *******)local_50;
  FUN_1006b520();
  local_14 = 0xe;
  local_64 = (char *****)0x94;
  local_60 = (char ***)0x31;
  local_5c = (char ***)0x103351d4;
  local_58 = "void __thiscall CommonEvent::Patch(const nlohmann::ordered_json &)";
  local_200 = CONCAT44(local_200._4_4_,&local_64);
  local_204 = local_94;
  FUN_10072232();
  local_14 = 0xf;
  local_204 = (char *******)CONCAT31(local_204._1_3_,local_78._0_1_);
  local_200._4_4_ = (char *******)local_50;
  local_200._0_4_ = (char *)local_94;
  FUN_100ac9f0();
  local_14 = 0x10;
  local_204 = &local_38;
  FUN_1006f6d8();
  local_204 = (char *******)local_180;
  local_200 = CONCAT44(local_200._4_4_,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0();
}

