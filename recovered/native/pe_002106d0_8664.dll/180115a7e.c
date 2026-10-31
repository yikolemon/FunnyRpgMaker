/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180115a7e */

void FUN_180115a7e(longlong param_1)

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
  
  lVar3 = DAT_180419160;
  local_48 = 0xfffffffffffffffe;
  if (*(char *)(DAT_180419160 + 0x2428) != '\x01') {
    return;
  }
  local_198 = *(float *)(param_1 + 0x60);
  fStack_194 = *(float *)(param_1 + 100);
  fStack_190 = (float)*(undefined8 *)(param_1 + 0x68) + local_198;
  fStack_18c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20) + fStack_194;
  cVar4 = FUN_18011ccdd(&local_198,*(undefined4 *)(param_1 + 0x10));
  if (cVar4 == '\0') {
    return;
  }
  if ((*(int *)(lVar3 + 0x244c) == -1) ||
     (iVar6 = strcmp("_IMWINDOW",(char *)(lVar3 + 0x2450)), iVar6 != 0)) {
LAB_180115b79:
    FUN_18011d22a();
    return;
  }
  uVar1 = **(undefined8 **)(lVar3 + 0x2438);
  cVar4 = FUN_1801222ce(param_1,uVar1);
  if (cVar4 == '\0') goto LAB_180115b79;
  lVar7 = FUN_18011ce5d("_IMWINDOW",0xc00);
  if (lVar7 == 0) goto LAB_180115dae;
  if (*(longlong *)(param_1 + 0x4c8) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x4c0);
    bVar11 = lVar7 == 0;
LAB_180115ba0:
    if (lVar7 != 0) goto code_r0x000180115ba6;
LAB_180115bd6:
    bVar2 = false;
    lVar7 = 0;
LAB_180115bd9:
    fVar12 = (float)FUN_18011a456();
    local_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_50 = CONCAT44(fVar12 + (float)((ulonglong)local_58 >> 0x20),
                         *(float *)(param_1 + 0x68) + (float)local_58);
  }
  else {
    lVar8 = FUN_18011fabb(*(longlong *)(param_1 + 0x4c8),*(undefined8 *)(lVar3 + 0x118));
    if (lVar8 == 0) {
      bVar11 = false;
      goto LAB_180115bd6;
    }
    lVar7 = lVar8;
    if ((((*(byte *)(lVar8 + 0x11) & 4) != 0) && (*(longlong *)(lVar8 + 0x18) == 0)) &&
       ((*(longlong *)(lVar8 + 0xa0) == 0 ||
        (lVar7 = *(longlong *)(lVar8 + 0xa0), *(longlong *)(lVar8 + 0x20) != 0)))) {
      lVar7 = FUN_18012233e(lVar8);
      bVar11 = false;
      goto LAB_180115ba0;
    }
    bVar11 = false;
code_r0x000180115ba6:
    lVar8 = *(longlong *)(lVar7 + 0x40);
    bVar2 = true;
    if ((lVar8 == 0) || ((*(byte *)(lVar7 + 0x11) & 0x30) != 0)) goto LAB_180115bd9;
    local_58 = *(undefined8 *)(lVar8 + 0x38);
    uStack_50 = *(undefined8 *)(lVar8 + 0x40);
    bVar2 = true;
  }
  uVar5 = 1;
  if (*(char *)(lVar3 + 0x82) == '\0') {
    uVar5 = FUN_180107af4(&local_58,&uStack_50,1);
  }
  if (*(char *)(lVar3 + 0x2471) == '\0') {
    if ((*(char *)(lVar3 + 0x2472) != '\x01') || (!bVar11 && !bVar2)) goto LAB_180115dae;
  }
  else if (!(bool)(bVar11 | bVar2)) goto LAB_180115dae;
  FUN_1801210ba(&local_198);
  FUN_1801210ba(local_2d8);
  pfVar10 = &local_198;
  if ((bVar2) &&
     (((lVar8 = lVar7, *(longlong *)(lVar7 + 0x18) != 0 || ((*(byte *)(lVar7 + 0x11) & 8) != 0)) ||
      (*(longlong *)(lVar7 + 0x20) != 0)))) {
    do {
      lVar9 = lVar8;
      lVar8 = *(longlong *)(lVar9 + 0x18);
    } while (lVar8 != 0);
    pfVar10 = local_2d8;
    FUN_18012116b(param_1,lVar9,uVar1,0,pfVar10,uVar5,1);
    uVar14 = (undefined4)((ulonglong)pfVar10 >> 0x20);
    pfVar10 = &local_198;
    if (local_200[3] != '\0') {
      pfVar10 = local_2d8;
    }
    if (*(longlong *)(lVar7 + 0x20) == 0) goto code_r0x000180115ce0;
  }
  else {
code_r0x000180115ce0:
    pfVar13 = &local_198;
    FUN_18012116b(param_1,lVar7,uVar1,0,pfVar13,uVar5,0);
    uVar14 = (undefined4)((ulonglong)pfVar13 >> 0x20);
  }
  if (pfVar10 == local_2d8) {
    local_c0 = 0;
  }
  FUN_18012236f(param_1,lVar7,uVar1,&local_198);
  FUN_18012236f(param_1,lVar7,uVar1,local_2d8);
  if ((*(char *)(pfVar10 + 0x36) == '\x01') && (*(char *)(lVar3 + 0x2472) == '\x01')) {
    FUN_180120899(lVar3,param_1,*(undefined8 *)(pfVar10 + 0x38),uVar1,CONCAT44(uVar14,pfVar10[0x3a])
                  ,pfVar10[0x3b],pfVar10 == local_2d8);
  }
  FUN_18012161e(local_2d8);
  FUN_18012161e(&local_198);
LAB_180115dae:
  FUN_18011d22a();
  return;
}

