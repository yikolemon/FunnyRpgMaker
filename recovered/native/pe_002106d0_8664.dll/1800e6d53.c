/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e6d53 */

bool FUN_1800e6d53(void)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_18 = _Xtime_get_ticks();
  local_18 = local_18 / 10000000;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  thunk_FUN_18027f518(&local_48,&local_18);
  bVar2 = SBORROW4(local_38._4_4_,0x7f);
  iVar1 = local_38._4_4_ + -0x7f;
  if (local_38._4_4_ == 0x7f) {
    bVar2 = SBORROW4((int)local_38,1);
    iVar1 = (int)local_38 + -1;
    if ((int)local_38 == 1) {
      bVar2 = 10 < uStack_40._4_4_;
      goto LAB_1800e6dd2;
    }
  }
  bVar2 = bVar2 == iVar1 < 0;
LAB_1800e6dd2:
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_68)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_68);
}

