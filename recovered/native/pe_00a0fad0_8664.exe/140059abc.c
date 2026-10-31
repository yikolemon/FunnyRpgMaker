/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140059abc */

longlong *
FUN_140059abc(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = param_3[2];
  uVar3 = param_4[2];
  uVar1 = uVar2 + uVar3;
  if ((ulonglong)param_3[3] < (ulonglong)param_4[3] || param_3[3] - uVar2 < uVar3) {
    if (param_4[3] - uVar3 < uVar2) {
      if (uVar3 <= 0x7ffffffffffffffe - uVar2) {
        uVar13 = 10;
        if (10 < (uVar1 | 7)) {
          uVar13 = uVar1 | 7;
        }
        if (0x7ffffffffffffffd < uVar13) {
          uVar13 = 0x7ffffffffffffffe;
        }
        lVar11 = FUN_140008b48(param_1);
        *param_1 = lVar11;
        param_1[2] = uVar1;
        param_1[3] = uVar13;
        if (7 < (ulonglong)param_3[3]) {
          param_3 = (undefined8 *)*param_3;
        }
        FUN_140135ff0(lVar11,param_3,uVar2 * 2);
        if (7 < (ulonglong)param_4[3]) {
          param_4 = (undefined8 *)*param_4;
        }
        FUN_140135ff0(lVar11 + uVar2 * 2,param_4,uVar3 * 2 + 2);
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14000626f();
    }
    uVar4 = *(undefined4 *)param_4;
    uVar5 = *(undefined4 *)((longlong)param_4 + 4);
    uVar6 = *(undefined4 *)(param_4 + 1);
    uVar7 = *(undefined4 *)((longlong)param_4 + 0xc);
    uVar8 = *(undefined4 *)((longlong)param_4 + 0x14);
    uVar9 = *(undefined4 *)(param_4 + 3);
    uVar10 = *(undefined4 *)((longlong)param_4 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_4 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar8;
    *(undefined4 *)(param_1 + 3) = uVar9;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar10;
    *(undefined4 *)param_1 = uVar4;
    *(undefined4 *)((longlong)param_1 + 4) = uVar5;
    *(undefined4 *)(param_1 + 1) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
    param_4[2] = 0;
    param_4[3] = 7;
    *(undefined2 *)param_4 = 0;
    lVar11 = *param_1;
    FUN_140135ff0(lVar11 + uVar2 * 2,lVar11,uVar3 * 2 + 2);
    if (7 < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_140135ff0(lVar11,param_3,uVar2 * 2);
  }
  else {
    uVar4 = *(undefined4 *)param_3;
    uVar5 = *(undefined4 *)((longlong)param_3 + 4);
    uVar6 = *(undefined4 *)(param_3 + 1);
    uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar8 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar9 = *(undefined4 *)(param_3 + 3);
    uVar10 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar8;
    *(undefined4 *)(param_1 + 3) = uVar9;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar10;
    *(undefined4 *)param_1 = uVar4;
    *(undefined4 *)((longlong)param_1 + 4) = uVar5;
    *(undefined4 *)(param_1 + 1) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
    param_3[2] = 0;
    param_3[3] = 7;
    *(undefined2 *)param_3 = 0;
    plVar12 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      plVar12 = (longlong *)*param_1;
    }
    if (7 < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    FUN_140135ff0((longlong)plVar12 + uVar2 * 2,param_4,uVar3 * 2 + 2);
  }
  param_1[2] = uVar1;
  return param_1;
}

