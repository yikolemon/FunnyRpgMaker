/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140018a64 */

undefined4 *
FUN_140018a64(undefined4 *param_1,undefined4 *param_2,longlong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  lVar8 = 0;
  while( true ) {
    lVar8 = FUN_140018e6a(param_2,param_3,lVar8);
    if (lVar8 == -1) break;
    puVar9 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar9 = (undefined8 *)*param_4;
    }
    FUN_140018eea(param_2,lVar8,*(undefined8 *)(param_3 + 0x10),puVar9,param_4[2]);
    lVar8 = lVar8 + param_4[2];
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0xf;
  *(undefined1 *)param_2 = 0;
  FUN_1400017de(param_2);
  FUN_1400017de(param_3);
  FUN_1400017de(param_4);
  return param_1;
}

