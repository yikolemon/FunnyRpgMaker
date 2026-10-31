/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140165bbf */

undefined8 FUN_140165bbf(longlong *param_1,byte *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined1 auStack_58 [40];
  byte *local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_30 = (byte *)(*param_1 + 1);
  if (local_30 < param_2) {
    do {
      FUN_1401659a2(&local_30,param_2);
      if ((param_2 <= local_30) ||
         ((9 < (byte)(*local_30 - 0x30) &&
          ((uVar1 = *local_30 - 0x41, 0x25 < uVar1 ||
           ((0x3f0000003fU >> ((ulonglong)uVar1 & 0x3f) & 1) == 0)))))) break;
      local_30 = local_30 + 1;
    } while (local_30 < param_2);
  }
  if ((param_2 <= local_30) || (uVar2 = 3, pbVar3 = local_30, *local_30 == 0x3e)) {
    pbVar3 = local_30 + 1;
    uVar2 = 0;
  }
  *param_1 = (longlong)pbVar3;
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

