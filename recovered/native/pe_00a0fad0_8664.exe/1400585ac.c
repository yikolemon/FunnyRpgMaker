/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400585ac */

longlong FUN_1400585ac(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    lVar4 = param_3 + 0x38;
    do {
      param_3 = lVar4;
      if ((undefined8 *)(param_3 + -0x38) == param_1) {
        *(undefined8 *)(param_3 + -8) = param_1[6];
        uVar1 = *(undefined4 *)((longlong)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 5);
        uVar3 = *(undefined4 *)((longlong)param_1 + 0x2c);
        *(undefined4 *)(param_3 + -0x18) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(param_3 + -0x14) = uVar1;
        *(undefined4 *)(param_3 + -0x10) = uVar2;
        *(undefined4 *)(param_3 + -0xc) = uVar3;
      }
      else {
        puVar5 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar5 = (undefined8 *)*param_1;
        }
        FUN_140017200((undefined8 *)(param_3 + -0x38),puVar5,param_1[2]);
        uVar1 = *(undefined4 *)((longlong)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 5);
        uVar3 = *(undefined4 *)((longlong)param_1 + 0x2c);
        *(undefined4 *)(param_3 + -0x18) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(param_3 + -0x14) = uVar1;
        *(undefined4 *)(param_3 + -0x10) = uVar2;
        *(undefined4 *)(param_3 + -0xc) = uVar3;
        *(undefined8 *)(param_3 + -8) = param_1[6];
        FUN_1400587f4(param_3,param_1[7],param_1[8] - param_1[7]);
      }
      param_1 = param_1 + 10;
      param_2 = param_2 + -1;
      lVar4 = param_3 + 0x50;
    } while (param_2 != 0);
    param_3 = param_3 + 0x18;
  }
  return param_3;
}

