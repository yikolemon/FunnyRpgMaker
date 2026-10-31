/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c199b */

undefined4 FUN_101c199b(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x28);
  uVar4 = 0x26;
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x24);
    if (0 < iVar2) {
      piVar3 = piVar1 + iVar2 + -1;
      do {
        iVar2 = *piVar3;
        if (*(int *)(iVar2 + 4) == 0x756e6963) {
          if (*(short *)(iVar2 + 8) == 0) {
            if (*(short *)(iVar2 + 10) == 6) {
              iVar2 = FUN_101c1a2f(iVar2);
              if (iVar2 == 0xd) {
                iVar2 = *piVar3;
                goto LAB_101c1a1e;
              }
            }
            else if (*(short *)(iVar2 + 10) == 4) goto LAB_101c1a1e;
          }
          else if ((*(short *)(iVar2 + 8) == 3) && (*(short *)(iVar2 + 10) == 10))
          goto LAB_101c1a1e;
        }
        piVar3 = piVar3 + -1;
      } while (piVar1 <= piVar3);
      iVar2 = *(int *)(param_1 + 0x24);
    }
    piVar3 = piVar1 + iVar2;
    do {
      piVar3 = piVar3 + -1;
      if (piVar3 < piVar1) {
        return 0x26;
      }
      iVar2 = *piVar3;
    } while (*(int *)(iVar2 + 4) != 0x756e6963);
LAB_101c1a1e:
    *(int *)(param_1 + 0x5c) = iVar2;
    uVar4 = 0;
  }
  return uVar4;
}

