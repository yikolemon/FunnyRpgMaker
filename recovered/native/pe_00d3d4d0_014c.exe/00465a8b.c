/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00465a8b */

void __fastcall FUN_00465a8b(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar2 = (int *)param_1[2];
    do {
      FUN_00466549(piVar2,param_2,param_3,param_4);
      piVar2 = piVar2 + 7;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

