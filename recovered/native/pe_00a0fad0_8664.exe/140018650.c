/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140018650 */

undefined8 *
FUN_140018650(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    if (param_1[3] - uVar1 < param_4) {
      param_1 = (undefined8 *)FUN_140018728(param_1,param_4,uVar1 - param_2,param_2,param_3,param_4)
      ;
    }
    else {
      param_1[2] = uVar1 + param_4;
      puVar2 = (undefined8 *)*param_1;
      if ((ulonglong)param_1[3] < 0x10) {
        puVar2 = param_1;
      }
      uVar3 = param_2 + (longlong)puVar2;
      uVar4 = param_4;
      if ((param_3 <= (longlong)puVar2 + uVar1 && uVar3 < param_3 + param_4) &&
         (uVar4 = uVar3 - param_3, uVar3 < param_3 || uVar4 == 0)) {
        uVar4 = 0;
      }
      FUN_140135ff0(uVar3 + param_4,uVar3,(uVar1 - param_2) + 1);
      FUN_140135ff0(uVar3,param_3,uVar4);
      FUN_140135ff0(uVar3 + uVar4,param_3 + param_4 + uVar4,param_4 - uVar4);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000cf3e();
}

