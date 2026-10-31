/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006051b */

void FUN_14006051b(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  byte *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[2];
  local_30 = pbVar2;
  FUN_1400638f2(&local_30,pbVar3);
  iVar4 = 0;
  pbVar6 = local_30;
  if (pbVar3 <= local_30) goto LAB_140060645;
  bVar1 = *local_30;
  if (bVar1 < 0x3e) {
    if (bVar1 == 0x28) {
      uVar5 = FUN_140063a72((ulonglong *)&local_30,pbVar3);
      iVar4 = (int)uVar5;
      pbVar6 = local_30;
      goto LAB_140060645;
    }
    if (bVar1 == 0x2f) {
      local_30 = local_30 + 1;
    }
    else if (bVar1 == 0x3c) {
      if ((pbVar3 <= local_30 + 1) || (local_30[1] != 0x3c)) {
        uVar5 = FUN_140063b0f((longlong *)&local_30,pbVar3);
        iVar4 = (int)uVar5;
        pbVar6 = local_30;
        goto LAB_140060645;
      }
      goto LAB_1400605e2;
    }
LAB_1400605fa:
    pbVar6 = local_30;
    if (local_30 < pbVar3) {
      do {
        bVar1 = *local_30;
        pbVar6 = local_30;
        if ((((ulonglong)bVar1 < 0x3f) &&
            ((0x5000832100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
           ((bVar1 - 0x5b < 0x23 && ((0x500000005U >> ((ulonglong)(bVar1 - 0x5b) & 0x3f) & 1) != 0))
           )) break;
        local_30 = local_30 + 1;
        pbVar6 = pbVar3;
      } while (local_30 != pbVar3);
    }
  }
  else {
    if (0x5c < bVar1) {
      if (bVar1 == 0x7b) {
        iVar4 = FUN_140063991(&local_30,pbVar3);
        pbVar6 = local_30;
        goto LAB_140060645;
      }
      if (bVar1 == 0x5d) goto LAB_1400605b3;
      goto LAB_1400605fa;
    }
    if (bVar1 == 0x3e) {
      pbVar6 = local_30 + 1;
      iVar4 = 3;
      if ((pbVar3 <= pbVar6) || (*pbVar6 != 0x3e)) goto LAB_140060645;
LAB_1400605e2:
      pbVar6 = local_30 + 2;
    }
    else {
      if (bVar1 != 0x5b) goto LAB_1400605fa;
LAB_1400605b3:
      pbVar6 = local_30 + 1;
    }
  }
  iVar4 = 0;
LAB_140060645:
  local_30 = pbVar6;
  iVar7 = 3;
  if (local_30 != pbVar2) {
    iVar7 = iVar4;
  }
  pbVar6 = local_30;
  if (pbVar3 < local_30) {
    pbVar6 = pbVar3;
  }
  if (pbVar3 <= local_30) {
    iVar7 = iVar4;
  }
  *(int *)(param_1 + 3) = iVar7;
  *param_1 = pbVar6;
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStack_58);
  }
  return;
}

