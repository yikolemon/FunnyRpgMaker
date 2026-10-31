/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140257513 */

short * FUN_140257513(short *param_1,short *param_2,longlong *param_3)

{
  undefined1 uVar1;
  short sVar2;
  short *psVar3;
  byte bVar4;
  
  if (param_1 == param_2) {
    return param_1;
  }
  if (*param_1 == 0x7d) {
    return param_1;
  }
  psVar3 = (short *)FUN_14025769f(param_1);
  if (psVar3 == param_2) {
    return psVar3;
  }
  sVar2 = *psVar3;
  if (sVar2 == 0x20) {
    *(undefined1 *)((longlong)param_3 + 0x19) = 1;
    bVar4 = (char)param_3[3] - 1;
    uVar1 = 3;
LAB_140257581:
    if (8 < bVar4) goto LAB_140257675;
    *(undefined1 *)(*param_3 + 10) = uVar1;
    psVar3 = psVar3 + 1;
  }
  else {
    if (sVar2 == 0x2d) {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 2;
      goto LAB_140257581;
    }
    if (sVar2 == 0x2b) {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 1;
      goto LAB_140257581;
    }
  }
  if (psVar3 != param_2) {
    sVar2 = *psVar3;
    if (sVar2 == 0x23) {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_140257675;
      *(undefined1 *)(*param_3 + 0xb) = 1;
      psVar3 = psVar3 + 1;
      if (psVar3 == param_2) {
        return psVar3;
      }
      sVar2 = *psVar3;
    }
    if (sVar2 == 0x30) {
      *(undefined1 *)((longlong)param_3 + 0x1a) = 1;
      if (9 < (byte)((char)param_3[3] - 1U)) {
                    /* WARNING: Subroutine does not return */
        FUN_14021738c("cal space than lines with framed widgets.");
      }
      *(undefined1 *)(*param_3 + 0xd) = 1;
      psVar3 = psVar3 + 1;
      if (psVar3 == param_2) {
        return psVar3;
      }
    }
    psVar3 = (short *)FUN_1402577dd(psVar3,param_2,param_3);
    if (psVar3 != param_2) {
      sVar2 = *psVar3;
      if (sVar2 == 0x2e) {
        psVar3 = (short *)FUN_140257891(psVar3,param_2,param_3);
        if (psVar3 == param_2) {
          return psVar3;
        }
        sVar2 = *psVar3;
      }
      if (sVar2 == 0x4c) {
        if (8 < (byte)((char)param_3[3] - 1U)) {
LAB_140257675:
                    /* WARNING: Subroutine does not return */
          FUN_14021738c("Omar Cornut and all Dear ImGui contributors.");
        }
        *(undefined1 *)(*param_3 + 0xc) = 1;
        psVar3 = psVar3 + 1;
        if (psVar3 == param_2) {
          return psVar3;
        }
        sVar2 = *psVar3;
      }
      if (sVar2 == 0x7d) {
        FUN_140257980(param_3,0);
      }
      else {
        FUN_140257980(param_3);
        psVar3 = psVar3 + 1;
      }
    }
  }
  return psVar3;
}

