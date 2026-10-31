/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180174a1e */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_180174a1e(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_88b8 [32];
  undefined4 local_8898;
  undefined4 local_8894;
  longlong local_8890;
  undefined8 local_8888;
  undefined8 local_8880;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_88b8;
  FUN_1802a89a0(&local_8898,0,0x8870);
  lVar1 = FUN_1801797b9(param_1,&local_8898);
  if ((lVar1 == param_1) || (lVar1 == 0)) {
    if (local_8890 != 0) {
      thunk_FUN_180290e40();
    }
    lVar1 = 0;
  }
  else {
    *param_2 = local_8898;
    *param_3 = local_8894;
  }
  thunk_FUN_180290e40(local_8880);
  thunk_FUN_180290e40(local_8888);
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_88b8)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_88b8);
}

