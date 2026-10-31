/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140343070 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140343070(float *param_1,int param_2,float *param_3,char param_4,float *param_5)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float extraout_XMM0_Da;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar1 = DAT_14062a630;
  fVar3 = (float)FUN_1403000b2(param_1[2] - *param_1,param_1[3] - param_1[1]);
  uVar4 = FUN_140313933(*(float *)(lVar1 + 0x1320) * DAT_1404ecffc,fVar3 * _DAT_1404efe90);
  FUN_1403000b2(*(float *)(lVar1 + 0x1320) * DAT_1404f0020,uVar4);
  if (param_4 == '\0') {
    fVar3 = param_1[3];
    uVar9 = *(undefined8 *)param_1;
    fVar8 = _DAT_1404f0030;
  }
  else {
    fVar3 = param_1[3];
    uVar9 = *(undefined8 *)param_1;
    fVar8 = _DAT_1404f0050;
  }
  fVar7 = (float)(int)(extraout_XMM0_Da * fVar8);
  fVar10 = (float)((ulonglong)uVar9 >> 0x20);
  fVar11 = _DAT_1404efa40 * ((float)uVar9 + param_1[2]);
  fVar12 = _UNK_1404efa44 * (fVar10 + fVar3);
  fVar8 = (float)(int)(_DAT_1404efa40 * ((float)uVar9 + param_1[2]));
  fVar3 = (float)(int)(_UNK_1404efa44 * (fVar10 + fVar3));
  if (param_2 == -1) {
    *param_3 = fVar8 - fVar7;
    param_3[1] = fVar3 - fVar7;
    param_3[2] = fVar7 + (float)(int)fVar11;
    param_3[3] = fVar7 + (float)(int)fVar12;
  }
  else {
    switch(param_2) {
    case 0:
    case 1:
    case 2:
    case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (param_5 != (float *)0x0) {
    fVar11 = *param_3;
    fVar12 = param_3[1];
    fVar5 = param_3[2];
    fVar6 = param_3[3];
    fVar10 = *param_5;
    if (param_4 == '\0') {
      fVar8 = fVar10 - fVar8;
      fVar3 = param_5[1] - fVar3;
      fVar3 = fVar8 * fVar8 + fVar3 * fVar3;
      if (fVar3 < DAT_1404f0060 * fVar7 * DAT_1404f0060 * fVar7) {
        return param_2 == -1;
      }
      if (fVar3 < DAT_1404f0064 * fVar7 * DAT_1404f0064 * fVar7) {
        iVar2 = FUN_14033ea93();
        return param_2 == iVar2;
      }
      fVar3 = (float)(int)(fVar7 * DAT_1404ed040);
      fVar5 = fVar5 + fVar3;
      fVar6 = fVar6 + fVar3;
      fVar11 = fVar11 - fVar3;
      fVar12 = fVar12 - fVar3;
    }
    if (fVar11 <= fVar10) {
      return (bool)(param_5[1] < fVar6 & -(fVar12 <= param_5[1]) & -(fVar10 < fVar5));
    }
  }
  return false;
}

