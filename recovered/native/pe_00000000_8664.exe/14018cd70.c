/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018cd70 */

longlong FUN_14018cd70(longlong param_1,short *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  for (lVar4 = param_3; 0 < lVar4; lVar4 = lVar4 + lVar2) {
    if ((**(longlong **)(param_1 + 0x38) == 0) || (iVar1 = **(int **)(param_1 + 0x50), iVar1 < 1)) {
      sVar3 = (*(code *)PTR__guard_dispatch_icall_140ee15d0)(param_1);
      if (sVar3 == -1) break;
      *param_2 = sVar3;
      lVar2 = -1;
      lVar5 = 2;
    }
    else {
      lVar6 = lVar4;
      if (iVar1 <= lVar4) {
        lVar6 = (longlong)iVar1;
      }
      lVar5 = lVar6 * 2;
      FUN_1401c5180(param_2,**(longlong **)(param_1 + 0x38),lVar5);
      lVar2 = -lVar6;
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) - (int)lVar6;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + (longlong)(int)lVar6 * 2;
    }
    param_2 = (short *)((longlong)param_2 + lVar5);
  }
  return param_3 - lVar4;
}

