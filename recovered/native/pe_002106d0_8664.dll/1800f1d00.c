/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f1d00 */

void FUN_1800f1d00(undefined4 param_1)

{
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_78;
  FUN_180121e5d();
  FUN_180121d97(param_1,0x400);
  FUN_180110cf0(&local_50);
  FUN_180121d5c(param_1,local_50);
  local_58 = &local_40;
  FUN_180121fec(param_1,0,DAT_1802dbb70,&local_34);
  local_58 = &local_3c;
  FUN_180121fec(local_34,2,DAT_1802dbb2c,&local_38);
  local_58 = &local_44;
  FUN_180121fec(local_40,0,DAT_1802dc538,&local_40);
  FUN_180121cbb(&DAT_18035f636,local_38);
  FUN_180121cbb(&DAT_18035f315,local_3c);
  FUN_180121cbb(&DAT_18035f250,local_40);
  FUN_180121cbb(&DAT_18035f1fc,local_44);
  FUN_180122131(param_1);
  FUN_18011d4cf();
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_78);
}

