/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402652a8 */

longlong * FUN_1402652a8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  param_1[1] = param_1[1] + 1;
  plVar4 = (longlong *)*param_1;
  plVar3 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar3;
  if (plVar3 == plVar4) {
    *plVar4 = (longlong)param_3;
    plVar4[1] = (longlong)param_3;
    plVar4[2] = (longlong)param_3;
    plVar4 = param_3;
  }
  else {
    plVar1 = param_3 + 1;
    if ((int)param_2[1] == 0) {
      plVar3[2] = (longlong)param_3;
      if (*param_2 == plVar4[2]) {
        plVar4[2] = (longlong)param_3;
      }
    }
    else {
      *plVar3 = (longlong)param_3;
      if (*param_2 == *plVar4) {
        *plVar4 = (longlong)param_3;
      }
    }
    plVar3 = (longlong *)*plVar1;
    cVar2 = (char)plVar3[3];
    plVar6 = param_3;
    while (cVar2 == '\0') {
      plVar5 = *(longlong **)plVar3[1];
      if (plVar3 == plVar5) {
        plVar5 = (longlong *)((longlong *)plVar3[1])[2];
        if ((char)plVar5[3] == '\0') goto LAB_1402653b1;
        if (plVar6 == (longlong *)plVar3[2]) {
          FUN_140264e48(param_1,plVar3);
          plVar6 = plVar3;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        FUN_140264e8c(param_1,*(undefined8 *)(plVar6[1] + 8));
      }
      else if ((char)plVar5[3] == '\0') {
LAB_1402653b1:
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(plVar5 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar1 + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(*plVar1 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar3) {
          FUN_140264e8c(param_1,plVar3);
          plVar6 = plVar3;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        FUN_140264e48(param_1,*(undefined8 *)(plVar6[1] + 8));
      }
      plVar1 = plVar6 + 1;
      plVar3 = (longlong *)plVar6[1];
      cVar2 = (char)plVar3[3];
    }
    plVar4 = (longlong *)plVar4[1];
  }
  *(undefined1 *)(plVar4 + 3) = 1;
  return param_3;
}

