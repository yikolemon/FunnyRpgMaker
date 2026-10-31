/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ca946 */

void FUN_1400ca946(int *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 local_2b0 [56];
  undefined1 local_278 [56];
  undefined1 local_240 [56];
  undefined1 local_208 [56];
  undefined1 local_1d0 [56];
  undefined8 local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  undefined8 local_178;
  undefined1 local_170 [32];
  undefined8 local_150;
  char *local_148;
  char *local_140;
  undefined1 local_130 [32];
  undefined8 local_110;
  char *local_108;
  char *local_100;
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  char *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  int local_6c;
  undefined8 local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar2 = FUN_14007876a(param_2,"list");
  if (cVar2 == '\0') {
    FUN_14000169c(&local_90,"pages");
    FUN_14000169c(local_f0,"list");
    local_68 = "Key \'{}\' for object \'{}\' not found in patch";
    local_60 = 0x2b;
    FUN_140098950(&local_b0,&local_68,local_f0,&local_90);
    local_110 = 0x2400000095;
    local_108 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
    ;
    local_100 = "void __cdecl Page::Patch(const nlohmann::ordered_json &)";
    FUN_140087f79(local_d0);
    FUN_140018470(&local_68);
    FUN_1400886d4(local_2b0,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_2b0,&DAT_1401a5720);
  }
  cVar2 = FUN_14007876a(param_2,"id");
  if (cVar2 == '\0') {
    FUN_14000169c(&local_90,"pages");
    FUN_14000169c(local_f0,"id");
    local_68 = "Key \'{}\' for object \'{}\' not found in patch";
    local_60 = 0x2b;
    FUN_140098950(&local_b0,&local_68,local_f0,&local_90);
    local_110 = 0x2200000096;
    local_108 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
    ;
    local_100 = "void __cdecl Page::Patch(const nlohmann::ordered_json &)";
    FUN_140087f79(local_d0);
    FUN_140018470(&local_68);
    FUN_1400886d4(local_278,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_278,&DAT_1401a5720);
  }
  uVar3 = FUN_140098870(param_2,"id");
  local_68 = (char *)((ulonglong)local_68._4_4_ << 0x20);
  FUN_140098af4(&DAT_1401418dc,uVar3,&local_68);
  if ((int)local_68 != *param_1) {
    FUN_140031d26(&local_b0);
    FUN_140031d26(local_d0,*param_1);
    local_150 = 0x1b0000009b;
    local_148 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
    ;
    local_140 = "void __cdecl Page::Patch(const nlohmann::ordered_json &)";
    FUN_140087f79(local_130);
    FUN_14000ed8c(&local_110,local_130,"Page ID mismatch: ");
    FUN_140018470(local_f0);
    FUN_14000ed8c(&local_90,local_f0,&DAT_14017229f);
    FUN_140018470(&local_68);
    FUN_1400886d4(local_240,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_240,&DAT_1401a5720);
  }
  local_6c = 0;
  local_b0 = (char *)FUN_140098870(param_2,"list");
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
  cVar2 = FUN_14006b9e2(&local_68,&local_b0);
  if (cVar2 == '\0') {
    iVar6 = 1;
    do {
      uVar3 = FUN_140078920(&local_68);
      cVar2 = FUN_14007876a(uVar3,"index");
      if (cVar2 == '\0') {
        local_180 = "pages::list[{}]";
        local_178 = 0xf;
        FUN_1400988d4(local_d0,&local_180,&local_6c);
        FUN_14000169c(&local_110,"index");
        local_90 = "Key \'{}\' for object \'{}\' not found in patch";
        local_88 = 0x2b;
        FUN_140098950(local_f0,&local_90,&local_110,local_d0);
        local_150 = 0x48000000a1;
        local_148 = 
        "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
        ;
        local_140 = "void __cdecl Page::Patch(const nlohmann::ordered_json &)";
        FUN_140087f79(local_130);
        FUN_140018470(&local_90);
        FUN_1400886d4(local_208,&local_90);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_208,&DAT_1401a5720);
      }
      local_6c = iVar6;
      uVar4 = FUN_140098870(uVar3,"index");
      local_90 = (char *)((ulonglong)local_90 & 0xffffffff00000000);
      FUN_140098af4(&DAT_1401418dc,uVar4,&local_90);
      uVar5 = (ulonglong)local_90 & 0xffffffff;
      if ((ulonglong)(*(longlong *)(param_1 + 0x22) - *(longlong *)(param_1 + 0x20) >> 4) <= uVar5)
      {
        FUN_14001943c(local_f0);
        FUN_140031d26(local_130,uVar5);
        local_198 = 0x1c000000a6;
        local_190 = 
        "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
        ;
        local_188 = "void __cdecl Page::Patch(const nlohmann::ordered_json &)";
        FUN_140087f79(local_170);
        FUN_14000ed8c(&local_150,local_170,"Index out of range: ");
        FUN_140018470(&local_110);
        FUN_14000ed8c(local_d0,&local_110,&DAT_14017229a);
        FUN_140018470(&local_90);
        FUN_1400886d4(local_1d0,&local_90);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_1d0,&DAT_1401a5720);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + uVar5 * 0x10);
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
      cVar2 = FUN_14006b9e2(&local_68,&local_b0);
      iVar6 = iVar6 + 1;
    } while (cVar2 == '\0');
  }
  return;
}

