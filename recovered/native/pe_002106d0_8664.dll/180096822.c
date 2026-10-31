/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180096822 */

void FUN_180096822(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *******pppppppcVar5;
  int iVar6;
  undefined1 local_310 [56];
  undefined1 local_2d8 [56];
  undefined1 local_2a0 [56];
  undefined1 local_268 [56];
  undefined1 local_230 [56];
  undefined1 local_1f8 [56];
  undefined1 local_1c0 [56];
  undefined8 local_188;
  char *local_180;
  char *local_178;
  char *local_170;
  undefined8 local_168;
  char *local_160;
  undefined8 local_158;
  char *local_150;
  undefined8 local_148;
  undefined4 local_140 [8];
  ulonglong local_120;
  char *local_118;
  char *local_110;
  int local_fc;
  undefined8 local_f8;
  char *local_f0;
  char *local_e8;
  undefined1 local_d8 [32];
  longlong local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  int local_8c;
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
  cVar2 = FUN_180097ab4(param_2,&DAT_18036a525);
  if (cVar2 == '\0') {
    FUN_180001e92(&local_b0,"CommonEvent");
    FUN_180001e92(local_d8,&DAT_18036a525);
    local_68 = "Key \'{}\' for object \'{}\' not found in patch";
    local_60 = (char ***)0x2b;
    FUN_18006b4a7(&local_88,&local_68,local_d8,&local_b0);
    local_120 = 0x280000008c;
    local_118 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
    ;
    local_110 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
    FUN_180072a20(&local_f8);
    FUN_1800b1004(&local_68);
    FUN_18006f972(local_310,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_310,&DAT_1803a63b0);
  }
  uVar3 = FUN_18008d862(param_2,&DAT_18036a525);
  local_68 = (char *)((ulonglong)local_68._4_4_ << 0x20);
  FUN_180097ca8(&DAT_1802b0ea8,uVar3,&local_68);
  local_fc = (int)local_68;
  local_b8 = param_1;
  if ((int)local_68 != *(int *)(param_1 + 8)) {
    local_b0 = (char *)0x5700000091;
    local_a8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
    ;
    local_a0 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
    FUN_180072a20(&local_88);
    local_170 = "{}ID mismatch in patch (expected {}, got {})";
    local_168 = 0x2c;
    FUN_18007e521(&local_68,&local_170,&local_88,local_b8 + 8,&local_fc);
    FUN_18006f972(local_2d8,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_2d8,&DAT_1803a63b0);
  }
  cVar2 = FUN_180097ab4(param_2,"name");
  if (cVar2 == '\0') {
    FUN_180001e92(&local_b0,"CommonEvent");
    FUN_180001e92(local_d8,"name");
    local_68 = "Key \'{}\' for object \'{}\' not found in patch";
    local_60 = (char ***)0x2b;
    FUN_18006b4a7(&local_88,&local_68,local_d8,&local_b0);
    local_120 = 0x2a00000093;
    local_118 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
    ;
    local_110 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
    FUN_180072a20(&local_f8);
    FUN_1800b1004(&local_68);
    FUN_18006f972(local_2a0,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_2a0,&DAT_1803a63b0);
  }
  cVar2 = FUN_180097ab4(param_2,"description");
  if (cVar2 != '\0') {
    cVar2 = FUN_180097ab4(param_2,"commands");
    if (cVar2 == '\0') {
      FUN_180001e92(&local_b0,"CommonEvent");
      FUN_180001e92(local_d8,"commands");
      local_68 = "Key \'{}\' for object \'{}\' not found in patch";
      local_60 = (char ***)0x2b;
      FUN_18006b4a7(&local_88,&local_68,local_d8,&local_b0);
      local_120 = 0x2e00000095;
      local_118 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
      ;
      local_110 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
      FUN_180072a20(&local_f8);
      FUN_1800b1004(&local_68);
      FUN_18006f972(local_230,&local_68);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_230,&DAT_1803a63b0);
    }
    uVar3 = FUN_18008d862(param_2,"name");
    FUN_18008daae(uVar3,&local_88);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_180417dc0) {
      FUN_18023d500(&DAT_180417dc0);
      if (DAT_180417dc0 == -1) {
        FUN_18007645e(&DAT_180417d48);
        FUN_18023d710(&LAB_18008bdaa);
        _Init_thread_footer(&DAT_180417dc0);
      }
    }
    pppppppcVar5 = &local_88;
    if (0xf < local_70) {
      pppppppcVar5 = (char *******)local_88;
    }
    FUN_18008bdb6(&DAT_180417d48,&local_68,pppppppcVar5,
                  (longlong)pppcStack_78 + (longlong)pppppppcVar5);
    FUN_180012524(local_b8 + 0x28,&local_68);
    FUN_1800010ec(&local_68);
    FUN_180001ef2(&local_88);
    uVar3 = FUN_18008d862(param_2,"description");
    FUN_18008daae(uVar3,&local_88);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_180417dc0) {
      FUN_18023d500(&DAT_180417dc0);
      if (DAT_180417dc0 == -1) {
        FUN_18007645e(&DAT_180417d48);
        FUN_18023d710(&LAB_18008bdaa);
        _Init_thread_footer(&DAT_180417dc0);
      }
    }
    pppppppcVar5 = &local_88;
    if (0xf < local_70) {
      pppppppcVar5 = (char *******)local_88;
    }
    FUN_18008bdb6(&DAT_180417d48,&local_68,pppppppcVar5,
                  (longlong)pppcStack_78 + (longlong)pppppppcVar5);
    FUN_180012524(local_b8 + 0x80,&local_68);
    FUN_1800010ec(&local_68);
    FUN_180001ef2(&local_88);
    local_8c = 0;
    local_88 = (char ******)FUN_18008d862(param_2,"commands");
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
    cVar2 = FUN_18005324c(&local_68,&local_88);
    if (cVar2 == '\0') {
      iVar6 = 1;
      do {
        uVar3 = FUN_18008d8c6(&local_68);
        cVar2 = FUN_180097ab4(uVar3,"index");
        if (cVar2 == '\0') {
          local_160 = "CommonEvent::commands[{}]";
          local_158 = 0x19;
          FUN_180097b07(&local_f8,&local_160,&local_8c);
          FUN_180001e92(&local_120,"index");
          local_b0 = "Key \'{}\' for object \'{}\' not found in patch";
          local_a8 = (char *)0x2b;
          FUN_18006b4a7(local_d8,&local_b0,&local_120,&local_f8);
          local_188 = 0x520000009e;
          local_180 = 
          "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
          ;
          local_178 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
          FUN_180072a20(local_140);
          FUN_1800b1004(&local_b0);
          FUN_18006f972(local_1f8,&local_b0);
                    /* WARNING: Subroutine does not return */
          FUN_18026d5b0(local_1f8,&DAT_1803a63b0);
        }
        local_8c = iVar6;
        uVar4 = FUN_18008d862(uVar3,"index");
        local_b0 = (char *)((ulonglong)local_b0 & 0xffffffff00000000);
        FUN_180097ca8(&DAT_1802b0ea8,uVar4,&local_b0);
        local_140[0] = local_b0._0_4_;
        local_120 = *(longlong *)(local_b8 + 0x50) - *(longlong *)(local_b8 + 0x48) >> 4;
        if (local_120 <= ((ulonglong)local_b0 & 0xffffffff)) {
          local_f8 = 0x6f000000a3;
          local_f0 = 
          "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
          ;
          local_e8 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
          FUN_180072a20(local_d8);
          local_150 = "{}Command index out of range in patch (index {}, commands count {})";
          local_148 = 0x43;
          FUN_180097b83(&local_b0,&local_150,local_d8,local_140,&local_120);
          FUN_18006f972(local_1c0,&local_b0);
                    /* WARNING: Subroutine does not return */
          FUN_18026d5b0(local_1c0,&DAT_1803a63b0);
        }
        plVar1 = *(longlong **)
                  (*(longlong *)(local_b8 + 0x48) + ((ulonglong)local_b0 & 0xffffffff) * 0x10);
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
        cVar2 = FUN_18005324c(&local_68,&local_88);
        iVar6 = iVar6 + 1;
      } while (cVar2 == '\0');
    }
    return;
  }
  FUN_180001e92(&local_b0,"CommonEvent");
  FUN_180001e92(local_d8,"description");
  local_68 = "Key \'{}\' for object \'{}\' not found in patch";
  local_60 = (char ***)0x2b;
  FUN_18006b4a7(&local_88,&local_68,local_d8,&local_b0);
  local_120 = 0x3100000094;
  local_118 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
  ;
  local_110 = "void __cdecl CommonEvent::Patch(const nlohmann::ordered_json &)";
  FUN_180072a20(&local_f8);
  FUN_1800b1004(&local_68);
  FUN_18006f972(local_268,&local_68);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_268,&DAT_1803a63b0);
}

