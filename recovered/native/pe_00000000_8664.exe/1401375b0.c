/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401375b0 */

undefined8 FUN_1401375b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [38];
  ushort local_52;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar1 = *(ushort *)(param_2 + 4);
  FUN_140137801(local_50,(ulonglong)*(byte *)(param_2 + 3) + param_2 +
                         (ulonglong)*(byte *)(param_2 + 2) * 0x100);
  do {
    cVar2 = FUN_140137840(local_50,&local_52);
    if (cVar2 == '\0') {
      uVar3 = 0;
      break;
    }
    uVar3 = FUN_1401378b0(local_52,(uint)local_52 + (uint)(ushort)(uVar1 << 8 | uVar1 >> 8),param_1,
                          param_3);
  } while ((int)uVar3 == 0);
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStack_78);
  }
  return uVar3;
}

