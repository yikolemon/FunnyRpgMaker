/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100244ca */

void __fastcall FUN_100244ca(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    piVar1 = (int *)*piVar3;
    if (*(char *)(*piVar3 + 0xd) == '\0') {
      do {
        piVar2 = piVar1;
        piVar1 = (int *)piVar2[2];
      } while (*(char *)(piVar2[2] + 0xd) == '\0');
    }
    else {
      piVar2 = (int *)piVar3[1];
      if (*(char *)((int)piVar2 + 0xd) == '\0') {
        do {
          piVar1 = piVar2;
          piVar2 = piVar1;
          if (piVar3 != (int *)*piVar1) break;
          *param_1 = (int)piVar1;
          piVar2 = (int *)piVar1[1];
          piVar3 = piVar1;
        } while (*(char *)((int)piVar2 + 0xd) == '\0');
        if (*(char *)((int)piVar3 + 0xd) != '\0') {
          return;
        }
      }
    }
  }
  else {
    piVar2 = (int *)piVar3[2];
  }
  *param_1 = (int)piVar2;
  return;
}

