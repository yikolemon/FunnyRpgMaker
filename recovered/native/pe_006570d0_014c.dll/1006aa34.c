/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006aa34 */

undefined4 __thiscall FUN_1006aa34(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  piVar1 = param_1 + 4;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  psVar6 = (short *)((int)param_1 + *piVar1 * 2);
  psVar3 = (short *)FUN_100020d5(param_1,psVar6);
  psVar4 = psVar6;
  psVar8 = psVar6;
  do {
    psVar7 = psVar8;
    psVar5 = psVar4;
    if ((psVar7 == psVar3) || (psVar7[-1] == 0x5c)) break;
    psVar4 = psVar5 + -1;
    psVar8 = psVar7 + -1;
  } while (psVar7[-1] != 0x2f);
  psVar4 = (short *)FUN_10044e04(psVar7,psVar6,0x3a);
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
  local_18 = (int)psVar6 - (int)psVar5 >> 1;
  local_1c = psVar7;
  FUN_10002056(&local_1c,0);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_2;
}

