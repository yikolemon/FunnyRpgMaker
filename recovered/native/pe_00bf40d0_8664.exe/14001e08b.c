/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001e08b */

undefined8 FUN_14001e08b(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  uVar5 = 0x26;
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x38);
    if (0 < lVar3) {
      puVar6 = puVar1 + lVar3 + -1;
      do {
        plVar4 = (longlong *)*puVar6;
        if ((int)plVar4[1] == 0x756e6963) {
          if (*(short *)((longlong)plVar4 + 0xc) == 0) {
            if (*(short *)((longlong)plVar4 + 0xe) == 6) {
              iVar2 = FUN_14001e13a(plVar4);
              if (iVar2 == 0xd) {
                plVar4 = (longlong *)*puVar6;
                goto LAB_14001e120;
              }
            }
            else if (*(short *)((longlong)plVar4 + 0xe) == 4) goto LAB_14001e120;
          }
          else if ((*(short *)((longlong)plVar4 + 0xc) == 3) &&
                  (*(short *)((longlong)plVar4 + 0xe) == 10)) goto LAB_14001e120;
        }
        puVar6 = puVar6 + -1;
      } while (puVar1 <= puVar6);
      lVar3 = (longlong)*(int *)(param_1 + 0x38);
    }
    puVar6 = puVar1 + lVar3;
    do {
      puVar6 = puVar6 + -1;
      if (puVar6 < puVar1) {
        return 0x26;
      }
      plVar4 = (longlong *)*puVar6;
    } while ((int)plVar4[1] != 0x756e6963);
LAB_14001e120:
    *(longlong **)(param_1 + 0x88) = plVar4;
    uVar5 = 0;
  }
  return uVar5;
}

