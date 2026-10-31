/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000b1f6 */

undefined8 *
FUN_14000b1f6(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  uVar3 = param_1[2];
  if (param_2 <= uVar3) {
    uVar6 = param_1[3] - uVar3;
    if (uVar6 < param_4) {
      param_1 = FUN_14000b2d8(param_1,param_4,uVar6,param_2,param_3,param_4);
    }
    else {
      param_1[2] = uVar3 + param_4;
      puVar5 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      puVar1 = (undefined8 *)((longlong)puVar5 + param_2 * 2);
      puVar2 = (undefined8 *)((longlong)param_3 + param_4 * 2);
      uVar6 = param_4;
      if (param_3 <= (undefined8 *)((longlong)puVar5 + uVar3 * 2) && puVar1 < puVar2) {
        if (puVar1 < param_3 || (longlong)puVar1 - (longlong)param_3 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (longlong)puVar1 - (longlong)param_3 >> 1;
        }
      }
      FUN_1400b3550((undefined8 *)((longlong)puVar1 + param_4 * 2),puVar1,(uVar3 - param_2) * 2 + 2)
      ;
      FUN_1400b3550(puVar1,param_3,uVar6 * 2);
      FUN_1400b3550((undefined8 *)((longlong)puVar1 + uVar6 * 2),
                    (undefined8 *)((longlong)puVar2 + uVar6 * 2),(param_4 - uVar6) * 2);
    }
    return param_1;
  }
  FUN_14000807e();
  pcVar4 = (code *)swi(3);
  puVar5 = (undefined8 *)(*pcVar4)();
  return puVar5;
}

