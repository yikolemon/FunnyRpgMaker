/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000aee5 */

char * FUN_1000aee5(char *param_1,char *param_2,int *param_3)

{
  undefined1 uVar1;
  char cVar2;
  char *pcVar3;
  byte bVar4;
  
  if (param_1 == param_2) {
    return param_1;
  }
  if (*param_1 == '}') {
    return param_1;
  }
  pcVar3 = (char *)FUN_1000b070(param_1,param_2,param_3);
  if (pcVar3 == param_2) {
    return pcVar3;
  }
  cVar2 = *pcVar3;
  if (cVar2 == ' ') {
    *(undefined1 *)((int)param_3 + 0xd) = 1;
    bVar4 = (char)param_3[3] - 1;
    uVar1 = 3;
LAB_1000af51:
    if (8 < bVar4) goto LAB_1000b00d;
    *(undefined1 *)(*param_3 + 10) = uVar1;
    pcVar3 = pcVar3 + 1;
  }
  else {
    if (cVar2 == '-') {
      *(undefined1 *)((int)param_3 + 0xd) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 2;
      goto LAB_1000af51;
    }
    if (cVar2 == '+') {
      *(undefined1 *)((int)param_3 + 0xd) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 1;
      goto LAB_1000af51;
    }
  }
  if (pcVar3 != param_2) {
    cVar2 = *pcVar3;
    if (cVar2 == '#') {
      *(undefined1 *)((int)param_3 + 0xd) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_1000b00d;
      *(undefined1 *)(*param_3 + 0xb) = 1;
      pcVar3 = pcVar3 + 1;
      if (pcVar3 == param_2) {
        return pcVar3;
      }
      cVar2 = *pcVar3;
    }
    if (cVar2 == '0') {
      *(undefined1 *)((int)param_3 + 0xe) = 1;
      if (9 < (byte)((char)param_3[3] - 1U)) {
                    /* WARNING: Subroutine does not return */
        FUN_10006198("Format specifier requires numeric or pointer argument.");
      }
      *(undefined1 *)(*param_3 + 0xd) = 1;
      pcVar3 = pcVar3 + 1;
      if (pcVar3 == param_2) {
        return pcVar3;
      }
    }
    pcVar3 = (char *)FUN_1000b139(pcVar3,param_2,param_3);
    if (pcVar3 != param_2) {
      cVar2 = *pcVar3;
      if (cVar2 == '.') {
        pcVar3 = (char *)FUN_1000b1cf(pcVar3,param_2,param_3);
        if (pcVar3 == param_2) {
          return pcVar3;
        }
        cVar2 = *pcVar3;
      }
      if (cVar2 == 'L') {
        if (8 < (byte)((char)param_3[3] - 1U)) {
LAB_1000b00d:
                    /* WARNING: Subroutine does not return */
          FUN_10006198("Format specifier requires numeric argument.");
        }
        *(undefined1 *)(*param_3 + 0xc) = 1;
        pcVar3 = pcVar3 + 1;
        if (pcVar3 == param_2) {
          return pcVar3;
        }
        cVar2 = *pcVar3;
      }
      if (cVar2 == '}') {
        FUN_1000b29c(0);
      }
      else {
        FUN_1000b29c((int)cVar2);
        pcVar3 = pcVar3 + 1;
      }
    }
  }
  return pcVar3;
}

