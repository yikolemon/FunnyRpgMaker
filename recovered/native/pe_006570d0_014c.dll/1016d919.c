/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016d919 */

undefined1 __fastcall
FUN_1016d919(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 uVar1;
  int *local_78;
  char *local_74;
  undefined4 uStack_70;
  undefined1 *local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  int local_5c;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  char *local_48;
  undefined4 uStack_44;
  undefined4 local_40 [6];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_78;
  local_18 = 0xffffffff;
  local_1c = &LAB_10180130;
  local_20 = ExceptionList;
  local_4c = param_4;
  local_50 = param_3;
  ExceptionList = &local_20;
  local_54 = param_2;
  FUN_100446d6();
  local_18 = 0;
  local_48 = "{},{},{}";
  uStack_44 = 8;
  local_74 = "{},{},{}";
  uStack_70 = 8;
  local_64 = param_5;
  local_68 = &local_50;
  local_6c = local_58;
  local_78 = local_40;
  FUN_1017cf7c();
  local_18 = 1;
  _local_74 = CONCAT44(uStack_70,local_40);
  local_78 = &local_5c;
  FUN_1006292c();
  local_18 = 0xffffffff;
  FUN_10001fee();
  if (local_5c == DAT_1039d9b0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(local_5c + 0x20);
  }
  local_78 = (int *)&DAT_1038a098;
  FUN_1022c200();
  ExceptionList = local_20;
  return uVar1;
}

