/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180212d67 */

undefined8 FUN_180212d67(longlong *param_1,uint param_2,longlong param_3,uint param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar2 = 6;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)((longlong)param_1 + 0x1c))) {
    uVar5 = (ulonglong)param_4;
    lVar3 = *param_1;
    uVar1 = param_1[2];
    uVar4 = uVar1;
    if (uVar1 < param_1[1] + uVar5) {
      do {
        uVar4 = uVar4 + (uVar4 >> 2) + 0x400 & 0xfffffffffffffc00;
      } while (uVar4 < param_1[1] + uVar5);
      uVar6 = param_3 - lVar3;
      uVar4 = 0xffffffffffffffff;
      if (-1 < (longlong)uVar6) {
        uVar4 = uVar6;
      }
      if (uVar1 <= uVar6) {
        uVar4 = 0xffffffffffffffff;
      }
      uVar2 = FUN_1802161fd(param_1);
      if (((int)uVar2 == 0) && (-1 < (longlong)uVar4)) {
        param_3 = uVar4 + *param_1;
      }
      else if ((int)uVar2 != 0) {
        return uVar2;
      }
      lVar3 = *param_1;
    }
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar3 + param_1[1];
    }
    *(longlong *)(param_1[4] + (ulonglong)param_2 * 8) = lVar3;
    *(uint *)(param_1[5] + (ulonglong)param_2 * 4) = param_4;
    if (param_4 != 0) {
      FUN_1802a82f0(*param_1 + param_1[1],param_3,uVar5);
    }
    param_1[1] = param_1[1] + uVar5;
    uVar2 = 0;
  }
  return uVar2;
}

