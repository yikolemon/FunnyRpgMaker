/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bdce1 */

void FUN_101bdce1(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  piVar3 = (int *)FUN_101bd5e3();
  if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
    iVar4 = FUN_1010331e();
    iVar5 = *(int *)(iVar4 + 0xa8);
    if (iVar5 != 0) {
      iVar4 = *(int *)(iVar4 + 0xb0);
      iVar6 = 0;
      do {
        iVar1 = *(int *)(iVar4 + iVar6);
        if (*(short *)(iVar1 + 0x4c) == 1) {
          *(undefined4 *)(iVar1 + 4) = 4;
          FUN_101bd5fb(iVar1);
        }
        iVar6 = iVar6 + 4;
      } while (iVar5 << 2 != iVar6);
    }
    piVar2 = (int *)piVar3[1];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3[1] = 0;
    }
    piVar2 = (int *)piVar3[2];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3[2] = 0;
    }
    iVar4 = FUN_1010331e(unaff_ESI,unaff_EDI);
    iVar5 = *(int *)(iVar4 + 0xb4);
    if (1 < iVar5) {
      iVar6 = 1;
      do {
        iVar1 = *(int *)(*(int *)(iVar4 + 0xbc) + iVar6 * 4);
        if (*(int *)(iVar1 + 0x40) != 0) {
          FUN_101be0cf(iVar1);
          iVar5 = *(int *)(iVar4 + 0xb4);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    return;
  }
  return;
}

