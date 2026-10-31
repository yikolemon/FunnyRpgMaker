/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c4686 */

undefined8 * FUN_1402c4686(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar2 = param_1[2];
  if (param_2 <= uVar2) {
    if (uVar2 - param_2 < param_3) {
      param_3 = uVar2 - param_2;
    }
    puVar3 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    lVar1 = (longlong)puVar3 + param_2 * 2;
    FUN_1404b97c0(lVar1,lVar1 + param_3 * 2,((uVar2 - param_3) - param_2) * 2 + 2);
    param_1[2] = uVar2 - param_3;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140215aa8();
}

