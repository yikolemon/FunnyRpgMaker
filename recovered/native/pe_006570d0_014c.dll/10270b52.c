/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10270b52 */

undefined8 FUN_10270b52(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_30 [44];
  
  uStack_3c = 0;
  uStack_40 = 0x10270b66;
  FUN_1025eb50();
  uStack_3c = 0;
  uStack_40 = param_3;
  make_c_string_character_source<>(auStack_48,param_1,param_2);
  uVar1 = FUN_10270de9(local_30);
  uStack_3c = 0x10270b96;
  FUN_1025ebb0();
  return uVar1;
}

