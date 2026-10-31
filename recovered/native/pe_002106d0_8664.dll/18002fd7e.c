/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002fd7e */

void FUN_18002fd7e(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar3 = param_2[1];
  if ((ulonglong)param_1[2] < uVar3) {
    (*(code *)param_1[3])(param_1,uVar3);
    uVar4 = param_1[2];
    if (uVar3 < (ulonglong)param_1[2]) {
      uVar4 = uVar3;
    }
    param_1[1] = uVar4;
  }
  else {
    param_1[1] = uVar3;
    if (uVar3 == 0) goto LAB_18002fdd5;
  }
  puVar5 = (undefined4 *)*param_2;
  puVar1 = puVar5 + uVar3;
  puVar6 = (undefined4 *)*param_1;
  do {
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    *puVar6 = uVar2;
    puVar6 = puVar6 + 1;
  } while (puVar5 != puVar1);
LAB_18002fdd5:
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  return;
}

