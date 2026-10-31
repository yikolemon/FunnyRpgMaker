/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ce0f8 */

undefined4 * FUN_1400ce0f8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  
  if (param_1 != param_2) {
    lVar9 = 0;
    do {
      puVar8 = (undefined4 *)((longlong)param_2 + lVar9 + -0x58);
      if (param_2 != param_3) {
        puVar10 = (undefined4 *)((longlong)param_3 + lVar9 + -0x58);
        FUN_1400065bc(puVar10);
        uVar1 = *puVar8;
        uVar2 = *(undefined4 *)((longlong)param_2 + lVar9 + -0x54);
        uVar3 = *(undefined4 *)((longlong)param_2 + lVar9 + -0x50);
        uVar4 = *(undefined4 *)((longlong)param_2 + lVar9 + -0x4c);
        uVar5 = *(undefined4 *)((longlong)param_2 + lVar9 + -0x44);
        uVar6 = *(undefined4 *)((longlong)param_2 + lVar9 + -0x40);
        uVar7 = *(undefined4 *)((longlong)param_2 + lVar9 + -0x3c);
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x48) =
             *(undefined4 *)((longlong)param_2 + lVar9 + -0x48);
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x44) = uVar5;
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x40) = uVar6;
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x3c) = uVar7;
        *puVar10 = uVar1;
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x54) = uVar2;
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x50) = uVar3;
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x4c) = uVar4;
        *(undefined8 *)((longlong)param_2 + lVar9 + -0x48) = 0;
        *(undefined8 *)((longlong)param_2 + lVar9 + -0x40) = 0xf;
        *(undefined1 *)((longlong)param_2 + lVar9 + -0x58) = 0;
        puVar11 = (undefined4 *)((longlong)param_3 + lVar9 + -0x38);
        FUN_1400065bc(puVar11);
        puVar10 = (undefined4 *)((longlong)param_2 + lVar9 + -0x38);
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        uVar4 = puVar10[3];
        puVar10 = (undefined4 *)((longlong)param_2 + lVar9 + -0x28);
        uVar5 = puVar10[1];
        uVar6 = puVar10[2];
        uVar7 = puVar10[3];
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x28) = *puVar10;
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x24) = uVar5;
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x20) = uVar6;
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x1c) = uVar7;
        *puVar11 = uVar1;
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x34) = uVar2;
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x30) = uVar3;
        *(undefined4 *)((longlong)param_3 + lVar9 + -0x2c) = uVar4;
        *(undefined8 *)((longlong)param_2 + lVar9 + -0x28) = 0;
        *(undefined8 *)((longlong)param_2 + lVar9 + -0x20) = 0xf;
        *(undefined1 *)((longlong)param_2 + lVar9 + -0x38) = 0;
        puVar12 = (undefined8 *)((longlong)param_3 + lVar9 + -0x18);
        FUN_140016e5c(puVar12);
        *puVar12 = *(undefined8 *)((longlong)param_2 + lVar9 + -0x18);
        *(undefined8 *)((longlong)param_3 + lVar9 + -0x10) =
             *(undefined8 *)((longlong)param_2 + lVar9 + -0x10);
        *(undefined8 *)((longlong)param_3 + lVar9 + -8) =
             *(undefined8 *)((longlong)param_2 + lVar9 + -8);
        *(undefined8 *)((longlong)param_2 + lVar9 + -8) = 0;
        puVar12 = (undefined8 *)((longlong)param_2 + lVar9 + -0x18);
        *puVar12 = 0;
        puVar12[1] = 0;
      }
      lVar9 = lVar9 + -0x58;
    } while (puVar8 != param_1);
    param_3 = (undefined4 *)((longlong)param_3 + lVar9);
  }
  return param_3;
}

