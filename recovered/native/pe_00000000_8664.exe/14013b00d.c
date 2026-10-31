/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013b00d */

undefined2 FUN_14013b00d(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  cVar2 = FUN_14013b15f((ulonglong)*(byte *)(param_1 + 3) + param_1 +
                        (ulonglong)*(byte *)(param_1 + 2) * 0x100,param_2,&local_1c);
  if ((cVar2 == '\0') ||
     (uVar1 = *(ushort *)(param_1 + 4), uVar3 = uVar1 << 8 | uVar1 >> 8,
     param_2 < param_1 + (ulonglong)uVar3 * 2 + 6)) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT11((char)uVar1,uVar3 == local_1c);
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

