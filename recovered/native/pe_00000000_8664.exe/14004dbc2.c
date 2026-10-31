/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004dbc2 */

char * FUN_14004dbc2(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 auStack_78 [40];
  char *local_50;
  longlong local_48;
  int local_40 [2];
  char local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  FUN_14004e105(local_40,param_1,param_2,local_2c);
  uVar2 = 0xffffffff;
  if (local_38 != '\0') {
    uVar2 = local_40[0] - (int)param_1;
  }
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140049b0a("Invalid format string.");
  }
  pcVar4 = param_1 + uVar2;
  if (param_1 + uVar2 == param_2) {
    pcVar4 = param_1;
  }
  do {
    cVar1 = *pcVar4;
    if (cVar1 == '^') {
      uVar3 = 3;
LAB_14004dc49:
      if ((longlong)pcVar4 - (longlong)param_1 != 0) {
        if (*param_1 == '{') {
                    /* WARNING: Subroutine does not return */
          FUN_140049b0a("invalid fill character \'{\'");
        }
        local_50 = param_1;
        local_48 = (longlong)pcVar4 - (longlong)param_1;
        FUN_14004e0ac(param_3);
        param_1 = pcVar4;
      }
      param_1 = param_1 + 1;
      *(undefined1 *)(*param_3 + 9) = uVar3;
      break;
    }
    if (cVar1 == '>') {
      uVar3 = 2;
      goto LAB_14004dc49;
    }
    if (cVar1 == '<') {
      uVar3 = 1;
      goto LAB_14004dc49;
    }
    bVar5 = pcVar4 != param_1;
    pcVar4 = param_1;
  } while (bVar5);
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

