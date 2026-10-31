/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019461a */

void FUN_18019461a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_78;
  if (0xffffff < param_7) {
    if ((param_2[1] != *(longlong *)(param_1 + 0x78)) || (*param_2 != *(longlong *)(param_1 + 0x70))
       ) {
      local_48 = (undefined4)*param_2;
      uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_40 = (undefined4)param_2[1];
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_18018f78e(param_1);
      FUN_18018f8fc(param_1,6,4);
      local_50 = param_7;
      local_58 = param_6;
      FUN_18018fb38(param_1,param_3,param_4,param_5);
      if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_78)) {
        FUN_18018f848(param_1);
        return;
      }
      goto LAB_180194726;
    }
    FUN_18018f8fc(param_1,6,4);
    local_50 = param_7;
    local_58 = param_6;
    FUN_18018fb38(param_1,param_3,param_4,param_5);
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_78)) {
    return;
  }
LAB_180194726:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_78);
}

