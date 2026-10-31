/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c06ea */

undefined8 *
FUN_1402c06ea(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    uVar7 = param_3;
    if (uVar1 - param_2 < param_3) {
      uVar7 = uVar1 - param_2;
    }
    if (param_5 == uVar7) {
      puVar2 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      FUN_1404b97c0((longlong)puVar2 + param_2,param_4,param_5);
    }
    else {
      lVar4 = ((uVar1 - param_2) - uVar7) + 1;
      uVar5 = param_5 - uVar7;
      if (param_5 < uVar7) {
        puVar2 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar2 = (undefined8 *)*param_1;
        }
        lVar6 = (longlong)puVar2 + param_2;
        FUN_1404b97c0(lVar6,param_4,param_5);
        FUN_1404b97c0(lVar6 + param_5,uVar7 + lVar6,lVar4);
        param_1[2] = (uVar1 + param_5) - uVar7;
      }
      else if (param_1[3] - uVar1 < uVar5) {
        param_1 = (undefined8 *)FUN_1402c085c(param_1,uVar5,param_3,param_2,uVar7,param_4,param_5);
      }
      else {
        param_1[2] = uVar5 + uVar1;
        puVar2 = (undefined8 *)*param_1;
        if ((ulonglong)param_1[3] < 0x10) {
          puVar2 = param_1;
        }
        param_2 = param_2 + (longlong)puVar2;
        uVar7 = uVar7 + param_2;
        uVar3 = param_5;
        if ((param_4 <= (longlong)puVar2 + uVar1 && param_2 < param_4 + param_5) &&
           (uVar3 = uVar7 - param_4, uVar7 < param_4 || uVar3 == 0)) {
          uVar3 = 0;
        }
        FUN_1404b97c0(param_2 + param_5,uVar7,lVar4);
        FUN_1404b97c0(param_2,param_4,uVar3);
        FUN_1404b97c0(param_2 + uVar3,uVar5 + param_4 + uVar3,param_5 - uVar3);
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140215aa8();
}

