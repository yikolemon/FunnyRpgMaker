/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180194bf8 */

undefined8
FUN_180194bf8(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (0 < (longlong)*(int *)(param_1 + 0x28)) {
    plVar4 = *(longlong **)(param_1 + 0x20);
    plVar3 = plVar4 + *(int *)(param_1 + 0x28);
    do {
      iVar1 = *(int *)(*plVar4 + 4);
      if ((((iVar1 != param_4) && (iVar1 != param_2)) && (iVar1 != param_3)) &&
         (cVar2 = FUN_1800fe4cb(param_5,param_6,param_7,*plVar4 + 8), cVar2 != '\0')) {
        return 0;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 < plVar3);
  }
  return 1;
}

