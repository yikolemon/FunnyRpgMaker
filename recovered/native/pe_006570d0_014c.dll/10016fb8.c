/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10016fb8 */

void __fastcall FUN_10016fb8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)((int *)*param_1)[2];
  piVar3 = (int *)*param_1;
  if (*(char *)((int)piVar1 + 0xd) == '\0') {
    do {
      piVar2 = piVar1;
      piVar1 = (int *)*piVar2;
    } while (*(char *)(*piVar2 + 0xd) == '\0');
  }
  else {
    while ((piVar2 = (int *)piVar3[1], *(char *)((int)piVar2 + 0xd) == '\0' &&
           (piVar3 == (int *)piVar2[2]))) {
      *param_1 = (int)piVar2;
      piVar3 = piVar2;
    }
  }
  *param_1 = (int)piVar2;
  return;
}

