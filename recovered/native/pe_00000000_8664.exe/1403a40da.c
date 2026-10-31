/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a40da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403a40da(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                  undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  if ((param_7 & 0x8000000f) == 0) {
    if (0xffffff < param_4) {
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
        local_38 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) +
                            (float)s_0123456789abcdefghijklmnopqrstuv_140538820._4_4_,
                            (float)*param_3 +
                            (float)s_0123456789abcdefghijklmnopqrstuv_140538820._0_4_);
      }
      else {
        local_38 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) + _UNK_1404f0504,
                            (float)*param_3 + _DAT_1404f0500);
      }
      local_40 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) + _UNK_1404efa44,
                          (float)*param_2 + _DAT_1404efa40);
      local_58 = param_7;
      FUN_1403a37f6(param_1,&local_40,&local_38,param_5);
      local_58 = param_6;
      local_50 = 0x200;
      FUN_1403a1124(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4)
      ;
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    if (ram0x000140613b10 == (local_30 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
  else if (ram0x000140613b10 == (local_30 ^ (ulonglong)auStack_78)) {
    FUN_140312b68("id string: control character U+0019 (EM) must be escaped to \\u0019");
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_30 ^ (ulonglong)auStack_78);
}

