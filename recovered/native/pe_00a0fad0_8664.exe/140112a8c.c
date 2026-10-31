/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140112a8c */

void FUN_140112a8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (((param_2 != (undefined8 *)0x0) && (param_1 != (undefined8 *)0x0)) && (param_1 != param_2)) {
    lVar6 = 2;
    puVar5 = param_1;
    do {
      puVar8 = puVar5;
      puVar7 = param_2;
      uVar4 = puVar7[1];
      *puVar8 = *puVar7;
      puVar8[1] = uVar4;
      uVar4 = puVar7[3];
      puVar8[2] = puVar7[2];
      puVar8[3] = uVar4;
      uVar4 = puVar7[5];
      puVar8[4] = puVar7[4];
      puVar8[5] = uVar4;
      uVar4 = puVar7[7];
      puVar8[6] = puVar7[6];
      puVar8[7] = uVar4;
      uVar4 = puVar7[9];
      puVar8[8] = puVar7[8];
      puVar8[9] = uVar4;
      uVar4 = puVar7[0xb];
      puVar8[10] = puVar7[10];
      puVar8[0xb] = uVar4;
      uVar4 = puVar7[0xd];
      puVar8[0xc] = puVar7[0xc];
      puVar8[0xd] = uVar4;
      uVar4 = puVar7[0xf];
      puVar8[0xe] = puVar7[0xe];
      puVar8[0xf] = uVar4;
      lVar6 = lVar6 + -1;
      param_2 = puVar7 + 0x10;
      puVar5 = puVar8 + 0x10;
    } while (lVar6 != 0);
    uVar4 = puVar7[0x11];
    puVar8[0x10] = puVar7[0x10];
    puVar8[0x11] = uVar4;
    uVar4 = puVar7[0x13];
    puVar8[0x12] = puVar7[0x12];
    puVar8[0x13] = uVar4;
    uVar4 = puVar7[0x15];
    puVar8[0x14] = puVar7[0x14];
    puVar8[0x15] = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar7 + 0xb4);
    uVar2 = *(undefined4 *)(puVar7 + 0x17);
    uVar3 = *(undefined4 *)((longlong)puVar7 + 0xbc);
    *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(puVar7 + 0x16);
    *(undefined4 *)((longlong)puVar8 + 0xb4) = uVar1;
    *(undefined4 *)(puVar8 + 0x17) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0xbc) = uVar3;
    uVar1 = *(undefined4 *)((longlong)puVar7 + 0xc4);
    uVar2 = *(undefined4 *)(puVar7 + 0x19);
    uVar3 = *(undefined4 *)((longlong)puVar7 + 0xcc);
    *(undefined4 *)(puVar8 + 0x18) = *(undefined4 *)(puVar7 + 0x18);
    *(undefined4 *)((longlong)puVar8 + 0xc4) = uVar1;
    *(undefined4 *)(puVar8 + 0x19) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0xcc) = uVar3;
    puVar8[0x1a] = puVar7[0x1a];
    *(undefined4 *)(param_1 + 2) = 0;
    __acrt_add_locale_ref();
  }
  return;
}

