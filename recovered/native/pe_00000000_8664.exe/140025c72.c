/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140025c72 */

void FUN_140025c72(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = *param_2;
  uVar3 = 0;
  do {
    *(int *)(*param_1 + uVar3 * 4) = (int)lVar1;
    uVar3 = uVar3 + 1;
    lVar1 = *(longlong *)((longlong)param_2 + 4);
    uVar2 = param_2[1];
    *param_2 = lVar1;
    param_2[1] = uVar2 >> 0x20;
  } while (uVar2 >> 0x20 != 0 || lVar1 != 0);
  uVar2 = param_1[2];
  if (uVar2 < uVar3) {
    (*(code *)param_1[3])(param_1,uVar3);
    uVar2 = param_1[2];
  }
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return;
}

