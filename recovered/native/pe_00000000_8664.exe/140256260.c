/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140256260 */

undefined8 *
FUN_140256260(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  uVar2 = param_1[2];
  if (param_2 <= uVar2) {
    uVar3 = param_1[3] - uVar2;
    if (uVar3 < param_4) {
      param_1 = (undefined8 *)FUN_140256342(param_1,param_4,uVar3,param_2,param_3,param_4);
    }
    else {
      param_1[2] = uVar2 + param_4;
      puVar4 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
      }
      uVar3 = (longlong)puVar4 + param_2 * 2;
      uVar1 = param_3 + param_4 * 2;
      uVar5 = param_4;
      if (param_3 <= (longlong)puVar4 + uVar2 * 2 && uVar3 < uVar1) {
        if (uVar3 < param_3 || uVar3 - param_3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (longlong)(uVar3 - param_3) >> 1;
        }
      }
      FUN_1404b97c0(uVar3 + param_4 * 2,uVar3,(uVar2 - param_2) * 2 + 2);
      FUN_1404b97c0(uVar3,param_3,uVar5 * 2);
      FUN_1404b97c0(uVar3 + uVar5 * 2,uVar1 + uVar5 * 2,(param_4 - uVar5) * 2);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140215aa8();
}

