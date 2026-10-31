/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049228d */

uint __fastcall FUN_0049228d(undefined4 *param_1)

{
  int *piVar1;
  FILE *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  piVar1 = (int *)param_1[1];
  pFVar2 = *(FILE **)*param_1;
  uVar3 = FUN_00498440(pFVar2);
  uVar4 = FUN_00492082(*(WCHAR **)param_1[2],*(uint *)param_1[3],*(uint *)param_1[4],
                       *(FILE **)*param_1,(int *)param_1[1]);
  FUN_00498529((char)uVar3,pFVar2,piVar1);
  return uVar4;
}

