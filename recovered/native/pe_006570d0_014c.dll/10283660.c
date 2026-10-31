/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10283660 */

int FUN_10283660(char *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return param_4;
      }
      goto LAB_102836a2;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_102836a2;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = '\0';
      return param_4;
    }
    if (param_3 != 0) {
      pcVar5 = param_1;
      iVar6 = param_2;
      iVar4 = param_4;
      if (param_4 == -1) {
        do {
          cVar2 = pcVar5[param_3 - (int)param_1];
          *pcVar5 = cVar2;
          if (cVar2 == '\0') {
            return 0;
          }
          iVar6 = iVar6 + -1;
          pcVar5 = pcVar5 + 1;
        } while (iVar6 != 0);
        iVar6 = 0;
      }
      else {
        do {
          iVar7 = iVar4;
          cVar2 = pcVar5[param_3 - (int)param_1];
          pcVar1 = pcVar5 + 1;
          *pcVar5 = cVar2;
          if (cVar2 == '\0') {
            return 0;
          }
          iVar6 = iVar6 + -1;
        } while ((iVar6 != 0) && (pcVar5 = pcVar1, iVar4 = iVar7 + -1, iVar7 + -1 != 0));
        iVar4 = iVar7 + -1;
        if (iVar6 == 0) {
          iVar4 = iVar7;
        }
        if (iVar4 == 0) {
          *pcVar1 = '\0';
        }
      }
      if (iVar6 != 0) {
        return 0;
      }
      if (param_4 != -1) {
        *param_1 = '\0';
        puVar3 = (undefined4 *)FUN_10268ffd();
        *puVar3 = 0x22;
        FUN_10273ea8();
        return 0x22;
      }
      param_1[param_2 + -1] = '\0';
      return 0x50;
    }
    *param_1 = '\0';
  }
LAB_102836a2:
  puVar3 = (undefined4 *)FUN_10268ffd();
  *puVar3 = 0x16;
  FUN_10273ea8();
  return 0x16;
}

