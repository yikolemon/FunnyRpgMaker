/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027d82a */

undefined8 * FUN_14027d82a(undefined8 *param_1)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar7 = (undefined8 *)*param_1;
  }
  lVar6 = (longlong)puVar7 + param_1[2] * 2;
  lVar2 = FUN_14021344f(puVar7,lVar6);
  while (lVar3 = lVar2, lVar6 != lVar2) {
    psVar1 = (short *)(lVar6 + -2);
    lVar3 = lVar6;
    if ((*psVar1 == 0x5c) || (lVar6 = lVar6 + -2, *psVar1 == 0x2f)) break;
  }
  uVar4 = lVar3 - (longlong)puVar7 >> 1;
  if ((ulonglong)param_1[2] < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_140215aa8();
  }
  param_1[2] = uVar4;
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  *(undefined2 *)((longlong)puVar5 + (lVar3 - (longlong)puVar7)) = 0;
  return param_1;
}

