/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006a8fc */

undefined8 FUN_18006a8fc(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  undefined1 auStack_58 [40];
  short *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  plVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  psVar4 = (short *)((longlong)param_1 + *plVar1 * 2);
  psVar3 = (short *)FUN_180001f7f(param_1,psVar4);
  psVar6 = psVar4;
  do {
    psVar5 = psVar6;
    if ((psVar5 == psVar3) || (psVar5[-1] == 0x5c)) break;
    psVar6 = psVar5 + -1;
  } while (psVar5[-1] != 0x2f);
  psVar4 = (short *)FUN_18004513e(psVar5,psVar4,0x3a);
  local_30 = psVar4;
  if ((psVar5 != psVar4) && (psVar6 = psVar4 + -1, psVar5 != psVar6)) {
    if (*psVar6 == 0x2e) {
      if ((psVar5 != psVar4 + -2) || (psVar4[-2] != 0x2e)) {
        local_30 = psVar6;
      }
    }
    else {
      psVar6 = psVar4 + -2;
      do {
        local_30 = psVar4;
        if (psVar5 == psVar6) break;
        sVar2 = *psVar6;
        local_30 = psVar6;
        psVar6 = psVar6 + -1;
      } while (sVar2 != 0x2e);
    }
  }
  local_28 = (longlong)psVar4 - (longlong)local_30 >> 1;
  FUN_180001f38(param_2,&local_30,0);
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
  }
  return param_2;
}

