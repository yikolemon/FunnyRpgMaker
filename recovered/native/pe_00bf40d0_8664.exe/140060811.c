/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140060811 */

void FUN_140060811(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  byte *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_140060512(param_1);
  local_30 = (byte *)*param_1;
  pbVar6 = (byte *)param_1[2];
  if (pbVar6 <= local_30) goto LAB_14006095b;
  bVar1 = *local_30;
  if (bVar1 == 0x7b) {
    *(undefined4 *)(param_2 + 2) = 3;
    *param_2 = local_30;
    iVar3 = FUN_140063991(&local_30,pbVar6);
LAB_140060902:
    pbVar5 = local_30;
    if (iVar3 == 0) goto LAB_14006093c;
LAB_140060936:
    local_30 = pbVar5;
    pbVar6 = (byte *)param_2[1];
  }
  else {
    if (bVar1 == 0x5b) {
      *(undefined4 *)(param_2 + 2) = 3;
      *param_2 = local_30;
      *param_1 = local_30 + 1;
      FUN_140060512(param_1);
      pbVar5 = (byte *)*param_1;
      if (pbVar5 < pbVar6) {
        iVar3 = 1;
        do {
          if (*(int *)(param_1 + 3) != 0) break;
          if (*pbVar5 == 0x5d) {
            iVar7 = iVar3 + -1;
            bVar2 = iVar3 < 1;
            iVar3 = iVar7;
            if (iVar7 == 0 || bVar2) {
              local_30 = pbVar5 + 1;
              param_2[1] = local_30;
              goto LAB_140060953;
            }
          }
          else if (*pbVar5 == 0x5b) {
            iVar3 = iVar3 + 1;
          }
          FUN_14006051b(param_1);
          FUN_140060512(param_1);
          pbVar5 = (byte *)*param_1;
        } while (pbVar5 < pbVar6);
      }
      goto LAB_140060936;
    }
    if (bVar1 == 0x28) {
      *(undefined4 *)(param_2 + 2) = 2;
      *param_2 = local_30;
      uVar4 = FUN_140063a72((ulonglong *)&local_30,pbVar6);
      iVar3 = (int)uVar4;
      goto LAB_140060902;
    }
    *param_2 = local_30;
    *(uint *)(param_2 + 2) = (uint)(*local_30 == 0x2f) * 3 + 1;
    FUN_14006051b(param_1);
    local_30 = (byte *)*param_1;
    pbVar5 = local_30;
    if (*(int *)(param_1 + 3) != 0) goto LAB_140060936;
LAB_14006093c:
    param_2[1] = local_30;
    pbVar6 = local_30;
  }
  if (pbVar6 == (byte *)0x0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 2) = 0;
  }
LAB_140060953:
  *param_1 = local_30;
LAB_14006095b:
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStack_58);
  }
  return;
}

