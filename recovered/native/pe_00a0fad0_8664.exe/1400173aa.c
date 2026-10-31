/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400173aa */

undefined4 * FUN_1400173aa(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)(param_1 + 0x10);
  lVar5 = FUN_14001750a(plVar7,param_3);
  if (lVar5 == *plVar7) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar6 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_2 + 6) = uVar6;
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    *(undefined8 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 6) = 0xf;
    *(undefined1 *)param_3 = 0;
  }
  else {
    uVar6 = FUN_14001748a(plVar7,param_3);
    FUN_140006874(param_2,uVar6);
  }
  FUN_1400017de(param_3);
  return param_2;
}

