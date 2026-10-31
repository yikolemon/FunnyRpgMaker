/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a869e */

void FUN_1800a869e(longlong param_1)

{
  undefined1 local_b0 [56];
  undefined8 local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 4) == 0) {
    FUN_1800776a8(param_1 + 0x10);
    return;
  }
  local_78 = 0x5c000000ed;
  local_70 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
  ;
  local_68 = "uint8_t __cdecl FileCoder::At(const uint32_t &) const";
  FUN_180072a20(local_30);
  local_60 = "{}FileCoder: At() is only available in READ mode.";
  local_58 = 0x31;
  FUN_1800729a4(local_50,&local_60,local_30);
  FUN_18006f972(local_b0,local_50);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_b0,&DAT_1803a63b0);
}

