/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140049109 */

char * FUN_140049109(char *param_1,char *param_2,longlong *param_3)

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
  pcVar3 = (char *)FUN_140049283(param_1);
  if (pcVar3 == param_2) {
    return pcVar3;
  }
  cVar2 = *pcVar3;
  if (cVar2 == ' ') {
    *(undefined1 *)((longlong)param_3 + 0x19) = 1;
    bVar4 = (char)param_3[3] - 1;
    uVar1 = 3;
LAB_140049176:
    if (8 < bVar4) goto LAB_140049259;
    *(undefined1 *)(*param_3 + 10) = uVar1;
    pcVar3 = pcVar3 + 1;
  }
  else {
    if (cVar2 == '-') {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 2;
      goto LAB_140049176;
    }
    if (cVar2 == '+') {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 1;
      goto LAB_140049176;
    }
  }
  if (pcVar3 != param_2) {
    cVar2 = *pcVar3;
    if (cVar2 == '#') {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_140049259;
      *(undefined1 *)(*param_3 + 0xb) = 1;
      pcVar3 = pcVar3 + 1;
      if (pcVar3 == param_2) {
        return pcVar3;
      }
      cVar2 = *pcVar3;
    }
    if (cVar2 == '0') {
      *(undefined1 *)((longlong)param_3 + 0x1a) = 1;
      if (9 < (byte)((char)param_3[3] - 1U)) {
                    /* WARNING: Subroutine does not return */
        FUN_1400451d8("Format specifier requires numeric or pointer argument.");
      }
      *(undefined1 *)(*param_3 + 0xd) = 1;
      pcVar3 = pcVar3 + 1;
      if (pcVar3 == param_2) {
        return pcVar3;
      }
    }
    pcVar3 = (char *)FUN_140049383(pcVar3,param_2,param_3);
    if (pcVar3 != param_2) {
      cVar2 = *pcVar3;
      if (cVar2 == '.') {
        pcVar3 = (char *)FUN_140049430(pcVar3,param_2,param_3);
        if (pcVar3 == param_2) {
          return pcVar3;
        }
        cVar2 = *pcVar3;
      }
      if (cVar2 == 'L') {
        if (8 < (byte)((char)param_3[3] - 1U)) {
LAB_140049259:
                    /* WARNING: Subroutine does not return */
          FUN_1400451d8("Format specifier requires numeric argument.");
        }
        *(undefined1 *)(*param_3 + 0xc) = 1;
        pcVar3 = pcVar3 + 1;
        if (pcVar3 == param_2) {
          return pcVar3;
        }
        cVar2 = *pcVar3;
      }
      if (cVar2 == '}') {
        FUN_14004951a(param_3,0);
      }
      else {
        FUN_14004951a(param_3);
        pcVar3 = pcVar3 + 1;
      }
    }
  }
  return pcVar3;
}

