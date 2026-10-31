/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009f998 */

undefined8 * FUN_18009f998(undefined8 *param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar8 = (undefined8 *)*param_1;
  }
  psVar4 = (short *)((longlong)puVar8 + param_1[2] * 2);
  psVar2 = (short *)FUN_180001f7f(puVar8,psVar4);
  psVar3 = psVar4;
  do {
    psVar5 = psVar3;
    if ((psVar5 == psVar2) || (psVar5[-1] == 0x5c)) break;
    psVar3 = psVar5 + -1;
  } while (psVar5[-1] != 0x2f);
  psVar3 = (short *)FUN_18004513e(psVar5,psVar4,0x3a);
  psVar4 = psVar5;
  if ((psVar5 != psVar3) && (psVar2 = psVar3 + -1, psVar4 = psVar3, psVar5 != psVar2)) {
    if (*psVar2 == 0x2e) {
      if ((psVar5 != psVar3 + -2) || (psVar3[-2] != 0x2e)) {
        psVar4 = psVar2;
      }
    }
    else {
      psVar2 = psVar3 + -2;
      do {
        psVar4 = psVar3;
        if (psVar5 == psVar2) break;
        sVar1 = *psVar2;
        psVar4 = psVar2;
        psVar2 = psVar2 + -1;
      } while (sVar1 != 0x2e);
    }
  }
  uVar6 = (longlong)psVar4 - (longlong)puVar8 >> 1;
  if ((ulonglong)param_1[2] < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_1800045d8();
  }
  param_1[2] = uVar6;
  puVar7 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar7 = (undefined8 *)*param_1;
  }
  *(undefined2 *)((longlong)puVar7 + ((longlong)psVar4 - (longlong)puVar8)) = 0;
  return param_1;
}

