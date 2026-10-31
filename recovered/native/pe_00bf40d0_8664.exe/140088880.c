/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140088880 */

undefined4 * FUN_140088880(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  short *psVar5;
  longlong lVar6;
  
  uVar1 = FUN_14008e82c();
  *param_1 = uVar1;
  puVar2 = _calloc_base(0x100,2);
  *(undefined8 **)(param_1 + 2) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = FUN_14008ec04();
    *(undefined8 *)(param_1 + 2) = uVar4;
    param_1[4] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_14008ec04();
    lVar6 = 4;
    do {
      uVar4 = puVar3[1];
      *puVar2 = *puVar3;
      puVar2[1] = uVar4;
      uVar4 = puVar3[3];
      puVar2[2] = puVar3[2];
      puVar2[3] = uVar4;
      uVar4 = puVar3[5];
      puVar2[4] = puVar3[4];
      puVar2[5] = uVar4;
      uVar4 = puVar3[7];
      puVar2[6] = puVar3[6];
      puVar2[7] = uVar4;
      uVar4 = puVar3[9];
      puVar2[8] = puVar3[8];
      puVar2[9] = uVar4;
      uVar4 = puVar3[0xb];
      puVar2[10] = puVar3[10];
      puVar2[0xb] = uVar4;
      uVar4 = puVar3[0xd];
      puVar2[0xc] = puVar3[0xc];
      puVar2[0xd] = uVar4;
      uVar4 = puVar3[0xf];
      puVar2[0xe] = puVar3[0xe];
      puVar2[0xf] = uVar4;
      lVar6 = lVar6 + -1;
      puVar3 = puVar3 + 0x10;
      puVar2 = puVar2 + 0x10;
    } while (lVar6 != 0);
    param_1[4] = 1;
  }
  lVar6 = FUN_14008e7f8();
  lVar6 = *(longlong *)(lVar6 + 8);
  *(longlong *)(param_1 + 6) = lVar6;
  if (lVar6 != 0) {
    psVar5 = FUN_1400969e0(lVar6);
    *(short **)(param_1 + 6) = psVar5;
  }
  return param_1;
}

