/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019be8c */

int FUN_14019be8c(char *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong local_res18 [2];
  longlong *local_28;
  char *local_20;
  longlong *local_18;
  
  local_18 = local_res18;
  lVar6 = 0;
  do {
    local_28 = param_2;
    local_20 = param_1;
    if ((*param_1 != (&DAT_140eb4010)[lVar6]) && (*param_1 != (&DAT_140eb4014)[lVar6])) {
      local_res18[0] = param_3;
      FUN_14019bc78(&local_28);
      return 7;
    }
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pcVar3 = *(char **)(lVar1 + 0x10);
      if (pcVar3 == *(char **)(lVar1 + 8)) goto LAB_14019beed;
      cVar4 = *pcVar3;
      *(char **)(lVar1 + 0x10) = pcVar3 + 1;
    }
    else {
LAB_14019beed:
      cVar4 = '\0';
    }
    lVar6 = lVar6 + 1;
    *param_1 = cVar4;
  } while (lVar6 != 3);
  lVar6 = param_2[2];
  param_2[2] = lVar6 - 1U;
  if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar4 + 1U))) {
    plVar2 = (longlong *)*param_2;
    if (plVar2[2] != *plVar2) {
      plVar2[2] = plVar2[2] + -1;
    }
  }
  local_res18[0] = param_2[2];
  param_2[2] = local_res18[0] + 1U;
  if ((param_2[1] == 0) || (local_res18[0] + 1U <= (ulonglong)param_2[1])) {
    lVar6 = *param_2;
    pcVar3 = *(char **)(lVar6 + 0x10);
    if (pcVar3 != *(char **)(lVar6 + 8)) {
      cVar4 = *pcVar3;
      *(char **)(lVar6 + 0x10) = pcVar3 + 1;
      *param_1 = cVar4;
      if (cVar4 != '(') goto LAB_14019bf97;
      lVar6 = param_2[2];
      param_2[2] = lVar6 + 1U;
      if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
        lVar6 = *param_2;
        pcVar3 = *(char **)(lVar6 + 0x10);
        if (pcVar3 == *(char **)(lVar6 + 8)) goto LAB_14019bfc8;
        cVar4 = *pcVar3;
        *(char **)(lVar6 + 0x10) = pcVar3 + 1;
      }
      else {
LAB_14019bfc8:
        cVar4 = '\0';
      }
      *param_1 = cVar4;
      cVar4 = FUN_14019c0f0(param_1,param_2);
      if (cVar4 != '\0') {
        lVar6 = param_2[2];
        cVar4 = *param_1;
        param_2[2] = lVar6 - 1U;
        if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar4 + 1U))
           ) {
          param_2 = (longlong *)*param_2;
          if (param_2[2] != *param_2) {
            param_2[2] = param_2[2] + -1;
          }
        }
        return 5;
      }
      cVar5 = FUN_14019c16c(param_1,param_2);
      cVar4 = *param_1;
      if (cVar5 != '\0') {
        lVar6 = param_2[2];
        param_2[2] = lVar6 - 1U;
        if (((param_2[1] == 0) || (lVar6 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar4 + 1U))
           ) {
          param_2 = (longlong *)*param_2;
          if (param_2[2] != *param_2) {
            param_2[2] = param_2[2] + -1;
          }
        }
        return 6;
      }
      while( true ) {
        if (cVar4 == ')') {
          return 4;
        }
        if ((cVar4 == '\0') ||
           ((((9 < (byte)(cVar4 - 0x30U) && (0x19 < (byte)(cVar4 + 0x9fU))) &&
             (0x19 < (byte)(cVar4 + 0xbfU))) && (cVar4 != '_')))) break;
        lVar6 = param_2[2];
        param_2[2] = lVar6 + 1U;
        if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
          lVar6 = *param_2;
          pcVar3 = *(char **)(lVar6 + 0x10);
          if (pcVar3 == *(char **)(lVar6 + 8)) goto LAB_14019c0bd;
          cVar4 = *pcVar3;
          *(char **)(lVar6 + 0x10) = pcVar3 + 1;
        }
        else {
LAB_14019c0bd:
          cVar4 = '\0';
        }
        *param_1 = cVar4;
      }
      goto LAB_14019bf97;
    }
  }
  *param_1 = '\0';
LAB_14019bf97:
  cVar4 = FUN_14019bc78(&local_28);
  return (-(uint)(cVar4 != '\0') & 0xfffffffd) + 7;
}

