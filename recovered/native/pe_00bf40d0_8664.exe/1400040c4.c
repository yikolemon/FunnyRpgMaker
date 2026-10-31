/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400040c4 */

undefined8 *
FUN_1400040c4(undefined8 *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
             byte param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar1 = param_1[2];
  if (0x7fffffffffffffff - uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000263f();
  }
  uVar7 = param_2 + uVar1;
  uVar2 = param_1[3];
  uVar5 = 0x7fffffffffffffff;
  if ((-1 < (longlong)uVar7) && (uVar2 <= (uVar2 >> 1 ^ 0x7fffffffffffffff))) {
    uVar5 = (uVar2 >> 1) + uVar2;
    if (uVar5 < (uVar7 | 0xf)) {
      uVar5 = uVar7 | 0xf;
    }
  }
  puVar6 = (undefined8 *)FUN_140002650(uVar5 + 1);
  param_1[2] = uVar7;
  param_1[3] = uVar5;
  if (uVar2 < 0x10) {
    FUN_1400b3550(puVar6,param_1,uVar1);
    FUN_1400b3c00((undefined1 (*) [32])((longlong)puVar6 + uVar1),param_5,param_4);
    (*(undefined1 (*) [32])((longlong)puVar6 + uVar1))[param_4] = 0;
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    FUN_1400b3550(puVar6,puVar3,uVar1);
    FUN_1400b3c00((undefined1 (*) [32])((longlong)puVar6 + uVar1),param_5,param_4);
    (*(undefined1 (*) [32])((longlong)puVar6 + uVar1))[param_4] = 0;
    if ((0xfff < uVar2 + 1) && (0x1f < (ulonglong)((longlong)puVar3 + (-8 - puVar3[-1])))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    FUN_1400863f0();
  }
  *param_1 = puVar6;
  return param_1;
}

