/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018f679 */

undefined4 FUN_1018f679(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x74);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x294);
  }
  if (*(code **)(iVar2 + 0xc) != (code *)0x0) {
    cVar1 = (**(code **)(iVar2 + 0xc))(param_1,param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

