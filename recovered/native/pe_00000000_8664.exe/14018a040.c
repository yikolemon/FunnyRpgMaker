/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018a040 */

undefined4 * FUN_14018a040(undefined4 *param_1)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  wchar_t **ppwVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar2 = FUN_140192f20();
  *param_1 = uVar2;
  puVar3 = (undefined8 *)_calloc_base(0x100,2);
  *(undefined8 **)(param_1 + 2) = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = __pctype_func();
    *(ushort **)(param_1 + 2) = puVar4;
    param_1[4] = 0;
  }
  else {
    puVar4 = __pctype_func();
    lVar7 = 4;
    do {
      uVar6 = *(undefined8 *)(puVar4 + 4);
      *puVar3 = *(undefined8 *)puVar4;
      puVar3[1] = uVar6;
      uVar6 = *(undefined8 *)(puVar4 + 0xc);
      puVar3[2] = *(undefined8 *)(puVar4 + 8);
      puVar3[3] = uVar6;
      uVar6 = *(undefined8 *)(puVar4 + 0x14);
      puVar3[4] = *(undefined8 *)(puVar4 + 0x10);
      puVar3[5] = uVar6;
      uVar6 = *(undefined8 *)(puVar4 + 0x1c);
      puVar3[6] = *(undefined8 *)(puVar4 + 0x18);
      puVar3[7] = uVar6;
      uVar6 = *(undefined8 *)(puVar4 + 0x24);
      puVar3[8] = *(undefined8 *)(puVar4 + 0x20);
      puVar3[9] = uVar6;
      uVar6 = *(undefined8 *)(puVar4 + 0x2c);
      puVar3[10] = *(undefined8 *)(puVar4 + 0x28);
      puVar3[0xb] = uVar6;
      uVar6 = *(undefined8 *)(puVar4 + 0x34);
      puVar3[0xc] = *(undefined8 *)(puVar4 + 0x30);
      puVar3[0xd] = uVar6;
      uVar6 = *(undefined8 *)(puVar4 + 0x3c);
      puVar3[0xe] = *(undefined8 *)(puVar4 + 0x38);
      puVar3[0xf] = uVar6;
      lVar7 = lVar7 + -1;
      puVar4 = puVar4 + 0x40;
      puVar3 = puVar3 + 0x10;
    } while (lVar7 != 0);
    param_1[4] = 1;
  }
  ppwVar5 = ___lc_locale_name_func();
  pwVar1 = ppwVar5[1];
  *(wchar_t **)(param_1 + 6) = pwVar1;
  if (pwVar1 != (wchar_t *)0x0) {
    uVar6 = FUN_1401a0470();
    *(undefined8 *)(param_1 + 6) = uVar6;
  }
  return param_1;
}

