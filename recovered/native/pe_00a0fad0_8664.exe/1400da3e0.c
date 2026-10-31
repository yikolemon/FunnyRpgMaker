/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400da3e0 */

undefined4 * FUN_1400da3e0(undefined4 *param_1)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  wchar_t **ppwVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar2 = FUN_14010b0f8();
  *param_1 = uVar2;
  puVar3 = (undefined8 *)_calloc_base(0x100,2);
  *(undefined8 **)(param_1 + 2) = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    uVar6 = FUN_14010b500();
    *(undefined8 *)(param_1 + 2) = uVar6;
    param_1[4] = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_14010b500();
    lVar7 = 4;
    do {
      uVar6 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar6;
      uVar6 = puVar4[3];
      puVar3[2] = puVar4[2];
      puVar3[3] = uVar6;
      uVar6 = puVar4[5];
      puVar3[4] = puVar4[4];
      puVar3[5] = uVar6;
      uVar6 = puVar4[7];
      puVar3[6] = puVar4[6];
      puVar3[7] = uVar6;
      uVar6 = puVar4[9];
      puVar3[8] = puVar4[8];
      puVar3[9] = uVar6;
      uVar6 = puVar4[0xb];
      puVar3[10] = puVar4[10];
      puVar3[0xb] = uVar6;
      uVar6 = puVar4[0xd];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xd] = uVar6;
      uVar6 = puVar4[0xf];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = uVar6;
      lVar7 = lVar7 + -1;
      puVar4 = puVar4 + 0x10;
      puVar3 = puVar3 + 0x10;
    } while (lVar7 != 0);
    param_1[4] = 1;
  }
  ppwVar5 = ___lc_locale_name_func();
  pwVar1 = ppwVar5[1];
  *(wchar_t **)(param_1 + 6) = pwVar1;
  if (pwVar1 != (wchar_t *)0x0) {
    uVar6 = FUN_140115620();
    *(undefined8 *)(param_1 + 6) = uVar6;
  }
  return param_1;
}

