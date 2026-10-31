/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003559d */

undefined8 FUN_14003559d(uint *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  ushort *puVar2;
  undefined1 auStack_78 [38];
  ushort local_52;
  int local_50 [8];
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  FUN_140035749(local_50,(ushort *)
                         ((ulonglong)*(byte *)(param_2 + 3) + param_2 +
                         (ulonglong)*(byte *)(param_2 + 2) * 0x100));
  puVar2 = (ushort *)(param_2 + 6);
  do {
    uVar1 = FUN_140035788(local_50,&local_52);
    if ((char)uVar1 == '\0') {
      uVar1 = 0;
      break;
    }
    uVar1 = FUN_1400357f8(local_52,(uint)(ushort)(*puVar2 << 8 | *puVar2 >> 8),param_1,param_3);
    puVar2 = puVar2 + 1;
  } while ((int)uVar1 == 0);
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStack_78);
  }
  return uVar1;
}

