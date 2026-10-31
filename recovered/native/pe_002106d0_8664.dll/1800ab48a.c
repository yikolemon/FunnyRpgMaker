/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ab48a */

void FUN_1800ab48a(int *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 local_1b8 [56];
  undefined1 local_180 [56];
  undefined1 local_148 [56];
  char *local_110;
  undefined8 local_108;
  undefined8 local_100;
  char *local_f8;
  char *local_f0;
  undefined1 local_e8 [32];
  undefined8 local_c8;
  char *local_c0;
  char *local_b8;
  int local_a8 [8];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar1 = FUN_180097ab4(param_2,"pages");
  if (cVar1 == '\0') {
    FUN_180001e92(&local_c8,"events");
    FUN_180001e92(local_a8,"pages");
    local_68 = "Key \'{}\' for object \'{}\' not found in patch";
    local_60 = 0x2b;
    FUN_18006b4a7(local_88,&local_68,local_a8,&local_c8);
    local_100 = 0x2600000180;
    local_f8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_f0 = "void __cdecl Event::Patch(const nlohmann::ordered_json &)";
    FUN_180072a20(local_e8);
    FUN_1800b1004(&local_68);
    FUN_18006f972(local_1b8,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_1b8,&DAT_1803a63b0);
  }
  cVar1 = FUN_180097ab4(param_2,&DAT_18036a525);
  if (cVar1 != '\0') {
    uVar2 = FUN_18008d862(param_2,&DAT_18036a525);
    local_68 = (char *)((ulonglong)local_68._4_4_ << 0x20);
    FUN_180097ca8(&DAT_1802b0ea8,uVar2,&local_68);
    local_a8[0] = (int)local_68;
    if ((int)local_68 == *param_1) {
      lVar3 = *(longlong *)(param_1 + 0xc);
      if (*(longlong *)(param_1 + 0xe) != lVar3) {
        uVar5 = 0;
        lVar4 = 0;
        do {
          uVar2 = FUN_18008d862(param_2,"pages");
          uVar2 = FUN_18008d5cc(uVar2,uVar5);
          FUN_1800aba8e(lVar3 + lVar4,uVar2);
          uVar5 = uVar5 + 1;
          lVar3 = *(longlong *)(param_1 + 0xc);
          lVar4 = lVar4 + 0xa0;
        } while (uVar5 < (ulonglong)
                         ((*(longlong *)(param_1 + 0xe) - lVar3 >> 5) * -0x3333333333333333));
      }
      return;
    }
    local_c8 = 0x5d00000186;
    local_c0 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_b8 = "void __cdecl Event::Patch(const nlohmann::ordered_json &)";
    FUN_180072a20(local_88);
    local_110 = "{}Event ID mismatch in patch (expected {}, got {})";
    local_108 = 0x32;
    FUN_18007e521(&local_68,&local_110,local_88,param_1,local_a8);
    FUN_18006f972(local_148,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_148,&DAT_1803a63b0);
  }
  FUN_180001e92(&local_c8,"events");
  FUN_180001e92(local_a8,&DAT_18036a525);
  local_68 = "Key \'{}\' for object \'{}\' not found in patch";
  local_60 = 0x2b;
  FUN_18006b4a7(local_88,&local_68,local_a8,&local_c8);
  local_100 = 0x2300000181;
  local_f8 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
  local_f0 = "void __cdecl Event::Patch(const nlohmann::ordered_json &)";
  FUN_180072a20(local_e8);
  FUN_1800b1004(&local_68);
  FUN_18006f972(local_180,&local_68);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_180,&DAT_1803a63b0);
}

