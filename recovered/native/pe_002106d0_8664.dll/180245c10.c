/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180245c10 */

longlong FUN_180245c10(longlong param_1,undefined2 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  for (lVar4 = param_3; 0 < lVar4; lVar4 = lVar4 + lVar2) {
    if ((**(longlong **)(param_1 + 0x40) == 0) || (iVar1 = **(int **)(param_1 + 0x58), iVar1 < 1)) {
      sVar3 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(param_1,*param_2);
      if (sVar3 == -1) break;
      lVar2 = -1;
      lVar5 = 2;
    }
    else {
      lVar6 = lVar4;
      if (iVar1 <= lVar4) {
        lVar6 = (longlong)iVar1;
      }
      lVar5 = lVar6 * 2;
      FUN_1802a82f0(**(longlong **)(param_1 + 0x40),param_2,lVar5);
      lVar2 = -lVar6;
      **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) - (int)lVar6;
      **(longlong **)(param_1 + 0x40) = **(longlong **)(param_1 + 0x40) + (longlong)(int)lVar6 * 2;
    }
    param_2 = (undefined2 *)((longlong)param_2 + lVar5);
  }
  return param_3 - lVar4;
}

