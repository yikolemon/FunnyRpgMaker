/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180093bcc */

ushort FUN_180093bcc(longlong param_1,undefined1 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ushort local_1a [8];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_1a[1] = 0;
  local_1a[2] = 0;
  local_1a[3] = 0;
  local_1a[4] = 0;
  local_28 = param_1 + 0x30;
  local_9 = param_2;
  iVar2 = FUN_18023ec80(local_1a,&local_9,1);
  uVar1 = 0xffff;
  if (-1 < iVar2) {
    uVar1 = local_1a[0];
  }
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}

