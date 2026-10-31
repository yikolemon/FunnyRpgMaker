/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ceac7 */

undefined8 * FUN_1400ceac7(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (param_2 != param_3) {
    puVar9 = param_2 + 0x16;
    while (puVar9 != param_3) {
      cVar8 = FUN_1400170b4(param_2,param_2 + 0x16);
      if ((cVar8 != '\0') && (cVar8 = FUN_1400170b4(param_2 + 8,param_2 + 0x1e), cVar8 != '\0')) {
        puVar9 = param_2 + 0x2c;
        for (; puVar9 != param_3; puVar9 = puVar9 + 0x16) {
          cVar8 = FUN_1400170b4(param_2,puVar9);
          if (((cVar8 == '\0') ||
              (cVar8 = FUN_1400170b4(param_2 + 8,puVar9 + 8), puVar10 = param_2, cVar8 == '\0')) &&
             (puVar10 = param_2 + 0x16, puVar9 + -0x16 != param_2)) {
            FUN_1400065bc(puVar10);
            uVar1 = *puVar9;
            uVar2 = puVar9[1];
            uVar3 = puVar9[2];
            uVar4 = puVar9[3];
            uVar5 = puVar9[5];
            uVar6 = puVar9[6];
            uVar7 = puVar9[7];
            param_2[0x1a] = puVar9[4];
            param_2[0x1b] = uVar5;
            param_2[0x1c] = uVar6;
            param_2[0x1d] = uVar7;
            *puVar10 = uVar1;
            param_2[0x17] = uVar2;
            param_2[0x18] = uVar3;
            param_2[0x19] = uVar4;
            *(undefined8 *)(puVar9 + 4) = 0;
            *(undefined8 *)(puVar9 + 6) = 0xf;
            *(undefined1 *)puVar9 = 0;
            FUN_1400065bc(param_2 + 0x1e);
            uVar1 = puVar9[8];
            uVar2 = puVar9[9];
            uVar3 = puVar9[10];
            uVar4 = puVar9[0xb];
            uVar5 = puVar9[0xd];
            uVar6 = puVar9[0xe];
            uVar7 = puVar9[0xf];
            param_2[0x22] = puVar9[0xc];
            param_2[0x23] = uVar5;
            param_2[0x24] = uVar6;
            param_2[0x25] = uVar7;
            param_2[0x1e] = uVar1;
            param_2[0x1f] = uVar2;
            param_2[0x20] = uVar3;
            param_2[0x21] = uVar4;
            *(undefined8 *)(puVar9 + 0xc) = 0;
            *(undefined8 *)(puVar9 + 0xe) = 0xf;
            *(undefined1 *)(puVar9 + 8) = 0;
            FUN_140016e5c(param_2 + 0x26);
            *(undefined8 *)(param_2 + 0x26) = *(undefined8 *)(puVar9 + 0x10);
            *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(puVar9 + 0x12);
            *(undefined8 *)(param_2 + 0x2a) = *(undefined8 *)(puVar9 + 0x14);
            *(undefined8 *)(puVar9 + 0x14) = 0;
            *(undefined8 *)(puVar9 + 0x10) = 0;
            *(undefined8 *)(puVar9 + 0x12) = 0;
          }
          param_2 = puVar10;
        }
        param_3 = param_2 + 0x16;
        break;
      }
      puVar9 = param_2 + 0x2c;
      param_2 = param_2 + 0x16;
    }
  }
  *param_1 = param_3;
  return param_1;
}

