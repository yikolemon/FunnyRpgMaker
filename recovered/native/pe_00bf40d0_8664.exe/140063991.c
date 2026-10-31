/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140063991 */

int FUN_140063991(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  byte *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  pbVar5 = (byte *)*param_1;
  iVar4 = 0;
  local_30 = pbVar5;
  if (pbVar5 < param_2) {
    iVar6 = 0;
    do {
      bVar1 = *local_30;
      if (bVar1 < 0x3c) {
        if (bVar1 == 0x25) {
          FUN_140063bcc(&local_30,(char *)param_2);
        }
        else if (bVar1 == 0x28) {
          uVar3 = FUN_140063a72((ulonglong *)&local_30,param_2);
          iVar2 = (int)uVar3;
          goto LAB_140063a1b;
        }
LAB_140063a19:
        iVar2 = 0;
      }
      else if (bVar1 == 0x3c) {
        uVar3 = FUN_140063b0f((longlong *)&local_30,param_2);
        iVar2 = (int)uVar3;
      }
      else {
        if (bVar1 != 0x7d) {
          if (bVar1 == 0x7b) {
            iVar6 = iVar6 + 1;
          }
          goto LAB_140063a19;
        }
        iVar2 = 0;
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
          pbVar5 = local_30 + 1;
          iVar4 = 0;
          goto LAB_140063a3b;
        }
      }
LAB_140063a1b:
      pbVar5 = local_30 + 1;
      local_30 = pbVar5;
    } while ((pbVar5 < param_2) && (iVar2 == 0));
    iVar4 = 3;
    if (iVar6 == 0) {
      iVar4 = iVar2;
    }
  }
LAB_140063a3b:
  *param_1 = pbVar5;
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStack_58);
  }
  return iVar4;
}

