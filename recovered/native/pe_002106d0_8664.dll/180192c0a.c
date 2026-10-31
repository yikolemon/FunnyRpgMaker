/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180192c0a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180192c0a(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                  undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_78;
  if ((param_7 & 0x8000000f) == 0) {
    if (0xffffff < param_4) {
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
        local_38 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) + _UNK_180327354,
                            (float)*param_3 + _DAT_180327350);
      }
      else {
        local_38 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) + _UNK_1802df034,
                            (float)*param_3 + _DAT_1802df030);
      }
      local_40 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) + DAT_1802de570._4_4_,
                          (float)*param_2 + (float)DAT_1802de570);
      local_58 = param_7;
      FUN_180192326(param_1,&local_40,&local_38,param_5);
      local_58 = param_6;
      local_50 = 0x200;
      FUN_18018fc54(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4)
      ;
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
  else if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_78)) {
    FUN_180101698("Incorrect parameter. Did you swap \'thickness\' and \'flags\'?");
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_78);
}

