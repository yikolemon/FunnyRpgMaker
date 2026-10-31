/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400354f8 */

undefined8 FUN_1400354f8(uint *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [38];
  ushort local_52;
  int local_50 [8];
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  uVar1 = *(ushort *)(param_2 + 4);
  FUN_140035749(local_50,(ushort *)
                         ((ulonglong)*(byte *)(param_2 + 3) + param_2 +
                         (ulonglong)*(byte *)(param_2 + 2) * 0x100));
  do {
    uVar2 = FUN_140035788(local_50,&local_52);
    if ((char)uVar2 == '\0') {
      uVar2 = 0;
      break;
    }
    uVar2 = FUN_1400357f8(local_52,(uint)local_52 + (uint)(ushort)(uVar1 << 8 | uVar1 >> 8),param_1,
                          param_3);
  } while ((int)uVar2 == 0);
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStack_78);
  }
  return uVar2;
}

