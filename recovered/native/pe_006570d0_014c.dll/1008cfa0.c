/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008cfa0 */

void __thiscall FUN_1008cfa0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *local_1b4;
  undefined1 *local_1b0;
  wchar_t *local_1ac;
  undefined4 ***local_1a8;
  undefined4 ***pppuStack_1a4;
  undefined1 **local_1a0;
  undefined4 ***local_19c;
  undefined1 **local_198;
  int local_194;
  int local_190 [7];
  int local_174;
  undefined4 ***local_170 [5];
  uint local_15c;
  wchar_t *local_158;
  undefined4 uStack_154;
  wchar_t *local_150;
  undefined4 uStack_14c;
  int local_148;
  undefined4 local_144;
  undefined1 local_130 [24];
  undefined1 local_118 [188];
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  char *local_50;
  undefined1 local_4c [36];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c3760;
  local_20 = ExceptionList;
  local_19c = *(undefined4 ****)(param_1 + 0x3c);
  local_174 = *(int *)(param_1 + 0x40);
  ExceptionList = &local_20;
  while( true ) {
    if (local_19c == (undefined4 ***)local_174) {
      ExceptionList = local_20;
      return;
    }
    local_24 = (undefined1 *)&local_1b4;
    local_198 = &local_1b0;
    local_194 = (int)local_19c;
    FUN_10003728((int)local_19c + 0x1c);
    local_1b4 = local_118;
    local_18 = 0xffffffff;
    FUN_1008e3df();
    local_18 = 1;
    local_1a0 = (undefined1 **)(local_194 + 4);
    local_150 = L"{}_{}";
    uStack_14c = 5;
    local_1a8 = (undefined4 ***)0x10356120;
    pppuStack_1a4 = (undefined4 ***)0x5;
    local_19c = (undefined4 ***)local_118;
    local_1ac = (wchar_t *)local_130;
    local_1b0 = (undefined1 *)0x1008d082;
    local_198 = local_1a0;
    local_24 = (undefined1 *)&local_198;
    FUN_1008e37e();
    local_18 = 0xffffffff;
    local_19c = (undefined4 ***)0x1008d09b;
    FUN_10001134();
    local_18 = 2;
    local_19c = (undefined4 ***)0x0;
    local_1a0 = (undefined1 **)local_130;
    pppuStack_1a4 = (undefined4 ***)0x1008d0b6;
    FUN_1006a7d0();
    local_18 = 9;
    local_19c = (undefined4 ***)local_118;
    local_1a0 = (undefined1 **)param_2;
    pppuStack_1a4 = local_170;
    local_1a8 = (undefined4 ***)0x1008d0d4;
    FUN_10001cfb();
    local_18 = 0xffffffff;
    local_19c = (undefined4 ***)0x1008d0ed;
    FUN_10001f04();
    local_18 = 3;
    local_19c = (undefined4 ***)0x10335cfc;
    local_1a0 = (undefined1 **)0x1008d104;
    FUN_1007da60();
    local_19c = (undefined4 ***)0x1008d109;
    FUN_10002303();
    local_190[0] = 0;
    local_190[1] = 0xffff;
    local_1a8 = local_170;
    if (7 < local_15c) {
      local_1a8 = local_170[0];
    }
    local_19c = (undefined4 ***)0xffffffff;
    local_1a0 = (undefined1 **)0x3;
    local_1ac = (wchar_t *)0x1008d134;
    pppuStack_1a4 = (undefined4 ***)local_118;
    local_1a0 = (undefined1 **)FUN_10228d20();
    pppuStack_1a4 = (undefined4 ***)0x1008d141;
    local_19c = (undefined4 ***)local_118;
    local_190[2] = (int)local_1a0;
    FUN_100025ec();
    iVar2 = local_190[2];
    local_19c = (undefined4 ***)0x1008d149;
    local_144 = FUN_10002303();
    iVar1 = local_190[0];
    local_148 = iVar2;
    if (local_190[0] == 0) break;
    local_19c = (undefined4 ***)0x1008d15f;
    FUN_10002303();
    if (iVar1 == 1) goto LAB_1008d222;
    local_19c = (undefined4 ***)0x1;
    local_1a0 = (undefined1 **)0x40;
    pppuStack_1a4 = (undefined4 ***)0x1;
    local_1a8 = local_170;
    local_1ac = L"자肆\x01܀";
    FUN_10080870();
    local_18 = 7;
    local_19c = (undefined4 ***)0x0;
    local_1a0 = (undefined1 **)0x1008d193;
    FUN_10080804();
    local_18 = 8;
    local_19c = (undefined4 ***)local_190;
    local_1a0 = (undefined1 **)local_118;
    pppuStack_1a4 = (undefined4 ***)0x1008d1ad;
    FUN_100808f9();
    local_19c = (undefined4 ***)0x1008d1bb;
    FUN_10080aea();
    local_19c = (undefined4 ***)local_190;
    local_1a0 = (undefined1 **)0x1008d1c8;
    FUN_10094e06();
    local_18 = 0xffffffff;
    local_19c = (undefined4 ***)0x1008d1db;
    FUN_1007f222();
    local_19c = (undefined4 ***)0x1008d1e6;
    FUN_10080b20();
    local_19c = (undefined4 ***)0x1008d1ee;
    FUN_10001f04();
    local_19c = (undefined4 ***)0x1008d1f6;
    FUN_10001134();
    local_19c = (undefined4 ***)(local_194 + 0xa44);
  }
  if (iVar2 != 0) {
    local_19c = local_170;
    local_1a0 = (undefined1 **)&local_148;
    pppuStack_1a4 = (undefined4 ***)0x10332792;
                    /* WARNING: Subroutine does not return */
    local_1a8 = (undefined4 ***)&UNK_1008d2f8;
    FUN_1000227a();
  }
LAB_1008d222:
  local_19c = local_170;
  local_1a0 = (undefined1 **)0x1008d22e;
  FUN_10003728();
  local_18 = 4;
  local_19c = (undefined4 ***)&local_5c;
  local_5c = 0x164;
  local_58 = 0x5d;
  local_54 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
  ;
  local_50 = "virtual void __thiscall CommonEvents::Patch(const std::filesystem::path &)";
  local_1a0 = (undefined1 **)&local_148;
  pppuStack_1a4 = (undefined4 ***)0x1008d264;
  FUN_10080602();
  local_18 = 5;
  local_158 = L"{}Patch file not found for CommonEvent ID {}: {}";
  uStack_154 = 0x30;
  local_1ac = L"{}Patch file not found for CommonEvent ID {}: {}";
  local_1a8 = (undefined4 ***)0x30;
  local_19c = (undefined4 ***)local_190;
  local_1a0 = local_198;
  pppuStack_1a4 = (undefined4 ***)&local_148;
  local_1b0 = local_118;
  local_1b4 = (undefined1 *)0x1008d2b1;
  FUN_10094da0();
  local_18 = 6;
  local_19c = (undefined4 ***)local_118;
  local_1a0 = (undefined1 **)0x1008d2d1;
  FUN_1008069c();
  local_19c = (undefined4 ***)&DAT_10367ca8;
  local_1a0 = (undefined1 **)local_4c;
                    /* WARNING: Subroutine does not return */
  pppuStack_1a4 = (undefined4 ***)&UNK_1008d2e3;
  FUN_102586e0();
}

