/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018d5c4 */

undefined4 __thiscall
FUN_1018d5c4(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
            undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar4 = *(int **)(param_1 + 0x10);
    piVar1 = piVar4 + *(int *)(param_1 + 0x14);
    do {
      iVar2 = *(int *)(*piVar4 + 4);
      if ((((iVar2 != param_4) && (iVar2 != param_2)) && (iVar2 != param_3)) &&
         (cVar3 = FUN_100f9edd(param_5,param_6,param_7,*piVar4 + 8), cVar3 != '\0')) {
        return 0;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 < piVar1);
  }
  return 1;
}

