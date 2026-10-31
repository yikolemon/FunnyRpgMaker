/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b6937 */

void FUN_1800b6937(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_3 = *param_1;
    uVar1 = param_1[3];
    param_1[3] = 0;
    uVar2 = *(undefined4 *)(param_1 + 1);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar4 = *(undefined4 *)(param_1 + 2);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_3 + 1) = uVar2;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
    *(undefined4 *)(param_3 + 2) = uVar4;
    *(undefined4 *)((longlong)param_3 + 0x14) = uVar5;
    param_3[3] = uVar1;
    param_3 = param_3 + 4;
  }
  FUN_1800b6a83(param_3,param_3);
  return;
}

