/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00476bff */

void __fastcall FUN_00476bff(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar3 = (int *)*param_1;
  piVar5 = param_1;
  if (piVar3 != (int *)0x0) {
    do {
      piVar1 = piVar3 + 3;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        piVar3 = (int *)*piVar3;
        *piVar5 = (int)piVar3;
      }
      else {
        iVar2 = piVar3[2];
        piVar3[2] = iVar2 + param_2;
        piVar3[6] = piVar3[iVar2 + param_2 + 7];
        piVar5 = piVar3;
        piVar3 = (int *)*piVar3;
      }
    } while (piVar3 != (int *)0x0);
    piVar3 = (int *)*param_1;
    if (piVar3 != (int *)0x0) {
      piVar1 = param_1;
      for (piVar5 = (int *)*piVar3; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
        piVar4 = piVar3;
        if (piVar5[6] < piVar3[6]) {
          *piVar1 = (int)piVar5;
          *piVar3 = *piVar5;
          *piVar5 = (int)piVar3;
          piVar5 = (int *)*param_1;
          piVar4 = param_1;
        }
        piVar3 = piVar5;
        piVar1 = piVar4;
      }
    }
  }
  return;
}

