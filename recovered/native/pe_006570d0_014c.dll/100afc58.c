/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100afc58 */

void __thiscall FUN_100afc58(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if ((uint)param_2[6] < 8) {
      puVar1 = param_2 + 1;
    }
    else {
      puVar1 = (undefined4 *)param_2[1];
    }
    FUN_10004664(puVar1,param_2[5]);
  }
  return;
}

