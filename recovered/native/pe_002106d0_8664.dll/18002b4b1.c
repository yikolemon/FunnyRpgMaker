/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002b4b1 */

byte * FUN_18002b4b1(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  byte *local_48;
  byte *local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_78;
  bVar1 = *param_1;
  local_48 = param_1;
  if ((byte)(bVar1 - 0x30) < 10) {
    if (bVar1 == 0x30) {
      local_48 = param_1 + 1;
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_18002bb19(&local_48,param_2,0x7fffffff);
    }
    if ((local_48 == param_2) || ((*local_48 != 0x3a && (*local_48 != 0x7d)))) {
LAB_18002b592:
      local_49 = 1;
      FUN_180025c48(&local_40,"invalid format string");
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(&local_40,&DAT_180391580);
    }
    FUN_18002bb8a(*param_3,uVar2);
    *(undefined4 *)(param_3 + 1) = uVar2;
    pbVar5 = local_48;
  }
  else {
    if ((bVar1 != 0x5f) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) goto LAB_18002b592;
    pbVar4 = param_1 + 1;
    do {
      pbVar3 = pbVar4;
      pbVar5 = param_2;
      if (pbVar3 == param_2) break;
      bVar1 = *pbVar3;
      pbVar4 = pbVar3 + 1;
    } while ((((byte)(bVar1 - 0x30) < 10) || (bVar1 == 0x5f)) ||
            (pbVar5 = pbVar3, (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a));
    local_38 = (longlong)pbVar5 - (longlong)param_1;
    local_40 = param_1;
    uVar2 = FUN_18002bc04(*param_3);
    *(undefined4 *)(param_3 + 1) = uVar2;
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_78)) {
    return pbVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_78);
}

