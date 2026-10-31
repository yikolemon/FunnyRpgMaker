/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140059cb0 */

undefined8 *
FUN_140059cb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = param_7 + param_5;
  uVar2 = 7;
  puVar3 = param_1;
  if (7 < uVar1) {
    uVar2 = 10;
    if (10 < (uVar1 | 7)) {
      uVar2 = uVar1 | 7;
    }
    if (0x7ffffffffffffffd < uVar2) {
      uVar2 = 0x7ffffffffffffffe;
    }
    puVar3 = (undefined8 *)FUN_140008b48(param_1);
    *param_1 = puVar3;
  }
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  FUN_140135ff0(puVar3,param_4,param_5 * 2);
  FUN_140135ff0((longlong)puVar3 + param_5 * 2,param_6,param_7 * 2);
  *(undefined2 *)((longlong)puVar3 + uVar1 * 2) = 0;
  return param_1;
}

