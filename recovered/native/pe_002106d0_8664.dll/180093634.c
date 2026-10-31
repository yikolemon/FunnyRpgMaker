/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180093634 */

undefined8 * FUN_180093634(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  uVar1 = param_4 - param_3 >> 1;
  do {
    if (uVar1 <= (ulonglong)param_2[2]) goto LAB_1800936cb;
    FUN_180004aa4(param_2,uVar1,0);
    puVar2 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    uVar1 = thunk_FUN_180244d50(puVar2,(longlong)puVar2 + param_2[2] * 2,param_3,param_4,
                                param_1 + 0x10);
  } while (uVar1 != 0xffffffffffffffff);
  uVar1 = 0;
LAB_1800936cb:
  FUN_180004aa4(param_2,uVar1,0);
  return param_2;
}

