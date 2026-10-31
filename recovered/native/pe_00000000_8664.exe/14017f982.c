/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017f982 */

void FUN_14017f982(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)*param_1;
  if (plVar6 != (longlong *)0x0) {
    plVar5 = param_1;
    do {
      piVar1 = (int *)((longlong)plVar6 + 0x14);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        plVar6 = (longlong *)*plVar6;
        *plVar5 = (longlong)plVar6;
      }
      else {
        lVar4 = (longlong)(int)plVar6[2] + (longlong)param_2;
        *(int *)(plVar6 + 2) = (int)lVar4;
        *(undefined4 *)(plVar6 + 4) = *(undefined4 *)((longlong)plVar6 + lVar4 * 4 + 0x24);
        plVar5 = plVar6;
        plVar6 = (longlong *)*plVar6;
      }
    } while (plVar6 != (longlong *)0x0);
    plVar6 = (longlong *)*param_1;
    if (plVar6 != (longlong *)0x0) {
      plVar2 = param_1;
      for (plVar5 = (longlong *)*plVar6; plVar5 != (longlong *)0x0; plVar5 = (longlong *)*plVar5) {
        plVar3 = plVar6;
        if ((int)plVar5[4] < (int)plVar6[4]) {
          *plVar2 = (longlong)plVar5;
          *plVar6 = *plVar5;
          *plVar5 = (longlong)plVar6;
          plVar5 = (longlong *)*param_1;
          plVar3 = param_1;
        }
        plVar6 = plVar5;
        plVar2 = plVar3;
      }
    }
  }
  return;
}

