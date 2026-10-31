/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180178ff9 */

void FUN_180178ff9(longlong param_1,longlong param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = param_3 - 1;
  if (param_4 == 1) {
    if (-1 < (int)uVar3) {
      uVar1 = (ulonglong)uVar3;
      do {
        *(undefined1 *)(param_1 + 1 + uVar1 * 2) = 0xff;
        *(undefined1 *)(param_1 + uVar1 * 2) = *(undefined1 *)(param_2 + uVar1);
        bVar4 = uVar1 != 0;
        uVar1 = uVar1 - 1;
      } while (bVar4);
    }
  }
  else if (-1 < (int)uVar3) {
    uVar1 = (ulonglong)uVar3;
    puVar2 = (undefined1 *)(param_2 + uVar1 * 3 + 2);
    do {
      *(undefined1 *)(param_1 + 3 + uVar1 * 4) = 0xff;
      *(undefined1 *)(param_1 + 2 + uVar1 * 4) = *puVar2;
      *(undefined1 *)(param_1 + 1 + uVar1 * 4) = puVar2[-1];
      *(undefined1 *)(param_1 + uVar1 * 4) = puVar2[-2];
      puVar2 = puVar2 + -3;
      bVar4 = uVar1 != 0;
      uVar1 = uVar1 - 1;
    } while (bVar4);
  }
  return;
}

