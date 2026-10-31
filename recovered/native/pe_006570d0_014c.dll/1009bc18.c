/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009bc18 */

undefined1 * __thiscall FUN_1009bc18(undefined1 *param_1,int *param_2,undefined4 *param_3)

{
  undefined1 local_98 [36];
  undefined4 local_74;
  undefined4 local_70;
  char *local_6c;
  char *local_68;
  undefined1 local_64 [24];
  undefined1 local_4c [24];
  char *local_34;
  undefined4 uStack_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_98;
  local_18 = &LAB_100c3d60;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  *(int *)(param_1 + 4) = *param_2;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_2c = param_1 + 0x10;
  local_14 = 1;
  local_28 = param_1 + 0x38;
  local_24 = param_1;
  FUN_10072afc();
  local_14 = 2;
  if (*param_2 != 0) {
    ExceptionList = local_1c;
    return local_24;
  }
  local_74 = 0xa1;
  local_70 = 0x60;
  local_6c = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
  ;
  local_68 = "__thiscall FileCoder::FileCoder(const Mode &, const WolfFileType &)";
  FUN_10072232();
  local_14 = 3;
  local_34 = "{}FileCoder: READ mode requires a filename or buffer.";
  uStack_30 = 0x35;
  FUN_100721d6(local_64,0x3510341c75,local_4c);
  local_14 = 4;
  FUN_1006f6d8(local_64);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0();
}

