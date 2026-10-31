/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bf4e8 */

void FUN_101bf4e8(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = (int *)FUN_101bd5e3();
  if (*piVar3 != 0) {
    iVar4 = FUN_1010331e();
    iVar1 = *(int *)(iVar4 + 0xa8);
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar4 + 0xb0);
      iVar5 = 0;
      do {
        if (*(short *)(*(int *)(iVar4 + iVar5) + 0x4c) == 1) {
          FUN_101bf1c7();
        }
        iVar5 = iVar5 + 4;
      } while (iVar1 << 2 != iVar5);
    }
    piVar2 = (int *)piVar3[9];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3[9] = 0;
    }
    piVar2 = (int *)piVar3[10];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3[10] = 0;
    }
    piVar2 = (int *)piVar3[4];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3[4] = 0;
    }
    piVar2 = (int *)piVar3[3];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3[3] = 0;
    }
    piVar2 = (int *)piVar3[0xc];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3[0xc] = 0;
    }
    piVar2 = (int *)piVar3[0xd];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3[0xd] = 0;
    }
    piVar2 = (int *)piVar3[0xb];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3[0xb] = 0;
    }
    piVar2 = (int *)piVar3[8];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3[8] = 0;
    }
    piVar2 = (int *)piVar3[7];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3[7] = 0;
    }
    piVar2 = (int *)piVar3[6];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3[6] = 0;
    }
    piVar2 = (int *)piVar3[5];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar3[5] = 0;
    }
  }
  return;
}

