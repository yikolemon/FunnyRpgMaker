/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d1565 */

void __fastcall
FUN_100d1565(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 *local_78;
  undefined8 local_74;
  undefined1 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  char *local_5c;
  undefined4 uStack_58;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [24];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_78;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ddb90;
  local_20 = ExceptionList;
  local_64 = &local_48;
  local_44 = param_5;
  local_48 = param_4;
  local_68 = &local_50;
  local_4c = param_3;
  local_6c = local_54;
  local_5c = "$gameParty.{}[\"{}\"] = {};";
  uStack_58 = 0x19;
  local_74 = 0x191033d4bb;
  ExceptionList = &local_20;
  local_78 = local_40;
  local_50 = param_2;
  FUN_100d220d();
  local_18 = 0;
  local_78 = local_40;
  FUN_10014730();
  local_18 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_20;
  return;
}

