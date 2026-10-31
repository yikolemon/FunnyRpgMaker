/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019a642 */

void FUN_18019a642(uint *param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if ((int)param_1[8] < (int)param_2) {
    uVar3 = (ulonglong)param_2;
    uVar4 = param_1[1];
    if ((int)uVar4 < (int)param_2) {
      if (uVar4 == 0) {
        uVar4 = 8;
      }
      else {
        uVar4 = (int)uVar4 / 2 + uVar4;
      }
      uVar2 = (ulonglong)uVar4;
      if ((int)uVar4 <= (int)param_2) {
        uVar2 = uVar3;
      }
      uVar1 = FUN_1800fe7f8(uVar2 * 4);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1802a82f0(uVar1,*(longlong *)(param_1 + 2),(longlong)(int)*param_1 << 2);
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
      }
      *(undefined8 *)(param_1 + 2) = uVar1;
      param_1[1] = (uint)uVar2;
    }
    uVar2 = (ulonglong)(int)*param_1;
    if ((int)*param_1 < (int)param_2) {
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 2) + uVar2 * 4) = 0xbf800000;
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
    }
    *param_1 = param_2;
    uVar4 = param_1[9];
    if ((int)uVar4 < (int)param_2) {
      if (uVar4 == 0) {
        uVar4 = 8;
      }
      else {
        uVar4 = (int)uVar4 / 2 + uVar4;
      }
      if ((int)uVar4 <= (int)param_2) {
        uVar4 = param_2;
      }
      uVar1 = FUN_1800fe7f8(uVar4 * 2);
      if (*(longlong *)(param_1 + 10) != 0) {
        FUN_1802a82f0(uVar1,*(longlong *)(param_1 + 10),(longlong)(int)param_1[8] * 2);
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 10));
      }
      *(undefined8 *)(param_1 + 10) = uVar1;
      param_1[9] = uVar4;
    }
    uVar2 = (ulonglong)(int)param_1[8];
    if ((int)param_1[8] < (int)param_2) {
      do {
        *(undefined2 *)(*(longlong *)(param_1 + 10) + uVar2 * 2) = 0xffff;
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
    }
    param_1[8] = param_2;
  }
  return;
}

