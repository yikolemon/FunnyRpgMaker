/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002990a */

void Catch_14002990a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  
  plVar1 = (longlong *)(param_2 + 0x80);
  *(longlong *)(param_2 + 0x50) = *plVar1;
  lVar12 = *(longlong *)(param_2 + 0x78) * 0x40;
  lVar2 = *(longlong *)(param_2 + 0x88);
  puVar15 = (undefined4 *)(lVar2 + lVar12);
  lVar3 = *(longlong *)(param_2 + 0x60);
  lVar4 = *(longlong *)(param_2 + 0x68);
  if (*(longlong *)(param_2 + 0x58) != lVar12) {
    lVar12 = 0;
    do {
      puVar14 = (undefined4 *)(lVar3 + lVar12);
      uVar5 = *puVar14;
      uVar6 = puVar14[1];
      uVar7 = puVar14[2];
      uVar8 = puVar14[3];
      puVar14 = (undefined4 *)(lVar3 + 0x10 + lVar12);
      uVar9 = puVar14[1];
      uVar10 = puVar14[2];
      uVar11 = puVar14[3];
      puVar13 = (undefined4 *)(lVar2 + 0x10 + lVar12);
      *puVar13 = *puVar14;
      puVar13[1] = uVar9;
      puVar13[2] = uVar10;
      puVar13[3] = uVar11;
      puVar14 = (undefined4 *)(lVar2 + lVar12);
      *puVar14 = uVar5;
      puVar14[1] = uVar6;
      puVar14[2] = uVar7;
      puVar14[3] = uVar8;
      *(undefined8 *)(lVar3 + 0x10 + lVar12) = 0;
      *(undefined8 *)(lVar3 + 0x18 + lVar12) = 0xf;
      *(undefined1 *)(lVar3 + lVar12) = 0;
      lVar12 = lVar12 + 0x20;
    } while (lVar4 + lVar12 != 0);
  }
  puVar14 = *(undefined4 **)(*plVar1 + 8);
  if (puVar15 != puVar14) {
    puVar13 = *(undefined4 **)(param_2 + 0x60);
    do {
      if (puVar13 != puVar15) {
        FUN_1400065bc(puVar13);
        uVar5 = *puVar15;
        uVar6 = puVar15[1];
        uVar7 = puVar15[2];
        uVar8 = puVar15[3];
        uVar9 = puVar15[5];
        uVar10 = puVar15[6];
        uVar11 = puVar15[7];
        puVar13[4] = puVar15[4];
        puVar13[5] = uVar9;
        puVar13[6] = uVar10;
        puVar13[7] = uVar11;
        *puVar13 = uVar5;
        puVar13[1] = uVar6;
        puVar13[2] = uVar7;
        puVar13[3] = uVar8;
        *(undefined8 *)(puVar15 + 4) = 0;
        *(undefined8 *)(puVar15 + 6) = 0xf;
        *(undefined1 *)puVar15 = 0;
      }
      puVar13 = puVar13 + 8;
      puVar15 = puVar15 + 8;
    } while (puVar15 != puVar14);
    puVar15 = *(undefined4 **)(*plVar1 + 8);
  }
  if (*(undefined4 **)(param_2 + 0x70) != puVar15) {
    puVar14 = *(undefined4 **)(param_2 + 0x70);
    do {
      FUN_1400017de(puVar14);
      puVar14 = puVar14 + 8;
    } while (puVar14 != puVar15);
  }
  *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x50) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_140106270(0,0);
}

