/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10204d32 */

void FUN_10204d32(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&pcStack_18;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10204a96(param_1);
  pcStack_18 = (char *)*param_1;
  pcVar4 = (char *)param_1[2];
  if (pcVar4 <= pcStack_18) goto LAB_10204e49;
  cVar1 = *pcStack_18;
  if (cVar1 == '{') {
    param_2[2] = 3;
    *param_2 = pcStack_18;
    iVar2 = FUN_10207784();
LAB_10204e03:
    pcVar3 = pcStack_18;
    if (iVar2 == 0) goto LAB_10204e36;
LAB_10204e31:
    pcStack_18 = pcVar3;
    pcVar4 = (char *)param_2[1];
  }
  else {
    if (cVar1 == '[') {
      param_2[2] = 3;
      *param_2 = pcStack_18;
      *param_1 = pcStack_18 + 1;
      FUN_10204a96(param_1);
      pcVar3 = (char *)*param_1;
      if (pcVar3 < pcVar4) {
        iVar2 = 1;
        do {
          if (param_1[3] != 0) break;
          if (*pcVar3 == ']') {
            iVar5 = iVar2 + -1;
            if (iVar5 == 0 || iVar2 < 1) {
              pcStack_18 = pcVar3 + 1;
              param_2[1] = pcStack_18;
              goto LAB_10204e44;
            }
          }
          else {
            iVar5 = iVar2;
            if (*pcVar3 == '[') {
              iVar5 = iVar2 + 1;
            }
          }
          FUN_10204aa2(param_1);
          FUN_10204a96(param_1);
          pcVar3 = (char *)*param_1;
          iVar2 = iVar5;
        } while (pcVar3 < pcVar4);
      }
      goto LAB_10204e31;
    }
    if (cVar1 == '(') {
      param_2[2] = 2;
      *param_2 = pcStack_18;
      iVar2 = FUN_1020783d();
      goto LAB_10204e03;
    }
    *param_2 = pcStack_18;
    param_2[2] = (uint)(*pcStack_18 == '/') * 3 + 1;
    FUN_10204aa2(param_1);
    pcStack_18 = (char *)*param_1;
    pcVar3 = pcStack_18;
    if (param_1[3] != 0) goto LAB_10204e31;
LAB_10204e36:
    param_2[1] = pcStack_18;
    pcVar4 = pcStack_18;
  }
  if (pcVar4 == (char *)0x0) {
    *param_2 = 0;
    param_2[2] = 0;
  }
LAB_10204e44:
  *param_1 = pcStack_18;
LAB_10204e49:
  if (DAT_10388d00 != (local_14 ^ (uint)&pcStack_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

