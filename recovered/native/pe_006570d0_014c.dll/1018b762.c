/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018b762 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1018b762(int param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,uint param_7)

{
  char *local_30;
  undefined8 *local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_30;
  if ((param_7 & 0x8000000f) == 0) {
    if (0xffffff < param_4) {
      if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
        local_14 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) + _UNK_103013b4,
                            (float)*param_3 + _DAT_103013b0);
      }
      else {
        local_14 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) + _UNK_102b94e4,
                            (float)*param_3 + _DAT_102b94e0);
      }
      local_2c = &local_14;
      local_1c = CONCAT44((float)((ulonglong)*param_2 >> 0x20) + DAT_102b89c0._4_4_,
                          (float)*param_2 + (float)DAT_102b89c0);
      local_30 = (char *)&local_1c;
      local_24 = param_7;
      local_28 = param_5;
      FUN_1018ae44();
      local_2c = *(undefined8 **)(param_1 + 0x38);
      local_30 = *(char **)(param_1 + 0x40);
      local_24 = param_6;
      local_28 = param_4;
      local_20 = 0x200;
      FUN_101888a4();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  else {
    local_30 = "Incorrect parameter. Did you swap \'thickness\' and \'flags\'?";
    FUN_100fcef5();
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

