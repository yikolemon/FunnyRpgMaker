/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008ff59 */

undefined4 *
FUN_18008ff59(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  uVar14 = 0xfffffffffffffffe;
  lVar8 = param_3[2];
  if ((lVar8 == 0) || (lVar11 = param_2[2], lVar11 == 0)) {
    uVar1 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar6 = *(undefined4 *)(param_2 + 3);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_1[4] = *(undefined4 *)(param_2 + 2);
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_2[2] = 0;
    param_2[3] = 7;
    puVar13 = param_2;
  }
  else {
    lVar9 = 0;
    while( true ) {
      puVar12 = param_3;
      if (7 < (ulonglong)param_3[3]) {
        puVar12 = (undefined8 *)*param_3;
      }
      puVar10 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        puVar10 = (undefined8 *)*param_2;
      }
      puVar13 = param_2;
      lVar9 = FUN_180090097(puVar10,lVar11,lVar9,puVar12,lVar8,param_2,uVar14);
      if (lVar9 == -1) break;
      puVar12 = param_4;
      if (7 < (ulonglong)param_4[3]) {
        puVar12 = (undefined8 *)*param_4;
      }
      FUN_180090102(param_2,lVar9,param_3[2],puVar12,param_4[2]);
      lVar9 = lVar9 + param_4[2];
      lVar8 = param_3[2];
      lVar11 = puVar13[2];
      param_2 = puVar13;
    }
    uVar1 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar6 = *(undefined4 *)(param_2 + 3);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_1[4] = *(undefined4 *)(param_2 + 2);
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_2[2] = 0;
    param_2[3] = 7;
  }
  *(undefined2 *)param_2 = 0;
  FUN_1800010ec(puVar13);
  return param_1;
}

