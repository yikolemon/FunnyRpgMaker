/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029a580 */

undefined4 FUN_18029a580(short *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  short sVar1;
  undefined4 *puVar2;
  longlong lVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_18029a5e3;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_18029a5e3;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = 0;
      return 0;
    }
    if (param_3 != 0) {
      psVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *psVar4 = 0;
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 != -1) {
        *param_1 = 0;
        puVar2 = (undefined4 *)FUN_18027e66c();
        *puVar2 = 0x22;
        FUN_180290a50();
        return 0x22;
      }
      param_1[param_2 + -1] = 0;
      return 0x50;
    }
    *param_1 = 0;
  }
LAB_18029a5e3:
  puVar2 = (undefined4 *)FUN_18027e66c();
  *puVar2 = 0x16;
  FUN_180290a50();
  return 0x16;
}

