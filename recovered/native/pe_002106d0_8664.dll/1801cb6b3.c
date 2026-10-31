/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cb6b3 */

undefined8 FUN_1801cb6b3(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  uVar4 = 0x26;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x38);
    if (0 < lVar3) {
      plVar5 = plVar1 + lVar3 + -1;
      do {
        lVar3 = *plVar5;
        if (*(int *)(lVar3 + 8) == 0x756e6963) {
          if (*(short *)(lVar3 + 0xc) == 0) {
            if (*(short *)(lVar3 + 0xe) == 6) {
              iVar2 = FUN_1801cb762();
              if (iVar2 == 0xd) {
                lVar3 = *plVar5;
                goto LAB_1801cb748;
              }
            }
            else if (*(short *)(lVar3 + 0xe) == 4) goto LAB_1801cb748;
          }
          else if ((*(short *)(lVar3 + 0xc) == 3) && (*(short *)(lVar3 + 0xe) == 10))
          goto LAB_1801cb748;
        }
        plVar5 = plVar5 + -1;
      } while (plVar1 <= plVar5);
      lVar3 = (longlong)*(int *)(param_1 + 0x38);
    }
    plVar5 = plVar1 + lVar3;
    do {
      plVar5 = plVar5 + -1;
      if (plVar5 < plVar1) {
        return 0x26;
      }
      lVar3 = *plVar5;
    } while (*(int *)(lVar3 + 8) != 0x756e6963);
LAB_1801cb748:
    *(longlong *)(param_1 + 0x88) = lVar3;
    uVar4 = 0;
  }
  return uVar4;
}

