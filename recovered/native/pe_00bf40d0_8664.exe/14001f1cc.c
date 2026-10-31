/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001f1cc */

undefined8 FUN_14001f1cc(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 != 0x756e6963) {
    if ((param_2 == 0) && (*(int *)(param_1 + 0x38) == 0)) {
      return 6;
    }
    plVar5 = *(longlong **)(param_1 + 0x40);
    if (plVar5 == (longlong *)0x0) {
      return 0x26;
    }
    if (0 < (longlong)*(int *)(param_1 + 0x38)) {
      plVar1 = plVar5 + *(int *)(param_1 + 0x38);
      do {
        if (*(int *)(*plVar5 + 8) == param_2) {
          *(longlong *)(param_1 + 0x88) = *plVar5;
          return 0;
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 < plVar1);
    }
    return 6;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  uVar6 = 0x26;
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x38);
    if (0 < lVar4) {
      puVar7 = puVar2 + lVar4 + -1;
      do {
        plVar5 = (longlong *)*puVar7;
        if ((int)plVar5[1] == 0x756e6963) {
          if (*(short *)((longlong)plVar5 + 0xc) == 0) {
            if (*(short *)((longlong)plVar5 + 0xe) == 6) {
              iVar3 = FUN_14001e13a(plVar5);
              if (iVar3 == 0xd) {
                plVar5 = (longlong *)*puVar7;
                goto LAB_14001e120;
              }
            }
            else if (*(short *)((longlong)plVar5 + 0xe) == 4) goto LAB_14001e120;
          }
          else if ((*(short *)((longlong)plVar5 + 0xc) == 3) &&
                  (*(short *)((longlong)plVar5 + 0xe) == 10)) goto LAB_14001e120;
        }
        puVar7 = puVar7 + -1;
      } while (puVar2 <= puVar7);
      lVar4 = (longlong)*(int *)(param_1 + 0x38);
    }
    puVar7 = puVar2 + lVar4;
    do {
      puVar7 = puVar7 + -1;
      if (puVar7 < puVar2) {
        return 0x26;
      }
      plVar5 = (longlong *)*puVar7;
    } while ((int)plVar5[1] != 0x756e6963);
LAB_14001e120:
    *(longlong **)(param_1 + 0x88) = plVar5;
    uVar6 = 0;
  }
  return uVar6;
}

