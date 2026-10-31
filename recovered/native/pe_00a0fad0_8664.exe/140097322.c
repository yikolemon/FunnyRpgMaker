/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140097322 */

void FUN_140097322(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *******pppppppcVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 local_328 [56];
  undefined1 local_2f0 [56];
  undefined1 local_2b8 [56];
  undefined1 local_280 [56];
  undefined1 local_248 [56];
  undefined1 local_210 [56];
  undefined1 local_1d8 [56];
  undefined8 local_1a0;
  char *local_198;
  char *local_190;
  char *local_188;
  undefined8 local_180;
  undefined8 local_178;
  char *local_170;
  char *local_168;
  undefined8 local_158;
  char *local_150;
  char *local_148;
  undefined1 local_138 [32];
  undefined8 local_118;
  char *local_110;
  char *local_108;
  longlong local_f8;
  undefined1 local_f0 [32];
  undefined1 local_d0 [36];
  int local_ac;
  char *local_a8;
  undefined8 local_a0;
  char ******local_88;
  char ***local_80;
  char ***pppcStack_78;
  ulonglong local_70;
  undefined8 local_68;
  char ***local_60;
  char ***pppcStack_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar2 = FUN_14007876a(param_2,"id");
  if (cVar2 == '\0') {
    FUN_14000169c(&local_a8,"CommonEvent");
    FUN_14000169c(local_f0,"id");
    local_68 = "Key \'{}\' for object \'{}\' not found in patch";
    local_60 = (char ***)0x2b;
    FUN_140098950(&local_88,&local_68,local_f0,&local_a8);
    local_118 = 0x280000008c;
    local_110 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
    ;
    local_108 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
    FUN_140087f79(local_d0);
    FUN_140018470(&local_68);
    FUN_1400886d4(local_328,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_328,&DAT_1401a5720);
  }
  uVar3 = FUN_140098870(param_2,"id");
  local_68 = (char *)((ulonglong)local_68._4_4_ << 0x20);
  FUN_140098af4(&DAT_1401418dc,uVar3,&local_68);
  local_f8 = param_1;
  if ((int)local_68 != *(int *)(param_1 + 8)) {
    FUN_140031d26(&local_a8);
    FUN_140031d26(&local_118,*(undefined4 *)(local_f8 + 8));
    local_178 = 0x1b00000091;
    local_170 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
    ;
    local_168 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
    FUN_140087f79(&local_158);
    FUN_14000ed8c(local_138,&local_158,"ID mismatch in patch (expected ");
    FUN_140018470(local_d0);
    FUN_14000ed8c(local_f0,local_d0,", got ");
    FUN_140018470(&local_88);
    FUN_14000ed8c(&local_68,&local_88,")");
    FUN_1400886d4(local_2f0,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_2f0,&DAT_1401a5720);
  }
  cVar2 = FUN_14007876a(param_2,"name");
  if (cVar2 == '\0') {
    FUN_14000169c(&local_a8,"CommonEvent");
    FUN_14000169c(local_f0,"name");
    local_68 = "Key \'{}\' for object \'{}\' not found in patch";
    local_60 = (char ***)0x2b;
    FUN_140098950(&local_88,&local_68,local_f0,&local_a8);
    local_118 = 0x2a00000093;
    local_110 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
    ;
    local_108 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
    FUN_140087f79(local_d0);
    FUN_140018470(&local_68);
    FUN_1400886d4(local_2b8,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_2b8,&DAT_1401a5720);
  }
  cVar2 = FUN_14007876a(param_2,"description");
  if (cVar2 != '\0') {
    cVar2 = FUN_14007876a(param_2,"commands");
    if (cVar2 == '\0') {
      FUN_14000169c(&local_a8,"CommonEvent");
      FUN_14000169c(local_f0,"commands");
      local_68 = "Key \'{}\' for object \'{}\' not found in patch";
      local_60 = (char ***)0x2b;
      FUN_140098950(&local_88,&local_68,local_f0,&local_a8);
      local_118 = 0x2e00000095;
      local_110 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
      ;
      local_108 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
      FUN_140087f79(local_d0);
      FUN_140018470(&local_68);
      FUN_1400886d4(local_248,&local_68);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_248,&DAT_1401a5720);
    }
    uVar3 = FUN_140098870(param_2,"name");
    FUN_14007a24a(uVar3,&local_88);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
        < DAT_1401cc948) {
      FUN_1400dd790(&DAT_1401cc948);
      if (DAT_1401cc948 == -1) {
        FUN_14007709a(&DAT_1401cc8d0);
        FUN_1400d3740(&LAB_140098bbf);
        _Init_thread_footer(&DAT_1401cc948);
      }
    }
    pppppppcVar5 = &local_88;
    if (0xf < local_70) {
      pppppppcVar5 = (char *******)local_88;
    }
    FUN_140007482(&DAT_1401cc8d0,&local_68,pppppppcVar5,
                  (longlong)pppcStack_78 + (longlong)pppppppcVar5);
    FUN_14000ff1e(local_f8 + 0x28,&local_68);
    FUN_140005242(&local_68);
    FUN_1400017de(&local_88);
    uVar3 = FUN_140098870(param_2,"description");
    FUN_14007a24a(uVar3,&local_88);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
        < DAT_1401cc948) {
      FUN_1400dd790(&DAT_1401cc948);
      if (DAT_1401cc948 == -1) {
        FUN_14007709a(&DAT_1401cc8d0);
        FUN_1400d3740(&LAB_140098bbf);
        _Init_thread_footer(&DAT_1401cc948);
      }
    }
    pppppppcVar5 = &local_88;
    if (0xf < local_70) {
      pppppppcVar5 = (char *******)local_88;
    }
    FUN_140007482(&DAT_1401cc8d0,&local_68,pppppppcVar5,
                  (longlong)pppcStack_78 + (longlong)pppppppcVar5);
    FUN_14000ff1e(local_f8 + 0x80,&local_68);
    FUN_140005242(&local_68);
    FUN_1400017de(&local_88);
    local_ac = 0;
    local_88 = (char ******)FUN_140098870(param_2,"commands");
    local_60 = (char ***)0x0;
    pppcStack_58 = (char ***)0x0;
    local_50 = -0x8000000000000000;
    cVar2 = *(char *)local_88;
    if (cVar2 == '\0') {
      local_50 = 1;
    }
    else if (cVar2 == '\x02') {
      pppcStack_58 = (char ***)*local_88[1];
    }
    else if (cVar2 == '\x01') {
      local_60 = (char ***)*local_88[1];
    }
    else {
      local_50 = 0;
    }
    local_80 = (char ***)0x0;
    pppcStack_78 = (char ***)0x0;
    local_70 = 0x8000000000000000;
    if (*(char *)local_88 == '\x02') {
      pppcStack_78 = (char ***)local_88[1][1];
    }
    else if (*(char *)local_88 == '\x01') {
      local_80 = (char ***)local_88[1][1];
    }
    else {
      local_70 = 1;
    }
    local_68 = (char *)local_88;
    cVar2 = FUN_14006b9e2(&local_68,&local_88);
    if (cVar2 == '\0') {
      iVar7 = 1;
      do {
        uVar3 = FUN_140078920(&local_68);
        cVar2 = FUN_14007876a(uVar3,"index");
        if (cVar2 == '\0') {
          local_188 = "CommonEvent::commands[{}]";
          local_180 = 0x19;
          FUN_1400988d4(local_d0,&local_188,&local_ac);
          FUN_14000169c(&local_118,"index");
          local_a8 = "Key \'{}\' for object \'{}\' not found in patch";
          local_a0 = 0x2b;
          FUN_140098950(local_f0,&local_a8,&local_118,local_d0);
          local_158 = 0x520000009e;
          local_150 = 
          "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
          ;
          local_148 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
          FUN_140087f79(local_138);
          FUN_140018470(&local_a8);
          FUN_1400886d4(local_210,&local_a8);
                    /* WARNING: Subroutine does not return */
          FUN_140106270(local_210,&DAT_1401a5720);
        }
        local_ac = iVar7;
        uVar4 = FUN_140098870(uVar3,"index");
        local_a8 = (char *)((ulonglong)local_a8 & 0xffffffff00000000);
        FUN_140098af4(&DAT_1401418dc,uVar4,&local_a8);
        uVar6 = (ulonglong)local_a8 & 0xffffffff;
        if ((ulonglong)(*(longlong *)(local_f8 + 0x50) - *(longlong *)(local_f8 + 0x48) >> 4) <=
            uVar6) {
          FUN_14001943c(local_f0);
          FUN_140031d26(local_138,uVar6);
          local_1a0 = 0x1c000000a3;
          local_198 = 
          "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
          ;
          local_190 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
          FUN_140087f79(&local_178);
          FUN_14000ed8c(&local_158,&local_178,"Index out of range: ");
          FUN_140018470(&local_118);
          FUN_14000ed8c(local_d0,&local_118,&DAT_14017229a);
          FUN_140018470(&local_a8);
          FUN_1400886d4(local_1d8,&local_a8);
                    /* WARNING: Subroutine does not return */
          FUN_140106270(local_1d8,&DAT_1401a5720);
        }
        plVar1 = *(longlong **)(*(longlong *)(local_f8 + 0x48) + uVar6 * 0x10);
        (**(code **)(*plVar1 + 8))(plVar1,uVar3);
        if (*local_68 == '\x02') {
          pppcStack_58 = pppcStack_58 + 2;
        }
        else if (*local_68 == '\x01') {
          local_60 = local_60 + 6;
        }
        else {
          local_50 = local_50 + 1;
        }
        cVar2 = FUN_14006b9e2(&local_68,&local_88);
        iVar7 = iVar7 + 1;
      } while (cVar2 == '\0');
    }
    return;
  }
  FUN_14000169c(&local_a8,"CommonEvent");
  FUN_14000169c(local_f0,"description");
  local_68 = "Key \'{}\' for object \'{}\' not found in patch";
  local_60 = (char ***)0x2b;
  FUN_140098950(&local_88,&local_68,local_f0,&local_a8);
  local_118 = 0x3100000094;
  local_110 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
  ;
  local_108 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
  FUN_140087f79(local_d0);
  FUN_140018470(&local_68);
  FUN_1400886d4(local_280,&local_68);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_280,&DAT_1401a5720);
}

