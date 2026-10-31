/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10101a75 */

void FUN_10101a75(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2700) != 0) {
    iVar1 = *(int *)(param_1 + 0x2708);
    iVar2 = *(int *)(param_1 + 0x2700) * 0x14;
    do {
      if (*(int *)(iVar1 + 4) == param_2) {
        (**(code **)(iVar1 + 0xc))(param_1,iVar1);
      }
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + -0x14;
    } while (iVar2 != 0);
  }
  return;
}

