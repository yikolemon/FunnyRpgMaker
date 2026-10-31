/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140018470 */

longlong *
FUN_140018470(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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
  undefined8 *puVar13;
  ulonglong uVar14;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = param_3[2];
  uVar3 = param_4[2];
  uVar1 = uVar3 + uVar2;
  if ((ulonglong)param_3[3] < (ulonglong)param_4[3] || param_3[3] - uVar2 < uVar3) {
    if (param_4[3] - uVar3 < uVar2) {
      if (uVar3 <= (uVar2 ^ 0x7fffffffffffffff)) {
        uVar14 = 0x16;
        if (0x16 < (uVar1 | 0xf)) {
          uVar14 = uVar1 | 0xf;
        }
        if ((longlong)uVar1 < 0) {
          uVar14 = 0x7fffffffffffffff;
        }
        lVar11 = FUN_140006280(uVar14 + 1);
        *param_1 = lVar11;
        param_1[2] = uVar1;
        param_1[3] = uVar14;
        if (0xf < (ulonglong)param_3[3]) {
          param_3 = (undefined8 *)*param_3;
        }
        FUN_140135ff0(lVar11,param_3,uVar2);
        if (0xf < (ulonglong)param_4[3]) {
          param_4 = (undefined8 *)*param_4;
        }
        FUN_140135ff0(lVar11 + uVar2,param_4,uVar3 + 1);
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
    param_4[3] = 0xf;
    *(undefined1 *)param_4 = 0;
    lVar11 = *param_1;
    FUN_140135ff0(lVar11 + uVar2,lVar11,uVar3 + 1,param_4,0xfffffffffffffffe);
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_140135ff0(lVar11,param_3,uVar2);
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
    param_3[3] = 0xf;
    *(undefined1 *)param_3 = 0;
    plVar12 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar12 = (longlong *)*param_1;
    }
    puVar13 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar13 = (undefined8 *)*param_4;
    }
    FUN_140135ff0((longlong)plVar12 + uVar2,puVar13,uVar3 + 1,param_4,0xfffffffffffffffe);
  }
  param_1[2] = uVar1;
  return param_1;
}

