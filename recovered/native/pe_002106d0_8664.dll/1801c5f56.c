/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c5f56 */

void FUN_1801c5f56(int *param_1,longlong param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int local_54;
  
  uVar10 = 0;
  uVar7 = *param_3 - *param_1;
  uVar9 = (ulonglong)uVar7;
  if (uVar7 == 0 || (int)*param_3 < *param_1) {
    uVar9 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1800fe7f8(uVar9 << 3);
  }
  local_54 = -1;
  for (uVar7 = 0; (int)uVar7 < (int)*param_3; uVar7 = uVar7 + 1) {
    uVar4 = (**(code **)(param_1 + 4))(param_1,uVar7);
    cVar3 = FUN_18014f686(param_1,uVar4);
    if (cVar3 == '\0') {
      lVar2 = *(longlong *)(param_3 + 2);
      uVar1 = uVar10 + 1;
      lVar6 = lVar5;
      if (uVar10 == (uint)uVar9) {
        uVar8 = (uVar10 >> 1) + uVar10;
        if (uVar10 == 0) {
          uVar8 = 8;
        }
        if ((int)uVar8 <= (int)uVar1) {
          uVar8 = uVar1;
        }
        uVar9 = (ulonglong)uVar8;
        lVar6 = FUN_1800fe7f8(uVar9 * 8);
        if (lVar5 != 0) {
          FUN_1802a82f0(lVar6,lVar5,(ulonglong)uVar10 << 3);
          FUN_1800fe8d4(lVar5);
        }
      }
      lVar5 = lVar6;
      *(undefined8 *)(lVar5 + (longlong)(int)uVar10 * 8) =
           *(undefined8 *)(lVar2 + (ulonglong)uVar7 * 8);
      uVar10 = uVar1;
    }
    if (param_4 == uVar7) {
      local_54 = uVar10 - 1;
    }
  }
  *param_3 = uVar10;
  param_3[1] = (uint)uVar9;
  lVar2 = *(longlong *)(param_3 + 2);
  *(longlong *)(param_3 + 2) = lVar5;
  FUN_18014f5d6(param_1);
  if ((local_54 != -1) && (*(char *)(param_2 + 0x20) == '\x01')) {
    uVar4 = (**(code **)(param_1 + 4))(param_1,local_54);
    FUN_18014f78a(param_1,uVar4,1);
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_1800fe8d4(lVar2);
  return;
}

