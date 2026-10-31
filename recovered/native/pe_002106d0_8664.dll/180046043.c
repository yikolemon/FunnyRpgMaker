/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180046043 */

short * FUN_180046043(short *param_1,short *param_2,longlong *param_3)

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
  psVar3 = (short *)FUN_1800461cf(param_1);
  if (psVar3 == param_2) {
    return psVar3;
  }
  sVar2 = *psVar3;
  if (sVar2 == 0x20) {
    *(undefined1 *)((longlong)param_3 + 0x19) = 1;
    bVar4 = (char)param_3[3] - 1;
    uVar1 = 3;
LAB_1800460b1:
    if (8 < bVar4) goto LAB_1800461a5;
    *(undefined1 *)(*param_3 + 10) = uVar1;
    psVar3 = psVar3 + 1;
  }
  else {
    if (sVar2 == 0x2d) {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 2;
      goto LAB_1800460b1;
    }
    if (sVar2 == 0x2b) {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      bVar4 = (char)param_3[3] - 1;
      uVar1 = 1;
      goto LAB_1800460b1;
    }
  }
  if (psVar3 != param_2) {
    sVar2 = *psVar3;
    if (sVar2 == 0x23) {
      *(undefined1 *)((longlong)param_3 + 0x19) = 1;
      if (8 < (byte)((char)param_3[3] - 1U)) goto LAB_1800461a5;
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
        FUN_180005ebc("Format specifier requires numeric or pointer argument.");
      }
      *(undefined1 *)(*param_3 + 0xd) = 1;
      psVar3 = psVar3 + 1;
      if (psVar3 == param_2) {
        return psVar3;
      }
    }
    psVar3 = (short *)FUN_18004630d(psVar3,param_2,param_3);
    if (psVar3 != param_2) {
      sVar2 = *psVar3;
      if (sVar2 == 0x2e) {
        psVar3 = (short *)FUN_1800463c1(psVar3,param_2,param_3);
        if (psVar3 == param_2) {
          return psVar3;
        }
        sVar2 = *psVar3;
      }
      if (sVar2 == 0x4c) {
        if (8 < (byte)((char)param_3[3] - 1U)) {
LAB_1800461a5:
                    /* WARNING: Subroutine does not return */
          FUN_180005ebc("Format specifier requires numeric argument.");
        }
        *(undefined1 *)(*param_3 + 0xc) = 1;
        psVar3 = psVar3 + 1;
        if (psVar3 == param_2) {
          return psVar3;
        }
        sVar2 = *psVar3;
      }
      if (sVar2 == 0x7d) {
        FUN_1800464b0(param_3,0);
      }
      else {
        FUN_1800464b0(param_3);
        psVar3 = psVar3 + 1;
      }
    }
  }
  return psVar3;
}

