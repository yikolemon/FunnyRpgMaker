/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a7458 */

void __fastcall FUN_100a7458(int *param_1)

{
  char cVar1;
  char **ppcVar2;
  char **local_13c;
  char **local_138;
  char **ppcStack_134;
  char **local_130;
  int *local_12c;
  char **local_128;
  char *local_124 [9];
  char *local_100 [9];
  char *local_dc [9];
  undefined4 local_b8;
  undefined4 local_b4;
  char *local_b0;
  char *local_ac;
  char *local_a8 [6];
  undefined4 local_90;
  undefined4 local_8c;
  char *local_88;
  char *local_84;
  char *local_78 [6];
  char *local_60 [6];
  char *local_48;
  undefined4 uStack_44;
  int *local_40;
  char *local_3c;
  undefined4 uStack_38;
  undefined1 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_13c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4330;
  local_1c = ExceptionList;
  local_13c = (char **)0x10333dd3;
  ExceptionList = &local_1c;
  cVar1 = FUN_10095cc4();
  if (cVar1 == '\0') {
    local_13c = (char **)0x1033291e;
    FUN_10001f66();
    local_14 = 0;
    local_13c = (char **)0x10333dd3;
    FUN_10001f66();
    local_14 = 1;
    local_3c = "Key \'{}\' for object \'{}\' not found in patch";
    uStack_38 = 0x2b;
    local_138 = (char **)0x10337384;
    ppcStack_134 = (char **)0x2b;
    local_12c = &local_90;
    local_130 = local_60;
    local_13c = local_78;
    FUN_1006b520();
    local_14 = 2;
    local_b8 = 0x180;
    local_b4 = 0x26;
    local_b0 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_ac = "void __thiscall Event::Patch(const nlohmann::ordered_json &)";
    _local_138 = CONCAT44(ppcStack_134,&local_b8);
    local_13c = local_a8;
    FUN_10072232();
    local_14 = 3;
    local_13c = (char **)CONCAT31(local_13c._1_3_,local_24);
    ppcStack_134 = local_78;
    local_138 = local_a8;
    FUN_100ac9f0();
    local_14 = 4;
    local_13c = &local_3c;
    FUN_1006f6d8();
    local_13c = local_124;
    _local_138 = CONCAT44(ppcStack_134,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0();
  }
  local_13c = (char **)&DAT_1033a3fb;
  cVar1 = FUN_10095cc4();
  if (cVar1 != '\0') {
    local_13c = (char **)&DAT_1033a3fb;
    local_13c = (char **)FUN_1008c8aa();
    local_138 = &local_3c;
    local_3c = (char *)0x0;
    FUN_10095de8();
    local_60[0] = local_3c;
    if (local_3c == (char *)*param_1) {
      if (param_1[10] != param_1[9]) {
        ppcVar2 = (char **)0x0;
        local_40 = param_1;
        do {
          local_13c = (char **)0x10333dd3;
          FUN_1008c8aa();
          local_13c = ppcVar2;
          local_13c = (char **)FUN_1008c5a4();
          FUN_100a792a();
          ppcVar2 = (char **)((int)ppcVar2 + 1);
        } while (ppcVar2 < (char **)((local_40[10] - local_40[9] >> 5) * -0x55555555));
      }
      ExceptionList = local_1c;
      return;
    }
    local_90 = 0x186;
    local_8c = 0x5d;
    local_88 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
    local_84 = "void __thiscall Event::Patch(const nlohmann::ordered_json &)";
    _local_138 = CONCAT44(ppcStack_134,&local_90);
    local_13c = local_78;
    FUN_10072232();
    local_14 = 10;
    local_48 = "{}Event ID mismatch in patch (expected {}, got {})";
    uStack_44 = 0x32;
    local_138 = (char **)0x10347339;
    ppcStack_134 = (char **)0x32;
    local_128 = local_60;
    local_13c = &local_3c;
    local_130 = local_78;
    local_12c = param_1;
    FUN_1007d8ca();
    local_14 = 0xb;
    local_13c = &local_3c;
    FUN_1006f6d8();
    local_13c = local_dc;
    _local_138 = CONCAT44(ppcStack_134,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0();
  }
  local_13c = (char **)0x1033291e;
  FUN_10001f66();
  local_14 = 5;
  local_13c = (char **)&DAT_1033a3fb;
  FUN_10001f66();
  local_14 = 6;
  local_3c = "Key \'{}\' for object \'{}\' not found in patch";
  uStack_38 = 0x2b;
  local_138 = (char **)0x10337384;
  ppcStack_134 = (char **)0x2b;
  local_12c = &local_90;
  local_130 = local_60;
  local_13c = local_78;
  FUN_1006b520();
  local_14 = 7;
  local_b8 = 0x181;
  local_b4 = 0x23;
  local_b0 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Map.hpp";
  local_ac = "void __thiscall Event::Patch(const nlohmann::ordered_json &)";
  _local_138 = CONCAT44(ppcStack_134,&local_b8);
  local_13c = local_a8;
  FUN_10072232();
  local_14 = 8;
  local_13c = (char **)CONCAT31(local_13c._1_3_,local_24);
  ppcStack_134 = local_78;
  local_138 = local_a8;
  FUN_100ac9f0();
  local_14 = 9;
  local_13c = &local_3c;
  FUN_1006f6d8();
  local_13c = local_100;
  _local_138 = CONCAT44(ppcStack_134,&DAT_10367ca8);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0();
}

