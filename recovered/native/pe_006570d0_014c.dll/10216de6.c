/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10216de6 */

int * __fastcall FUN_10216de6(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (*(ushort *)(param_1 + 0x98) != 0) {
    piVar1 = *(int **)(param_1 + 0x9c);
    piVar2 = piVar1 + (uint)*(ushort *)(param_1 + 0x98) * 4;
    do {
      if ((*piVar1 == param_2) && (piVar1[3] != 0)) {
        return piVar1;
      }
      piVar1 = piVar1 + 4;
    } while (piVar1 < piVar2);
  }
  return (int *)0x0;
}

