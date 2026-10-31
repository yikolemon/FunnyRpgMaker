/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f6036 */

void FUN_1800f6036(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  
  if (param_2 == 0) {
    return;
  }
  puVar2 = (uint *)FUN_1800188ac(param_2 + 4);
  if ((*puVar2 & 1) == 0) {
    if (*puVar2 == 0) {
      return;
    }
    lVar1 = param_2 + 8;
    plVar3 = (longlong *)FUN_1800f60e2(lVar1);
    puVar2 = (uint *)FUN_1800188ac(param_2 + 4);
    if ((*puVar2 & 1) == 0) {
      plVar5 = plVar3;
      if (*puVar2 != 0) {
        *param_1 = param_2;
        param_1[1] = (longlong)plVar3;
        piVar4 = (int *)FUN_1800188ac(param_2);
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        plVar5 = param_1;
        if (plVar3 != (longlong *)0x0) {
          plVar3[2] = (longlong)param_1;
        }
      }
      FUN_1800f61a6(lVar1,plVar5);
      return;
    }
    FUN_1800f61a6(lVar1,plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001800f60c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[3])();
  return;
}

