/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140227160 */

undefined8 *
FUN_140227160(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = param_7 + param_5;
  uVar4 = 0xf;
  puVar2 = param_1;
  if (0xf < uVar1) {
    uVar3 = 0x16;
    if (0x16 < (uVar1 | 0xf)) {
      uVar3 = uVar1 | 0xf;
    }
    uVar4 = 0x7fffffffffffffff;
    if (-1 < (longlong)uVar1) {
      uVar4 = uVar3;
    }
    puVar2 = (undefined8 *)FUN_1402128b0(uVar4 + 1);
    *param_1 = puVar2;
  }
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  FUN_1404b97c0(puVar2,param_4,param_5);
  FUN_1404b97c0(param_5 + (longlong)puVar2,param_6,param_7);
  *(undefined1 *)((longlong)puVar2 + uVar1) = 0;
  return param_1;
}

