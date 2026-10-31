/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180093b10 */

undefined1 *
FUN_180093b10(longlong param_1,undefined1 *param_2,undefined1 *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined2 local_52;
  undefined8 local_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_88;
  if (param_2 != param_3) {
    do {
      local_41 = *param_2;
      local_50 = 0;
      local_68 = param_1 + 0x30;
      iVar1 = FUN_18023ec80(&local_52,&local_41,1,&local_50);
      uVar2 = 0xffff;
      if (-1 < iVar1) {
        uVar2 = local_52;
      }
      *param_4 = uVar2;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != param_3);
  }
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_88)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_88);
}

