/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009c9e2 */

undefined4 * __fastcall FUN_1009c9e2(undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar8 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar8 = (undefined4 *)*param_1;
  }
  psVar4 = (short *)((int)puVar8 + param_1[4] * 2);
  psVar2 = (short *)FUN_100020d5(puVar8,psVar4);
  psVar3 = psVar4;
  do {
    psVar5 = psVar3;
    if ((psVar5 == psVar2) || (psVar5[-1] == 0x5c)) break;
    psVar3 = psVar5 + -1;
  } while (psVar5[-1] != 0x2f);
  psVar3 = (short *)FUN_10044e04(psVar5,psVar4,0x3a);
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
  uVar6 = (int)psVar4 - (int)puVar8 >> 1;
  if ((uint)param_1[4] < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_100047d6();
  }
  param_1[4] = uVar6;
  puVar7 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar7 = (undefined4 *)*param_1;
  }
  *(undefined2 *)((int)puVar7 + ((int)psVar4 - (int)puVar8)) = 0;
  return param_1;
}

