/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180009eb3 */

char * FUN_180009eb3(char *param_1,char *param_2,longlong *param_3)

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
  pcVar3 = (char *)FUN_18000a02d(param_1);
  if (pcVar3 == param_2) {
    return pcVar3;
  }
  cVar2 = *pcVar3;
  if (cVar2 == ' ') {
    *(undefined1 *)((longlong)param_3 + 0x19) = 1;
    bVar4 = (char)param_3[3] - 1;
    uVar1 = 3;
LAB_180009f20:
    if (8 < bVar4) goto LAB_18000a003;
    *(undefined1 *)(*param_3 + 10) = uVar1;
    pcVar3 = pcVar3 + 1;
  }
  else {
    if (cVar2 == '-') {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 2;
      goto LAB_180009f20;
    }
    if (cVar2 == '+') {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 1;
      goto LAB_180009f20;
    }
  }
  if (pcVar3 != param_2) {
    cVar2 = *pcVar3;
    if (cVar2 == '#') {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_18000a003;
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
        FUN_180005ebc("Format specifier requires numeric or pointer argument.");
      }
      *(undefined1 *)(*param_3 + 0xd) = 1;
      pcVar3 = pcVar3 + 1;
      if (pcVar3 == param_2) {
        return pcVar3;
      }
    }
    pcVar3 = (char *)FUN_18000a12d(pcVar3,param_2,param_3);
    if (pcVar3 != param_2) {
      cVar2 = *pcVar3;
      if (cVar2 == '.') {
        pcVar3 = (char *)FUN_18000a1da(pcVar3,param_2,param_3);
        if (pcVar3 == param_2) {
          return pcVar3;
        }
        cVar2 = *pcVar3;
      }
      if (cVar2 == 'L') {
        if (8 < (byte)((char)param_3[3] - 1U)) {
LAB_18000a003:
                    /* WARNING: Subroutine does not return */
          FUN_180005ebc("Format specifier requires numeric argument.");
        }
        *(undefined1 *)(*param_3 + 0xc) = 1;
        pcVar3 = pcVar3 + 1;
        if (pcVar3 == param_2) {
          return pcVar3;
        }
        cVar2 = *pcVar3;
      }
      if (cVar2 == '}') {
        FUN_18000a2c4(param_3,0);
      }
      else {
        FUN_18000a2c4(param_3);
        pcVar3 = pcVar3 + 1;
      }
    }
  }
  return pcVar3;
}

