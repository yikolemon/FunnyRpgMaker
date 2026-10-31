/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002d04a */

undefined8 *
FUN_14002d04a(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (param_3 != param_4) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    puVar9 = param_3;
    puVar10 = param_3;
    if (puVar1 != param_4) {
      do {
        if (puVar9 != param_4) {
          FUN_1400065bc(puVar9);
          uVar2 = *param_4;
          uVar3 = param_4[1];
          uVar4 = param_4[2];
          uVar5 = param_4[3];
          uVar6 = param_4[5];
          uVar7 = param_4[6];
          uVar8 = param_4[7];
          puVar9[4] = param_4[4];
          puVar9[5] = uVar6;
          puVar9[6] = uVar7;
          puVar9[7] = uVar8;
          *puVar9 = uVar2;
          puVar9[1] = uVar3;
          puVar9[2] = uVar4;
          puVar9[3] = uVar5;
          *(undefined8 *)(param_4 + 4) = 0;
          *(undefined8 *)(param_4 + 6) = 0xf;
          *(undefined1 *)param_4 = 0;
        }
        puVar9 = puVar9 + 8;
        param_4 = param_4 + 8;
      } while (param_4 != puVar1);
      param_4 = *(undefined4 **)(param_1 + 8);
      puVar10 = puVar9;
    }
    for (; puVar9 != param_4; puVar9 = puVar9 + 8) {
      FUN_1400017de(puVar9);
    }
    *(undefined4 **)(param_1 + 8) = puVar10;
  }
  *param_2 = param_3;
  return param_2;
}

