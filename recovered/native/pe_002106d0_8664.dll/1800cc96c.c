/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cc96c */

void FUN_1800cc96c(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar3 = (longlong *)*param_1;
  if ((ulonglong)(param_1[2] - (longlong)plVar3 >> 4) < param_3) {
    FUN_1800ccaa8(param_1,param_3);
    plVar6 = (longlong *)*param_1;
    plVar3 = (longlong *)(param_2 + 8);
    do {
      *plVar6 = 0;
      plVar6[1] = 0;
      if (*plVar3 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar3 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *plVar6 = plVar3[-1];
      plVar6[1] = *plVar3;
      plVar6 = plVar6 + 2;
      plVar3 = plVar3 + 2;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  else {
    plVar7 = (longlong *)param_1[1];
    uVar4 = (longlong)plVar7 - (longlong)plVar3 >> 4;
    if (uVar4 < param_3) {
      plVar6 = plVar7;
      if (plVar3 != plVar7) {
        do {
          FUN_180022b6e(plVar3,param_2);
          plVar3 = plVar3 + 2;
          param_2 = param_2 + 0x10;
          plVar6 = (longlong *)param_1[1];
        } while (plVar3 != plVar6);
      }
      if (param_3 != uVar4) {
        lVar5 = uVar4 - param_3;
        plVar3 = (longlong *)(param_2 + 8);
        do {
          *plVar6 = 0;
          plVar6[1] = 0;
          if (*plVar3 != 0) {
            LOCK();
            piVar1 = (int *)(*plVar3 + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          *plVar6 = plVar3[-1];
          plVar6[1] = *plVar3;
          plVar6 = plVar6 + 2;
          plVar3 = plVar3 + 2;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0);
      }
    }
    else {
      plVar6 = plVar3 + param_3 * 2;
      plVar2 = plVar6;
      if (param_3 != 0) {
        do {
          FUN_180022b6e(plVar3,param_2);
          plVar3 = plVar3 + 2;
          param_2 = param_2 + 0x10;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        plVar7 = (longlong *)param_1[1];
      }
      for (; plVar2 != plVar7; plVar2 = plVar2 + 2) {
        FUN_18004363a(plVar2);
      }
    }
  }
  param_1[1] = plVar6;
  return;
}

