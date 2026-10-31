/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400186a6 */

ulonglong *
FUN_1400186a6(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             ulonglong param_5,undefined8 *param_6,ulonglong param_7)

{
  ulonglong uVar1;
  ulonglong *puVar2;
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
    puVar2 = (ulonglong *)FUN_140002650(uVar4 + 1);
    *param_1 = (ulonglong)puVar2;
  }
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  FUN_1400b3550(puVar2,param_4,param_5);
  FUN_1400b3550((undefined8 *)(param_5 + (longlong)puVar2),param_6,param_7);
  *(undefined1 *)((longlong)puVar2 + uVar1) = 0;
  return param_1;
}

