/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020660b */

int FUN_18020660b(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1801cc4a4(*param_1);
  if (iVar1 == 0) {
    lVar2 = FUN_180207ad8(param_1);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 8))
                (*(undefined8 *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 4),0,0);
    }
  }
  return iVar1;
}

