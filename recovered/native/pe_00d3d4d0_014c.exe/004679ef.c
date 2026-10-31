/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004679ef */

void __fastcall FUN_004679ef(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1[1] != 0) {
    return;
  }
  piVar2 = (int *)(param_4 + 4);
  iVar3 = param_3 + 1;
  do {
    iVar1 = FUN_00467a42((uint *)(param_1 + (uint)(param_2 != 0) * 9 + 4),piVar2[-1],*piVar2,
                         *param_1,(uint *)0x0);
    if (iVar1 != 0) {
      param_1[1] = iVar1;
      return;
    }
    piVar2 = piVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (1 < iVar3);
  return;
}

