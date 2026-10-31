/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140137655 */

undefined8 FUN_140137655(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  ushort *puVar3;
  undefined1 auStack_78 [38];
  undefined2 local_52;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  FUN_140137801(local_50,(ulonglong)*(byte *)(param_2 + 3) + param_2 +
                         (ulonglong)*(byte *)(param_2 + 2) * 0x100);
  puVar3 = (ushort *)(param_2 + 6);
  do {
    cVar1 = FUN_140137840(local_50,&local_52);
    if (cVar1 == '\0') {
      uVar2 = 0;
      break;
    }
    uVar2 = FUN_1401378b0(local_52,*puVar3 << 8 | *puVar3 >> 8,param_1,param_3);
    puVar3 = puVar3 + 1;
  } while ((int)uVar2 == 0);
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStack_78);
  }
  return uVar2;
}

