/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180121f9a */

void FUN_180121f9a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x2940);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2948);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x10 + lVar3) == param_2) {
        *(undefined4 *)(lVar2 + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar3);
  }
  return;
}

