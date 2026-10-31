/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400247b0 */

undefined8 *
FUN_1400247b0(undefined8 *param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    if (param_1[3] - uVar1 < param_3) {
      param_1 = (undefined8 *)
                FUN_140024bfe(param_1,param_3,uVar1 - param_2,param_2,param_3,(char)param_4);
    }
    else {
      param_1[2] = uVar1 + param_3;
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      lVar2 = (longlong)puVar3 + param_2;
      FUN_140135ff0(lVar2 + param_3,lVar2,(uVar1 - param_2) + 1);
      FUN_1401366a0(lVar2,param_4,param_3);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000cf3e();
}

