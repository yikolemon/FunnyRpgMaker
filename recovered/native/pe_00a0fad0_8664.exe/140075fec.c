/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140075fec */

undefined8 FUN_140075fec(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  undefined1 auStack_58 [32];
  short *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  plVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  psVar6 = (short *)((longlong)param_1 + *plVar1 * 2);
  psVar3 = (short *)FUN_1400423eb(param_1,psVar6);
  psVar4 = psVar6;
  psVar8 = psVar6;
  do {
    psVar7 = psVar8;
    psVar5 = psVar4;
    if (psVar7 == psVar3) break;
    if (psVar7[-1] == 0x5c) break;
    psVar4 = psVar5 + -1;
    psVar8 = psVar7 + -1;
  } while (psVar7[-1] != 0x2f);
  psVar4 = (short *)FUN_140042504(psVar7,psVar6,0x3a);
  psVar6 = psVar7;
  if ((psVar7 != psVar4) && (psVar8 = psVar4 + -1, psVar6 = psVar4, psVar7 != psVar8)) {
    if (*psVar8 == 0x2e) {
      if ((psVar7 != psVar4 + -2) || (psVar4[-2] != 0x2e)) {
        psVar6 = psVar8;
      }
    }
    else {
      psVar8 = psVar4 + -2;
      do {
        psVar6 = psVar4;
        if (psVar7 == psVar8) break;
        sVar2 = *psVar8;
        psVar6 = psVar8;
        psVar8 = psVar8 + -1;
      } while (sVar2 != 0x2e);
    }
  }
  local_30 = (longlong)psVar6 - (longlong)psVar5 >> 1;
  local_38 = psVar7;
  FUN_1400423a4(param_2,&local_38,0);
  if (DAT_1401c9640 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
  }
  return param_2;
}

