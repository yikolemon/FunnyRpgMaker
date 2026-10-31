/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc871 */

undefined8 FUN_1801cc871(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 != 0x756e6963) {
    if ((param_2 == 0) && (*(int *)(param_1 + 0x38) == 0)) {
      return 6;
    }
    plVar4 = *(longlong **)(param_1 + 0x40);
    if (plVar4 == (longlong *)0x0) {
      return 0x26;
    }
    if (0 < (longlong)*(int *)(param_1 + 0x38)) {
      plVar5 = plVar4 + *(int *)(param_1 + 0x38);
      do {
        if (*(int *)(*plVar4 + 8) == param_2) {
          *(longlong *)(param_1 + 0x88) = *plVar4;
          return 0;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 < plVar5);
    }
    return 6;
  }
  plVar4 = *(longlong **)(param_1 + 0x40);
  uVar3 = 0x26;
  if (plVar4 != (longlong *)0x0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38);
    if (0 < lVar2) {
      plVar5 = plVar4 + lVar2 + -1;
      do {
        lVar2 = *plVar5;
        if (*(int *)(lVar2 + 8) == 0x756e6963) {
          if (*(short *)(lVar2 + 0xc) == 0) {
            if (*(short *)(lVar2 + 0xe) == 6) {
              iVar1 = FUN_1801cb762();
              if (iVar1 == 0xd) {
                lVar2 = *plVar5;
                goto LAB_1801cb748;
              }
            }
            else if (*(short *)(lVar2 + 0xe) == 4) goto LAB_1801cb748;
          }
          else if ((*(short *)(lVar2 + 0xc) == 3) && (*(short *)(lVar2 + 0xe) == 10))
          goto LAB_1801cb748;
        }
        plVar5 = plVar5 + -1;
      } while (plVar4 <= plVar5);
      lVar2 = (longlong)*(int *)(param_1 + 0x38);
    }
    plVar5 = plVar4 + lVar2;
    do {
      plVar5 = plVar5 + -1;
      if (plVar5 < plVar4) {
        return 0x26;
      }
      lVar2 = *plVar5;
    } while (*(int *)(lVar2 + 8) != 0x756e6963);
LAB_1801cb748:
    *(longlong *)(param_1 + 0x88) = lVar2;
    uVar3 = 0;
  }
  return uVar3;
}

