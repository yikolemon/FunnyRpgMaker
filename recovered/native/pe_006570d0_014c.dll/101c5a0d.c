/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c5a0d */

int * __fastcall FUN_101c5a0d(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0x14);
  uVar3 = (**(code **)(param_1 + 0xc))(&stack0x00000004);
  piVar4 = piVar1 + uVar3 % *(uint *)(param_1 + 4);
  while( true ) {
    if (*piVar4 == 0) {
      return piVar4;
    }
    cVar2 = (**(code **)(param_1 + 0x10))(*piVar4,&stack0x00000004);
    if (cVar2 != '\0') break;
    piVar4 = piVar4 + -1;
    if (piVar4 < piVar1) {
      piVar4 = piVar1 + *(int *)(param_1 + 4) + -1;
    }
  }
  return piVar4;
}

