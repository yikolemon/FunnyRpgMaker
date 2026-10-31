/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421960 */

int __cdecl FUN_00421960(int *param_1,undefined *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 6;
  if (param_2 != (undefined *)0x0 && param_1 != (int *)0x0) {
    iVar3 = *param_1;
    do {
      if (iVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(iVar3 + 4);
      iVar2 = (*(code *)param_2)(iVar3,param_3);
      iVar3 = iVar1;
    } while (iVar2 == 0);
  }
  return iVar2;
}

