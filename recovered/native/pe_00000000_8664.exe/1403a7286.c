/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a7286 */

void FUN_1403a7286(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1403a985a(param_2);
  iVar1 = *(int *)(param_2 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + lVar4) + 0x88);
      if (((lVar3 != 0) || (lVar3 = *(longlong *)(param_1 + 0x2b8), lVar3 != 0)) &&
         (*(code **)(lVar3 + 0x20) != (code *)0x0)) {
        (**(code **)(lVar3 + 0x20))(param_1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}

