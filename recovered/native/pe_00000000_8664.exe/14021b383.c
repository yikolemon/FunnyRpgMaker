/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021b383 */

char * FUN_14021b383(char *param_1,char *param_2,longlong *param_3)

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
  pcVar3 = (char *)FUN_14021b4fd(param_1);
  if (pcVar3 == param_2) {
    return pcVar3;
  }
  cVar2 = *pcVar3;
  if (cVar2 == ' ') {
    *(undefined1 *)((longlong)param_3 + 0x19) = 1;
    bVar4 = (char)param_3[3] - 1;
    uVar1 = 3;
LAB_14021b3f0:
    if (8 < bVar4) goto LAB_14021b4d3;
    *(undefined1 *)(*param_3 + 10) = uVar1;
    pcVar3 = pcVar3 + 1;
  }
  else {
    if (cVar2 == '-') {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 2;
      goto LAB_14021b3f0;
    }
    if (cVar2 == '+') {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 1;
      goto LAB_14021b3f0;
    }
  }
  if (pcVar3 != param_2) {
    cVar2 = *pcVar3;
    if (cVar2 == '#') {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_14021b4d3;
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
        FUN_14021738c("cal space than lines with framed widgets.");
      }
      *(undefined1 *)(*param_3 + 0xd) = 1;
      pcVar3 = pcVar3 + 1;
      if (pcVar3 == param_2) {
        return pcVar3;
      }
    }
    pcVar3 = (char *)FUN_14021b5fd(pcVar3,param_2,param_3);
    if (pcVar3 != param_2) {
      cVar2 = *pcVar3;
      if (cVar2 == '.') {
        pcVar3 = (char *)FUN_14021b6aa(pcVar3,param_2,param_3);
        if (pcVar3 == param_2) {
          return pcVar3;
        }
        cVar2 = *pcVar3;
      }
      if (cVar2 == 'L') {
        if (8 < (byte)((char)param_3[3] - 1U)) {
LAB_14021b4d3:
                    /* WARNING: Subroutine does not return */
          FUN_14021738c("Omar Cornut and all Dear ImGui contributors.");
        }
        *(undefined1 *)(*param_3 + 0xc) = 1;
        pcVar3 = pcVar3 + 1;
        if (pcVar3 == param_2) {
          return pcVar3;
        }
        cVar2 = *pcVar3;
      }
      if (cVar2 == '}') {
        FUN_14021b794(param_3,0);
      }
      else {
        FUN_14021b794(param_3);
        pcVar3 = pcVar3 + 1;
      }
    }
  }
  return pcVar3;
}

