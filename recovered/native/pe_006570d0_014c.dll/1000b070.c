/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000b070 */

char * FUN_1000b070(char *param_1,char *param_2,int *param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined1 auStack_1c [3];
  undefined1 local_19;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_1c;
  uVar6 = FUN_1000b5cf(param_1,param_2,local_18);
  uVar3 = -(uint)((uVar6 & 0x100000000) == 0) | (int)uVar6 - (int)param_1;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10006198("Invalid format string.");
  }
  pcVar4 = param_1 + uVar3;
  if (param_1 + uVar3 == param_2) {
    pcVar4 = param_1;
  }
  do {
    cVar1 = *pcVar4;
    if (cVar1 == '^') {
      uVar2 = 3;
LAB_1000b0d8:
      if ((int)pcVar4 - (int)param_1 != 0) {
        local_19 = uVar2;
        if (*param_1 == '{') {
                    /* WARNING: Subroutine does not return */
          FUN_10006198("invalid fill character \'{\'");
        }
        FUN_1000b584(param_1,(int)pcVar4 - (int)param_1);
        param_1 = pcVar4;
        uVar2 = local_19;
      }
      param_1 = param_1 + 1;
      *(undefined1 *)(*param_3 + 9) = uVar2;
      break;
    }
    if (cVar1 == '>') {
      uVar2 = 2;
      goto LAB_1000b0d8;
    }
    if (cVar1 == '<') {
      uVar2 = 1;
      goto LAB_1000b0d8;
    }
    bVar5 = pcVar4 != param_1;
    pcVar4 = param_1;
  } while (bVar5);
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

