/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045dd89 */

byte * __fastcall FUN_0045dd89(int param_1,int *param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1[3] < 2) {
    FUN_0045e0ea(piVar1);
  }
  do {
    piVar1[3] = 0;
    pbVar2 = FUN_0045e134(piVar1);
    if (pbVar2 != (byte *)0x0) {
      if (param_2 == (int *)0x0) {
        return pbVar2;
      }
      iVar3 = ~(uint)pbVar2 + *piVar1;
      goto LAB_0045ddc9;
    }
  } while (piVar1[3] == 2);
  iVar3 = 0;
  if (param_2 == (int *)0x0) {
    pbVar2 = (byte *)0x0;
  }
  else {
LAB_0045ddc9:
    *param_2 = iVar3;
  }
  return pbVar2;
}

