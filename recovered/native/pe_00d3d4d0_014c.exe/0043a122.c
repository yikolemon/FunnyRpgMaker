/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a122 */

void __fastcall FUN_0043a122(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x17c);
  if ((piVar3 != (int *)0x0) && (*(int *)(param_1 + 0x174) != 0)) {
    piVar1 = piVar3 + *(int *)(param_1 + 0x174) * 5;
    do {
      if ((*(char *)(param_1 + 0x148) == (char)piVar3[3]) && ((char)piVar3[4] != '\0')) {
        iVar4 = *(int *)(param_1 + 0x188);
        if (iVar4 < *(int *)(param_1 + 0x18c)) {
          iVar2 = *(int *)(param_1 + 400);
          *(int *)(param_1 + 0x188) = iVar4 + 1;
          iVar4 = iVar4 * 0x10;
          *(undefined4 *)(iVar2 + iVar4) = *(undefined4 *)(param_1 + 0x138);
          *(int *)(iVar2 + 4 + iVar4) = *(int *)(param_1 + 0x140) + 1;
          *(undefined4 *)(iVar2 + 8 + iVar4) = 1;
          *(int **)(iVar2 + 0xc + iVar4) = piVar3;
          FUN_0044427c(param_1,*piVar3,piVar3[1]);
          return;
        }
        *(undefined4 *)(param_1 + 0x10) = 0x82;
        return;
      }
      piVar3 = piVar3 + 5;
    } while (piVar3 < piVar1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0x80;
  return;
}

