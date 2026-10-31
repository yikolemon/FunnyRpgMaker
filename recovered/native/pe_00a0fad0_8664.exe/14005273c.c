/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005273c */

undefined8 FUN_14005273c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 ****ppppuVar9;
  bool bVar10;
  wchar_t *local_1a8;
  undefined8 local_1a0;
  int local_198;
  int iStack_194;
  undefined8 uStack_190;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  undefined1 local_98 [32];
  undefined8 local_78;
  int local_70;
  undefined8 ***local_58 [3];
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  *(undefined1 *)(param_1 + 0x130) = 0;
  FUN_14000550c(local_58,param_2,0);
  FUN_140007025();
  local_78 = 0xffff00000000;
  ppppuVar9 = local_58;
  if (7 < local_40) {
    ppppuVar9 = (undefined8 ****)local_58[0];
  }
  local_70 = FUN_1400dcbb0(ppppuVar9,&local_198,3,0xffffffff);
  FUN_140007276(&local_78,local_70,&local_198);
  iVar4 = local_70;
  uStack_190 = FUN_140007025();
  local_198 = iVar4;
  iVar3 = (int)local_78;
  if ((int)local_78 == 0) {
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("exists",&local_198,local_58);
    }
    bVar10 = false;
  }
  else {
    FUN_140007025();
    bVar10 = iVar3 != 1;
  }
  FUN_140005690(local_58);
  if (bVar10) {
    puVar1 = (undefined8 *)(param_1 + 0xf0);
    if (puVar1 != param_2) {
      puVar8 = param_2 + 2;
      if (7 < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      FUN_14000ffc0(puVar1,param_2,*puVar8);
    }
    FUN_14000550c(local_58,puVar1,0);
    FUN_140052ee6(local_58,&local_198);
    lVar2 = CONCAT44(iStack_184,local_188);
    FUN_140005690();
    FUN_140005690(local_58);
    if (lVar2 == 0) {
      FUN_140052ff2(local_98);
      FUN_14000892c(&local_78,local_98);
      FUN_140052f9e(local_58,&local_78,&DAT_140173c42);
      puVar8 = puVar1;
      if (7 < *(ulonglong *)(param_1 + 0x108)) {
        puVar8 = *(undefined8 **)(param_1 + 0xf0);
      }
      piVar6 = (int *)FUN_140008bae(local_58,puVar8,*(undefined8 *)(param_1 + 0x100));
      local_198 = *piVar6;
      iStack_194 = piVar6[1];
      uStack_190 = *(undefined8 *)(piVar6 + 2);
      local_188 = piVar6[4];
      iStack_184 = piVar6[5];
      iStack_180 = piVar6[6];
      iStack_17c = piVar6[7];
      piVar6[4] = 0;
      piVar6[5] = 0;
      piVar6[6] = 7;
      piVar6[7] = 0;
      *(undefined2 *)piVar6 = 0;
      FUN_14000ff1e(puVar1,&local_198);
      FUN_140005242(&local_198);
      FUN_140005242(local_58);
      FUN_140005242(&local_78);
      FUN_140005690(local_98);
    }
    cVar5 = FUN_1400530e4(param_1);
    if (cVar5 == '\0') {
      uVar7 = 0;
    }
    else {
      FUN_14007f906(&local_198,param_1 + 0x110,param_1 + 0x131);
      FUN_1400535c0(param_1 + 0x48,&local_198);
      FUN_14001019c(&local_198);
      *(undefined1 *)(param_1 + 0x130) = 1;
      uVar7 = 1;
    }
  }
  else {
    local_1a8 = L"UberWolfLib: Invalid game executable path: {}";
    local_1a0 = 0x2d;
    FUN_140052dd3(local_58,&local_1a8,param_2);
    FUN_140052d74(&local_198,&DAT_1401cc978,local_58);
    FUN_140052e4f(&local_188);
    FUN_140052e84(&local_198);
    FUN_140005242(local_58);
    uVar7 = 0;
  }
  return uVar7;
}

