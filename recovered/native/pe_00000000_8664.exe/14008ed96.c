/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008ed96 */

void FUN_14008ed96(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  bool bVar11;
  float fVar12;
  float *pfVar13;
  undefined4 uVar14;
  float local_2d8 [54];
  char local_200 [104];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_c0;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar3 = DAT_140f2a910;
  local_48 = 0xfffffffffffffffe;
  if (*(char *)(DAT_140f2a910 + 0x2428) != '\x01') {
    return;
  }
  local_198 = *(float *)(param_1 + 0x60);
  fStack_194 = *(float *)(param_1 + 100);
  fStack_190 = (float)*(undefined8 *)(param_1 + 0x68) + local_198;
  fStack_18c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20) + fStack_194;
  cVar4 = FUN_140095f99(&local_198,*(undefined4 *)(param_1 + 0x10));
  if (cVar4 == '\0') {
    return;
  }
  if ((*(int *)(lVar3 + 0x244c) == -1) ||
     (iVar6 = strcmp("_IMWINDOW",(char *)(lVar3 + 0x2450)), iVar6 != 0)) {
LAB_14008ee91:
    FUN_1400964e6();
    return;
  }
  uVar1 = **(undefined8 **)(lVar3 + 0x2438);
  cVar4 = FUN_14009b1fd(param_1,uVar1);
  if (cVar4 == '\0') goto LAB_14008ee91;
  lVar7 = FUN_140096119("_IMWINDOW",0xc00);
  if (lVar7 == 0) goto LAB_14008f0c6;
  if (*(longlong *)(param_1 + 0x4c8) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x4c0);
    bVar11 = lVar7 == 0;
LAB_14008eeb8:
    if (lVar7 != 0) goto code_r0x00014008eebe;
LAB_14008eeee:
    bVar2 = false;
    lVar7 = 0;
LAB_14008eef1:
    fVar12 = (float)FUN_14009376e();
    local_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_50 = CONCAT44(fVar12 + (float)((ulonglong)local_58 >> 0x20),
                         *(float *)(param_1 + 0x68) + (float)local_58);
  }
  else {
    lVar8 = FUN_140098d77(*(longlong *)(param_1 + 0x4c8),*(undefined8 *)(lVar3 + 0x118));
    if (lVar8 == 0) {
      bVar11 = false;
      goto LAB_14008eeee;
    }
    lVar7 = lVar8;
    if ((((*(byte *)(lVar8 + 0x11) & 4) != 0) && (*(longlong *)(lVar8 + 0x18) == 0)) &&
       ((*(longlong *)(lVar8 + 0xa0) == 0 ||
        (lVar7 = *(longlong *)(lVar8 + 0xa0), *(longlong *)(lVar8 + 0x20) != 0)))) {
      lVar7 = FUN_14009b26d(lVar8);
      bVar11 = false;
      goto LAB_14008eeb8;
    }
    bVar11 = false;
code_r0x00014008eebe:
    lVar8 = *(longlong *)(lVar7 + 0x40);
    bVar2 = true;
    if ((lVar8 == 0) || ((*(byte *)(lVar7 + 0x11) & 0x30) != 0)) goto LAB_14008eef1;
    local_58 = *(undefined8 *)(lVar8 + 0x38);
    uStack_50 = *(undefined8 *)(lVar8 + 0x40);
    bVar2 = true;
  }
  uVar5 = 1;
  if (*(char *)(lVar3 + 0x82) == '\0') {
    uVar5 = FUN_140080e0c(&local_58,&uStack_50,1);
  }
  if (*(char *)(lVar3 + 0x2471) == '\0') {
    if ((*(char *)(lVar3 + 0x2472) != '\x01') || (!bVar11 && !bVar2)) goto LAB_14008f0c6;
  }
  else if (!(bool)(bVar11 | bVar2)) goto LAB_14008f0c6;
  FUN_14009a376(&local_198);
  FUN_14009a376(local_2d8);
  pfVar10 = &local_198;
  if ((bVar2) &&
     (((lVar8 = lVar7, *(longlong *)(lVar7 + 0x18) != 0 || ((*(byte *)(lVar7 + 0x11) & 8) != 0)) ||
      (*(longlong *)(lVar7 + 0x20) != 0)))) {
    do {
      lVar9 = lVar8;
      lVar8 = *(longlong *)(lVar9 + 0x18);
    } while (lVar8 != 0);
    pfVar10 = local_2d8;
    FUN_14009a427(param_1,lVar9,uVar1,0,pfVar10,uVar5,1);
    uVar14 = (undefined4)((ulonglong)pfVar10 >> 0x20);
    pfVar10 = &local_198;
    if (local_200[3] != '\0') {
      pfVar10 = local_2d8;
    }
    if (*(longlong *)(lVar7 + 0x20) == 0) goto code_r0x00014008eff8;
  }
  else {
code_r0x00014008eff8:
    pfVar13 = &local_198;
    FUN_14009a427(param_1,lVar7,uVar1,0,pfVar13,uVar5,0);
    uVar14 = (undefined4)((ulonglong)pfVar13 >> 0x20);
  }
  if (pfVar10 == local_2d8) {
    local_c0 = 0;
  }
  FUN_14009b29e(param_1,lVar7,uVar1,&local_198);
  FUN_14009b29e(param_1,lVar7,uVar1,local_2d8);
  if ((*(char *)(pfVar10 + 0x36) == '\x01') && (*(char *)(lVar3 + 0x2472) == '\x01')) {
    FUN_140099b55(lVar3,param_1,*(undefined8 *)(pfVar10 + 0x38),uVar1,CONCAT44(uVar14,pfVar10[0x3a])
                  ,pfVar10[0x3b],pfVar10 == local_2d8);
  }
  FUN_14009a8da(local_2d8);
  FUN_14009a8da(&local_198);
LAB_14008f0c6:
  FUN_1400964e6();
  return;
}

