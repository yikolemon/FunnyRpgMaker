/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400582e8 */

void FUN_1400582e8(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar4 = *param_1;
  if ((ulonglong)((param_1[2] - lVar4 >> 4) * -0x3333333333333333) < param_3) {
    FUN_140058422(param_1,param_3);
    lVar7 = *param_1;
    uVar8 = param_3;
  }
  else {
    lVar7 = param_1[1];
    lVar5 = lVar7 - lVar4 >> 4;
    uVar8 = param_3 + lVar5 * 0x3333333333333333;
    if (param_3 < (ulonglong)(lVar5 * -0x3333333333333333) || uVar8 == 0) {
      FUN_1400585ac(param_2,param_3,lVar4);
      lVar7 = param_1[1];
      lVar4 = param_3 * 0x50 + lVar4;
      for (lVar5 = lVar4; lVar5 != lVar7; lVar5 = lVar5 + 0x50) {
        FUN_14005893a(lVar5);
      }
      goto LAB_1400583da;
    }
    if (lVar4 != lVar7) {
      lVar4 = lVar4 + 0x38;
      do {
        if ((undefined8 *)(lVar4 + -0x38) == param_2) {
          *(undefined8 *)(lVar4 + -8) = param_2[6];
          uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
          uVar2 = *(undefined4 *)(param_2 + 5);
          uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
          *(undefined4 *)(lVar4 + -0x18) = *(undefined4 *)(param_2 + 4);
          *(undefined4 *)(lVar4 + -0x14) = uVar1;
          *(undefined4 *)(lVar4 + -0x10) = uVar2;
          *(undefined4 *)(lVar4 + -0xc) = uVar3;
        }
        else {
          puVar6 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar6 = (undefined8 *)*param_2;
          }
          FUN_140017200((undefined8 *)(lVar4 + -0x38),puVar6,param_2[2]);
          uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
          uVar2 = *(undefined4 *)(param_2 + 5);
          uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
          *(undefined4 *)(lVar4 + -0x18) = *(undefined4 *)(param_2 + 4);
          *(undefined4 *)(lVar4 + -0x14) = uVar1;
          *(undefined4 *)(lVar4 + -0x10) = uVar2;
          *(undefined4 *)(lVar4 + -0xc) = uVar3;
          *(undefined8 *)(lVar4 + -8) = param_2[6];
          FUN_1400587f4(lVar4,param_2[7],param_2[8] - param_2[7]);
        }
        param_2 = param_2 + 10;
        lVar7 = param_1[1];
        lVar5 = lVar4 + 0x18;
        lVar4 = lVar4 + 0x50;
      } while (lVar5 != lVar7);
    }
  }
  lVar4 = FUN_140058507(param_2,uVar8,lVar7,param_1);
LAB_1400583da:
  param_1[1] = lVar4;
  return;
}

