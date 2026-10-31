/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a4ca8 */

void __thiscall FUN_100a4ca8(int param_1,undefined4 param_2)

{
  undefined1 local_8c [36];
  undefined4 local_68;
  undefined4 local_64;
  char *local_60;
  char *local_5c;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  char *local_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_8c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c41e0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(int *)(param_1 + 4) == 0) {
    local_20 = local_8c;
    FUN_10076c78(param_2);
    ExceptionList = local_1c;
    return;
  }
  local_68 = 0xed;
  local_64 = 0x5c;
  local_60 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
  ;
  local_5c = "uint8_t __thiscall FileCoder::At(const uint32_t &) const";
  FUN_10072232();
  local_14 = 0;
  local_28 = "{}FileCoder: At() is only available in READ mode.";
  uStack_24 = 0x31;
  FUN_100721d6(local_40,0x31103447fb,local_58);
  local_14 = 1;
  FUN_1006f6d8(local_40);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0();
}

