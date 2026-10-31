/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180121b86 */

int FUN_180121b86(int param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_88;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)FUN_18010f8ee();
  }
  local_58[0] = 0;
  FUN_180116a8b(param_2 + 8,0);
  FUN_18010ca41(param_2 + 10,0);
  FUN_180116b67(*param_2);
  FUN_1800fead5(local_58,0x20,"WindowOverViewport_%08X",*param_2);
  FUN_180101870(3,0);
  FUN_180101870(4,0);
  local_60 = 0;
  FUN_180101bbb(2);
  FUN_18010ca66(local_58,0,(param_3 & 8) * 0x10 + (param_3 & 1) * 0x200 + 0xa2027);
  FUN_180101ccb(3);
  if (param_1 == 0) {
    param_1 = FUN_18011837d("DockSpace");
  }
  local_60 = 0;
  FUN_180121774(param_1,&local_60,param_3,param_4);
  FUN_18010f900();
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_88)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_88);
}

