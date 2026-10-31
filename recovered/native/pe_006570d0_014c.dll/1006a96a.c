/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a96a */

undefined4 __thiscall FUN_1006a96a(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *local_18;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  piVar1 = param_1 + 4;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  psVar4 = (short *)((int)param_1 + *piVar1 * 2);
  psVar3 = (short *)FUN_100020d5(param_1,psVar4);
  psVar6 = psVar4;
  do {
    psVar5 = psVar6;
    if ((psVar5 == psVar3) || (psVar5[-1] == 0x5c)) break;
    psVar6 = psVar5 + -1;
  } while (psVar5[-1] != 0x2f);
  psVar4 = (short *)FUN_10044e04(psVar5,psVar4,0x3a);
  local_18 = psVar4;
  if ((psVar5 != psVar4) && (psVar6 = psVar4 + -1, psVar5 != psVar6)) {
    if (*psVar6 == 0x2e) {
      if ((psVar5 != psVar4 + -2) || (psVar4[-2] != 0x2e)) {
        local_18 = psVar6;
      }
    }
    else {
      psVar6 = psVar4 + -2;
      do {
        local_18 = psVar4;
        if (psVar5 == psVar6) break;
        sVar2 = *psVar6;
        local_18 = psVar6;
        psVar6 = psVar6 + -1;
      } while (sVar2 != 0x2e);
    }
  }
  local_14 = (int)psVar4 - (int)local_18 >> 1;
  FUN_10002056(&local_18,0);
  if (DAT_10388d00 != (local_10 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_2;
}

