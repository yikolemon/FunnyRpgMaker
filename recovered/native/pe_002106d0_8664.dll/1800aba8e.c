/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aba8e */

void FUN_1800aba8e(int *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_298 [56];
  undefined1 local_260 [56];
  undefined1 local_228 [56];
  undefined1 local_1f0 [56];
  undefined1 local_1b8 [56];
  undefined8 local_180;
  char *local_178;
  char *local_170;
  char *local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  undefined4 local_138 [8];
  ulonglong local_118;
  char *local_110;
  char *local_108;
  undefined8 local_f8;
  char *local_f0;
  char *local_e8;
  undefined1 local_d8 [36];
  int local_b4;
  char *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  int local_6c;
  undefined8 local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar2 = FUN_180097ab4(param_2,"list");
  if (cVar2 == '\0') {
    FUN_180001e92(&local_90,"pages");
    FUN_180001e92(local_d8,"list");
    local_68 = "Key \'{}\' for object \'{}\' not found in patch";
    local_60 = 0x2b;
    FUN_18006b4a7(&local_b0,&local_68,local_d8,&local_90);
    local_118 = 0x2400000095;
    local_110 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_108 = "void __cdecl Page::Patch(const nlohmann::ordered_json &)";
    FUN_180072a20(&local_f8);
    FUN_1800b1004(&local_68);
    FUN_18006f972(local_298,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_298,&DAT_1803a63b0);
  }
  cVar2 = FUN_180097ab4(param_2,&DAT_18036a525);
  if (cVar2 == '\0') {
    FUN_180001e92(&local_90,"pages");
    FUN_180001e92(local_d8,&DAT_18036a525);
    local_68 = "Key \'{}\' for object \'{}\' not found in patch";
    local_60 = 0x2b;
    FUN_18006b4a7(&local_b0,&local_68,local_d8,&local_90);
    local_118 = 0x2200000096;
    local_110 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_108 = "void __cdecl Page::Patch(const nlohmann::ordered_json &)";
    FUN_180072a20(&local_f8);
    FUN_1800b1004(&local_68);
    FUN_18006f972(local_260,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_260,&DAT_1803a63b0);
  }
  uVar3 = FUN_18008d862(param_2,&DAT_18036a525);
  local_68 = (char *)((ulonglong)local_68._4_4_ << 0x20);
  FUN_180097ca8(&DAT_1802b0ea8,uVar3,&local_68);
  local_b4 = (int)local_68;
  if ((int)local_68 != *param_1) {
    local_90 = (char *)0x5c0000009b;
    local_88 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_80 = "void __cdecl Page::Patch(const nlohmann::ordered_json &)";
    FUN_180072a20(&local_b0);
    local_168 = "{}Page ID mismatch in patch (expected {}, got {})";
    local_160 = 0x31;
    FUN_18007e521(&local_68,&local_168,&local_b0,param_1,&local_b4);
    FUN_18006f972(local_228,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_228,&DAT_1803a63b0);
  }
  local_6c = 0;
  local_b0 = (char *)FUN_18008d862(param_2,"list");
  local_60 = 0;
  lStack_58 = 0;
  local_50 = -0x8000000000000000;
  cVar2 = *local_b0;
  if (cVar2 == '\0') {
    local_50 = 1;
  }
  else if (cVar2 == '\x02') {
    lStack_58 = **(longlong **)(local_b0 + 8);
  }
  else if (cVar2 == '\x01') {
    local_60 = **(longlong **)(local_b0 + 8);
  }
  else {
    local_50 = 0;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0x8000000000000000;
  if (*local_b0 == '\x02') {
    uStack_a0 = *(undefined8 *)(*(longlong *)(local_b0 + 8) + 8);
  }
  else if (*local_b0 == '\x01') {
    local_a8 = *(undefined8 *)(*(longlong *)(local_b0 + 8) + 8);
  }
  else {
    local_98 = 1;
  }
  local_68 = local_b0;
  cVar2 = FUN_18005324c(&local_68,&local_b0);
  if (cVar2 == '\0') {
    iVar5 = 1;
    do {
      uVar3 = FUN_18008d8c6(&local_68);
      cVar2 = FUN_180097ab4(uVar3,"index");
      if (cVar2 == '\0') {
        local_158 = "pages::list[{}]";
        local_150 = 0xf;
        FUN_180097b07(&local_f8,&local_158,&local_6c);
        FUN_180001e92(&local_118,"index");
        local_90 = "Key \'{}\' for object \'{}\' not found in patch";
        local_88 = (char *)0x2b;
        FUN_18006b4a7(local_d8,&local_90,&local_118,&local_f8);
        local_180 = 0x48000000a1;
        local_178 = 
        "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp"
        ;
        local_170 = "void __cdecl Page::Patch(const nlohmann::ordered_json &)";
        FUN_180072a20(local_138);
        FUN_1800b1004(&local_90);
        FUN_18006f972(local_1f0,&local_90);
                    /* WARNING: Subroutine does not return */
        FUN_18026d5b0(local_1f0,&DAT_1803a63b0);
      }
      local_6c = iVar5;
      uVar4 = FUN_18008d862(uVar3,"index");
      local_90 = (char *)((ulonglong)local_90 & 0xffffffff00000000);
      FUN_180097ca8(&DAT_1802b0ea8,uVar4,&local_90);
      local_138[0] = local_90._0_4_;
      local_118 = *(longlong *)(param_1 + 0x22) - *(longlong *)(param_1 + 0x20) >> 4;
      if (local_118 <= ((ulonglong)local_90 & 0xffffffff)) {
        local_f8 = 0x70000000a6;
        local_f0 = 
        "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp"
        ;
        local_e8 = "void __cdecl Page::Patch(const nlohmann::ordered_json &)";
        FUN_180072a20(local_d8);
        local_148 = "{}Command index out of range in patch (index: {}, command count: {})";
        local_140 = 0x44;
        FUN_180097b83(&local_90,&local_148,local_d8,local_138,&local_118);
        FUN_18006f972(local_1b8,&local_90);
                    /* WARNING: Subroutine does not return */
        FUN_18026d5b0(local_1b8,&DAT_1803a63b0);
      }
      plVar1 = *(longlong **)
                (*(longlong *)(param_1 + 0x20) + ((ulonglong)local_90 & 0xffffffff) * 0x10);
      (**(code **)(*plVar1 + 8))(plVar1,uVar3);
      if (*local_68 == '\x02') {
        lStack_58 = lStack_58 + 0x10;
      }
      else if (*local_68 == '\x01') {
        local_60 = local_60 + 0x30;
      }
      else {
        local_50 = local_50 + 1;
      }
      cVar2 = FUN_18005324c(&local_68,&local_b0);
      iVar5 = iVar5 + 1;
    } while (cVar2 == '\0');
  }
  return;
}

