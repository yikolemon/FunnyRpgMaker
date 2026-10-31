/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ce9f0 */

undefined8 * FUN_1400ce9f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  
  if (param_1 != param_2) {
    puVar8 = param_3 + 8;
    do {
      param_3 = puVar8;
      puVar8 = param_3 + -8;
      if (puVar8 != param_1) {
        FUN_1400065bc(puVar8);
        uVar1 = *(undefined4 *)param_1;
        uVar2 = *(undefined4 *)((longlong)param_1 + 4);
        uVar3 = *(undefined4 *)(param_1 + 1);
        uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
        uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
        uVar6 = *(undefined4 *)(param_1 + 3);
        uVar7 = *(undefined4 *)((longlong)param_1 + 0x1c);
        *(undefined4 *)(param_3 + -6) = *(undefined4 *)(param_1 + 2);
        *(undefined4 *)((longlong)param_3 + -0x2c) = uVar5;
        *(undefined4 *)(param_3 + -5) = uVar6;
        *(undefined4 *)((longlong)param_3 + -0x24) = uVar7;
        *(undefined4 *)puVar8 = uVar1;
        *(undefined4 *)((longlong)param_3 + -0x3c) = uVar2;
        *(undefined4 *)(param_3 + -7) = uVar3;
        *(undefined4 *)((longlong)param_3 + -0x34) = uVar4;
        param_1[2] = 0;
        param_1[3] = 0xf;
        *(undefined1 *)param_1 = 0;
        FUN_1400065bc(param_3 + -4);
        uVar1 = *(undefined4 *)(param_1 + 4);
        uVar2 = *(undefined4 *)((longlong)param_1 + 0x24);
        uVar3 = *(undefined4 *)(param_1 + 5);
        uVar4 = *(undefined4 *)((longlong)param_1 + 0x2c);
        uVar5 = *(undefined4 *)((longlong)param_1 + 0x34);
        uVar6 = *(undefined4 *)(param_1 + 7);
        uVar7 = *(undefined4 *)((longlong)param_1 + 0x3c);
        *(undefined4 *)(param_3 + -2) = *(undefined4 *)(param_1 + 6);
        *(undefined4 *)((longlong)param_3 + -0xc) = uVar5;
        *(undefined4 *)(param_3 + -1) = uVar6;
        *(undefined4 *)((longlong)param_3 + -4) = uVar7;
        *(undefined4 *)(param_3 + -4) = uVar1;
        *(undefined4 *)((longlong)param_3 + -0x1c) = uVar2;
        *(undefined4 *)(param_3 + -3) = uVar3;
        *(undefined4 *)((longlong)param_3 + -0x14) = uVar4;
        param_1[6] = 0;
        param_1[7] = 0xf;
        *(undefined1 *)(param_1 + 4) = 0;
        FUN_140016e5c(param_3);
        *param_3 = param_1[8];
        param_3[1] = param_1[9];
        param_3[2] = param_1[10];
        param_1[10] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
      }
      param_1 = param_1 + 0xb;
      puVar8 = param_3 + 0xb;
    } while (param_1 != param_2);
    param_3 = param_3 + 3;
  }
  return param_3;
}

