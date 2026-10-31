/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802131d5 */

void FUN_1802131d5(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_180212ed6();
  local_30 = (char *)*param_1;
  pcVar5 = (char *)param_1[2];
  if (pcVar5 <= local_30) goto LAB_18021331f;
  cVar1 = *local_30;
  if (cVar1 == '{') {
    *(undefined4 *)(param_2 + 2) = 3;
    *param_2 = local_30;
    iVar3 = FUN_180216355(&local_30,pcVar5);
LAB_1802132c6:
    pcVar4 = local_30;
    if (iVar3 == 0) goto LAB_180213300;
LAB_1802132fa:
    local_30 = pcVar4;
    pcVar5 = (char *)param_2[1];
  }
  else {
    if (cVar1 == '[') {
      *(undefined4 *)(param_2 + 2) = 3;
      *param_2 = local_30;
      *param_1 = local_30 + 1;
      FUN_180212ed6(param_1);
      pcVar4 = (char *)*param_1;
      if (pcVar4 < pcVar5) {
        iVar3 = 1;
        do {
          if (*(int *)(param_1 + 3) != 0) break;
          if (*pcVar4 == ']') {
            iVar6 = iVar3 + -1;
            bVar2 = iVar3 < 1;
            iVar3 = iVar6;
            if (iVar6 == 0 || bVar2) {
              local_30 = pcVar4 + 1;
              param_2[1] = local_30;
              goto LAB_180213317;
            }
          }
          else if (*pcVar4 == '[') {
            iVar3 = iVar3 + 1;
          }
          FUN_180212edf(param_1);
          FUN_180212ed6(param_1);
          pcVar4 = (char *)*param_1;
        } while (pcVar4 < pcVar5);
      }
      goto LAB_1802132fa;
    }
    if (cVar1 == '(') {
      *(undefined4 *)(param_2 + 2) = 2;
      *param_2 = local_30;
      iVar3 = FUN_180216436(&local_30,pcVar5);
      goto LAB_1802132c6;
    }
    *param_2 = local_30;
    *(uint *)(param_2 + 2) = (uint)(*local_30 == '/') * 3 + 1;
    FUN_180212edf(param_1);
    local_30 = (char *)*param_1;
    pcVar4 = local_30;
    if (*(int *)(param_1 + 3) != 0) goto LAB_1802132fa;
LAB_180213300:
    param_2[1] = local_30;
    pcVar5 = local_30;
  }
  if (pcVar5 == (char *)0x0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 2) = 0;
  }
LAB_180213317:
  *param_1 = local_30;
LAB_18021331f:
  if (DAT_180402640 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
  }
  return;
}

