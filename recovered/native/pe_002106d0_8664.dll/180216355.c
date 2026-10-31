/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180216355 */

int FUN_180216355(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  byte *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  pbVar4 = (byte *)*param_1;
  local_30 = pbVar4;
  iVar3 = 0;
  if (pbVar4 < param_2) {
    iVar5 = 0;
    do {
      bVar1 = *local_30;
      if (bVar1 < 0x3c) {
        if (bVar1 == 0x25) {
          FUN_180216590(&local_30,param_2);
        }
        else if (bVar1 == 0x28) {
          iVar2 = FUN_180216436(&local_30,param_2);
          goto LAB_1802163df;
        }
LAB_1802163dd:
        iVar2 = 0;
      }
      else if (bVar1 == 0x3c) {
        iVar2 = FUN_1802164d3(&local_30,param_2);
      }
      else {
        if (bVar1 != 0x7d) {
          if (bVar1 == 0x7b) {
            iVar5 = iVar5 + 1;
          }
          goto LAB_1802163dd;
        }
        iVar2 = 0;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          pbVar4 = local_30 + 1;
          iVar3 = 0;
          goto LAB_1802163ff;
        }
      }
LAB_1802163df:
      pbVar4 = local_30 + 1;
      local_30 = pbVar4;
    } while ((pbVar4 < param_2) && (iVar2 == 0));
    iVar3 = 3;
    if (iVar5 == 0) {
      iVar3 = iVar2;
    }
  }
LAB_1802163ff:
  *param_1 = pbVar4;
  if (DAT_180402640 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
  }
  return iVar3;
}

