/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801effd3 */

void FUN_1801effd3(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = **(uint **)(*param_1 + 0x408);
  uVar4 = (ulonglong)uVar1;
  if (uVar1 < ((int)param_1[5] - *(int *)((longlong)param_1 + 0x24)) + 1U) {
    lVar2 = *(longlong *)(*(uint **)(*param_1 + 0x408) + 4);
    if (lVar2 == 0) {
      if (uVar4 != 0) {
        FUN_1802a89a0(param_2,0,uVar4 * 4);
      }
    }
    else if (uVar4 != 0) {
      uVar3 = 0;
      do {
        *(int *)(param_2 + uVar3 * 4) = *(int *)(lVar2 + uVar3 * 4) >> 2;
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
    *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + uVar1;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x82;
  }
  return;
}

