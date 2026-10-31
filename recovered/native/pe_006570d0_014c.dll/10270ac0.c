/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10270ac0 */

undefined4 FUN_10270ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_30 [44];
  
  uStack_38 = 0;
  uStack_3c = 0x10270ad3;
  FUN_1025eb50();
  uStack_38 = 1;
  uStack_3c = param_3;
  make_c_string_character_source<>(auStack_44,param_1,param_2);
  uVar1 = FUN_10270b9e(local_30);
  uStack_38 = 0x10270b01;
  FUN_1025ebb0();
  return uVar1;
}

