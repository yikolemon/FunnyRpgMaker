/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00418c8c */

void FUN_00418c8c(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_2 + 0xd);
  while (cVar1 == '\0') {
    FUN_00418c8c(param_1,(int *)param_2[2]);
    piVar2 = (int *)*param_2;
    FUN_0047f280(param_2);
    param_2 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}

