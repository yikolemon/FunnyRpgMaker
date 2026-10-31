/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005a0c0 */

ushort FUN_14005a0c0(longlong param_1,undefined1 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ushort local_1a [8];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_1a[1] = 0;
  local_1a[2] = 0;
  local_1a[3] = 0;
  local_1a[4] = 0;
  local_28 = param_1 + 0x30;
  local_9 = param_2;
  iVar2 = FUN_14018d830(local_1a,&local_9,1);
  uVar1 = 0xffff;
  if (-1 < iVar2) {
    uVar1 = local_1a[0];
  }
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_48)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_48);
}

