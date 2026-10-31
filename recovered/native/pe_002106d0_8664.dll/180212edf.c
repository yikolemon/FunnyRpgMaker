/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180212edf */

void FUN_180212edf(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [40];
  byte *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[2];
  local_30 = pbVar2;
  FUN_1802162b6(&local_30,pbVar3);
  uVar4 = 0;
  pbVar5 = local_30;
  if (pbVar3 <= local_30) goto LAB_180213009;
  bVar1 = *local_30;
  if (bVar1 < 0x3e) {
    if (bVar1 == 0x28) {
      uVar4 = FUN_180216436(&local_30,pbVar3);
      pbVar5 = local_30;
      goto LAB_180213009;
    }
    if (bVar1 == 0x2f) {
      local_30 = local_30 + 1;
    }
    else if (bVar1 == 0x3c) {
      if ((pbVar3 <= local_30 + 1) || (local_30[1] != 0x3c)) {
        uVar4 = FUN_1802164d3(&local_30,pbVar3);
        pbVar5 = local_30;
        goto LAB_180213009;
      }
      goto LAB_180212fa6;
    }
LAB_180212fbe:
    pbVar5 = local_30;
    if (local_30 < pbVar3) {
      do {
        bVar1 = *local_30;
        pbVar5 = local_30;
        if ((((ulonglong)bVar1 < 0x3f) &&
            ((0x5000832100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
           ((bVar1 - 0x5b < 0x23 && ((0x500000005U >> ((ulonglong)(bVar1 - 0x5b) & 0x3f) & 1) != 0))
           )) break;
        local_30 = local_30 + 1;
        pbVar5 = pbVar3;
      } while (local_30 != pbVar3);
    }
  }
  else {
    if (0x5c < bVar1) {
      if (bVar1 == 0x7b) {
        uVar4 = FUN_180216355(&local_30,pbVar3);
        pbVar5 = local_30;
        goto LAB_180213009;
      }
      if (bVar1 == 0x5d) goto LAB_180212f77;
      goto LAB_180212fbe;
    }
    if (bVar1 == 0x3e) {
      pbVar5 = local_30 + 1;
      uVar4 = 3;
      if ((pbVar3 <= pbVar5) || (*pbVar5 != 0x3e)) goto LAB_180213009;
LAB_180212fa6:
      pbVar5 = local_30 + 2;
    }
    else {
      if (bVar1 != 0x5b) goto LAB_180212fbe;
LAB_180212f77:
      pbVar5 = local_30 + 1;
    }
  }
  uVar4 = 0;
LAB_180213009:
  local_30 = pbVar5;
  uVar6 = 3;
  if (local_30 != pbVar2) {
    uVar6 = uVar4;
  }
  pbVar5 = local_30;
  if (pbVar3 < local_30) {
    pbVar5 = pbVar3;
  }
  if (pbVar3 <= local_30) {
    uVar6 = uVar4;
  }
  *(undefined4 *)(param_1 + 3) = uVar6;
  *param_1 = pbVar5;
  if (DAT_180402640 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
  }
  return;
}

