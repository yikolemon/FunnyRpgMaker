/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140038f55 */

undefined2 FUN_140038f55(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  uVar4 = FUN_1400390a7((ushort *)
                        ((ulonglong)*(byte *)(param_1 + 3) + param_1 +
                        (ulonglong)*(byte *)(param_1 + 2) * 0x100),param_2,&local_1c);
  if (((char)uVar4 == '\0') ||
     (uVar1 = *(ushort *)(param_1 + 4), uVar2 = uVar1 << 8 | uVar1 >> 8,
     param_2 < (ushort *)(param_1 + (ulonglong)uVar2 * 2 + 6))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT11((char)uVar1,uVar2 == local_1c);
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

