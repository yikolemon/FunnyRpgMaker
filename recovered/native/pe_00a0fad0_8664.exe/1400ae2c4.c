/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ae2c4 */

undefined8 FUN_1400ae2c4(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 ***pppuVar8;
  bool bVar9;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 **local_a8 [3];
  ulonglong local_90;
  int local_88;
  int iStack_84;
  undefined8 uStack_80;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  
  puVar1 = DAT_1401cc988;
  local_48 = 0xfffffffffffffffe;
  puVar7 = DAT_1401cc980;
  local_60 = param_1;
  do {
    puVar4 = puVar7;
    puVar7 = puVar4;
    if (puVar4 == puVar1) break;
    FUN_140055cae(local_a8,local_60,&DAT_140173c42);
    piVar5 = (int *)FUN_140008bae(local_a8,L"data",4);
    local_88 = *piVar5;
    iStack_84 = piVar5[1];
    uStack_80 = *(undefined8 *)(piVar5 + 2);
    local_78 = piVar5[4];
    iStack_74 = piVar5[5];
    iStack_70 = piVar5[6];
    iStack_6c = piVar5[7];
    piVar5[4] = 0;
    piVar5[5] = 0;
    piVar5[6] = 7;
    piVar5[7] = 0;
    *(undefined2 *)piVar5 = 0;
    if (7 < (ulonglong)puVar4[3]) {
      puVar7 = (undefined8 *)*puVar4;
    }
    puVar6 = (undefined4 *)FUN_140008bae(&local_88,puVar7,puVar4[2]);
    local_c8 = *puVar6;
    uStack_c4 = puVar6[1];
    uStack_c0 = puVar6[2];
    uStack_bc = puVar6[3];
    local_b8 = puVar6[4];
    uStack_b4 = puVar6[5];
    uStack_b0 = puVar6[6];
    uStack_ac = puVar6[7];
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 7;
    *(undefined2 *)puVar6 = 0;
    FUN_140005242(&local_88);
    FUN_140005242(local_a8);
    FUN_14000550c(local_a8,&local_c8,0);
    FUN_140007025();
    local_58 = 0xffff00000000;
    pppuVar8 = local_a8;
    if (7 < local_90) {
      pppuVar8 = (undefined8 ***)local_a8[0];
    }
    local_50 = FUN_1400dcbb0(pppuVar8,&local_88,3,0xffffffff);
    FUN_140007276(&local_58,local_50,&local_88);
    iVar3 = local_50;
    uStack_80 = FUN_140007025();
    local_88 = iVar3;
    iVar2 = (int)local_58;
    if ((int)local_58 == 0) {
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14004137b("exists",&local_88,local_a8);
      }
      bVar9 = false;
    }
    else {
      FUN_140007025();
      bVar9 = iVar2 != 1;
    }
    FUN_140005690(local_a8);
    FUN_140005242(&local_c8);
    puVar7 = puVar4 + 4;
  } while (!bVar9);
  return CONCAT71((int7)((ulonglong)puVar7 >> 8),puVar4 != puVar1);
}

