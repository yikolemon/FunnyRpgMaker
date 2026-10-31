/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ca1dc */

void FUN_1400ca1dc(int *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 local_1e8 [56];
  undefined1 local_1b0 [56];
  undefined1 local_178 [56];
  undefined8 local_140;
  char *local_138;
  char *local_130;
  undefined1 local_128 [32];
  undefined8 local_108;
  char *local_100;
  char *local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar1 = FUN_14007876a(param_2,"pages");
  if (cVar1 == '\0') {
    FUN_14000169c(local_c8,"events");
    FUN_14000169c(local_a8,"pages");
    local_68 = "Key \'{}\' for object \'{}\' not found in patch";
    local_60 = 0x2b;
    FUN_140098950(local_e8,&local_68,local_a8,local_c8);
    local_108 = 0x2600000158;
    local_100 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
    ;
    local_f8 = "void __cdecl Event::Patch(const nlohmann::ordered_json &)";
    FUN_140087f79(local_88);
    FUN_140018470(&local_68);
    FUN_1400886d4(local_1e8,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_1e8,&DAT_1401a5720);
  }
  cVar1 = FUN_14007876a(param_2,"id");
  if (cVar1 != '\0') {
    uVar2 = FUN_140098870(param_2,"id");
    local_68 = (char *)((ulonglong)local_68._4_4_ << 0x20);
    FUN_140098af4(&DAT_1401418dc,uVar2,&local_68);
    if ((int)local_68 == *param_1) {
      lVar3 = *(longlong *)(param_1 + 0xc);
      if (*(longlong *)(param_1 + 0xe) != lVar3) {
        uVar5 = 0;
        lVar4 = 0;
        do {
          uVar2 = FUN_140098870(param_2,"pages");
          uVar2 = FUN_1400706a4(uVar2,uVar5);
          FUN_1400ca946(lVar3 + lVar4,uVar2);
          uVar5 = uVar5 + 1;
          lVar3 = *(longlong *)(param_1 + 0xc);
          lVar4 = lVar4 + 0xa0;
        } while (uVar5 < (ulonglong)
                         ((*(longlong *)(param_1 + 0xe) - lVar3 >> 5) * -0x3333333333333333));
      }
      return;
    }
    FUN_140031d26(local_e8);
    FUN_140031d26(local_88,*param_1);
    local_140 = 0x1b0000015e;
    local_138 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
    ;
    local_130 = "void __cdecl Event::Patch(const nlohmann::ordered_json &)";
    FUN_140087f79(local_128);
    FUN_14000ed8c(&local_108,local_128,"Event ID mismatch: ");
    FUN_140018470(local_a8);
    FUN_14000ed8c(local_c8,local_a8,&DAT_14017229f);
    FUN_140018470(&local_68);
    FUN_1400886d4(local_178,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_178,&DAT_1401a5720);
  }
  FUN_14000169c(local_c8,"events");
  FUN_14000169c(local_a8,"id");
  local_68 = "Key \'{}\' for object \'{}\' not found in patch";
  local_60 = 0x2b;
  FUN_140098950(local_e8,&local_68,local_a8,local_c8);
  local_108 = 0x2300000159;
  local_100 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\Map.hpp"
  ;
  local_f8 = "void __cdecl Event::Patch(const nlohmann::ordered_json &)";
  FUN_140087f79(local_88);
  FUN_140018470(&local_68);
  FUN_1400886d4(local_1b0,&local_68);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_1b0,&DAT_1401a5720);
}

