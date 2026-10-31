/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801065b3 */

void FUN_1801065b3(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x29b8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x29c0);
    lVar2 = (longlong)*(int *)(param_1 + 0x29b8) << 5;
    do {
      if (*(int *)(lVar1 + 4) == param_2) {
        (**(code **)(lVar1 + 0x10))(param_1,lVar1);
      }
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return;
}

