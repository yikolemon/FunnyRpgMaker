/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400603a3 */

int FUN_1400603a3(longlong *param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = 6;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)((longlong)param_1 + 0x1c))) {
    uVar5 = (ulonglong)param_4;
    lVar3 = *param_1;
    uVar1 = param_1[2];
    uVar4 = uVar1;
    if (uVar1 < param_1[1] + uVar5) {
      do {
        uVar4 = uVar4 + (uVar4 >> 2) + 0x400 & 0xfffffffffffffc00;
      } while (uVar4 < param_1[1] + uVar5);
      uVar6 = (longlong)param_3 - lVar3;
      uVar7 = 0xffffffffffffffff;
      if (-1 < (longlong)uVar6) {
        uVar7 = uVar6;
      }
      if (uVar1 <= uVar6) {
        uVar7 = 0xffffffffffffffff;
      }
      iVar2 = FUN_140063839(param_1,uVar4);
      if ((iVar2 == 0) && (-1 < (longlong)uVar7)) {
        param_3 = (undefined8 *)(uVar7 + *param_1);
      }
      else if (iVar2 != 0) {
        return iVar2;
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
      FUN_1400b3550((undefined8 *)(*param_1 + param_1[1]),param_3,uVar5);
    }
    param_1[1] = param_1[1] + uVar5;
    iVar2 = 0;
  }
  return iVar2;
}

