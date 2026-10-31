/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140078b15 */

undefined8 FUN_140078b15(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14011cf50(param_2);
  if (uVar1 <= 0x7ffffffffffffffe - param_3[2]) {
    puVar2 = param_3;
    if (7 < (ulonglong)param_3[3]) {
      puVar2 = (undefined8 *)*param_3;
    }
    FUN_140059cb0(param_1,puVar2,param_3,param_2,uVar1,puVar2,param_3[2]);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000626f();
}

