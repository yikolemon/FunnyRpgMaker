/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180145a54 */

undefined1
FUN_180145a54(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6,uint param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 *local_b8;
  float local_b0;
  float local_ac;
  undefined1 local_a8 [72];
  ulonglong local_60;
  
  lVar2 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar2 + 0x1608) + 0x10e) != '\0') {
    uVar3 = 0;
    goto LAB_180145ddb;
  }
  if (param_6 == 0) {
    lVar8 = FUN_180139a46(param_2);
    param_6 = *(longlong *)(lVar8 + 0x10);
  }
  lVar8 = lVar2 + 0x1fce;
  if ((*(byte *)(lVar2 + 0x1fa8) & 8) == 0) {
    lVar8 = lVar2 + 0x27cc;
  }
  if ((param_7 >> 0xe & 1) == 0) {
LAB_180145b0c:
    local_c8 = param_6;
    FUN_180139a58(local_a8,0x40,param_2,param_3);
  }
  else {
    iVar7 = FUN_18013a239(param_2,param_3,lVar8);
    if (iVar7 != 0) goto LAB_180145b0c;
    local_a8[0] = 0;
  }
  *(byte *)(lVar2 + 0x1fae) = *(byte *)(lVar2 + 0x1fae) | 1;
  if (param_4 == 0) {
    local_c8 = 0;
    uStack_c0 = 0;
    uVar3 = FUN_180145e1f(param_1,local_a8,0x40,param_7 | 0x10001000);
    if ((*(byte *)(lVar2 + 0x1fe9) & 8) != 0) {
      fVar9 = 0.0;
      goto LAB_180145c12;
    }
    *(byte *)(lVar2 + 0x1fe6) = *(byte *)(lVar2 + 0x1fe6) & 0xfe;
LAB_180145dc5:
    uVar6 = 0;
  }
  else {
    fVar9 = (float)FUN_18011a456();
    FUN_18011a496();
    FUN_180117f98(param_1);
    fVar10 = (float)FUN_18011a39a();
    fVar11 = fVar9 + *(float *)(lVar2 + 0xe0c);
    FUN_180102463(DAT_1802ac570,fVar10 - (fVar11 + fVar11));
    FUN_1800ffdb5();
    local_c8 = 0;
    uStack_c0 = 0;
    uVar3 = FUN_180145e1f(&DAT_1803861e4,local_a8,0x40,param_7 | 0x10001000);
    local_b8 = (undefined4 *)(lVar2 + 0x1fe0);
    if ((*(byte *)(lVar2 + 0x1fe9) & 8) == 0) {
      cVar4 = '\0';
LAB_180145c44:
      uVar1 = *(undefined8 *)(lVar2 + 0xdf4);
      *(int *)(lVar2 + 0xdf4) = (int)((ulonglong)uVar1 >> 0x20);
      if ((param_7 >> 9 & 1) != 0) {
        FUN_180116580(1);
      }
      FUN_18011648a(8,1);
      FUN_180119893(0,*(undefined4 *)(lVar2 + 0xe0c));
      local_b0 = fVar9;
      local_ac = fVar9;
      cVar5 = FUN_180133fde(&DAT_180377193,&local_b0,0);
      if (cVar5 != '\0') {
        local_c8 = param_4;
        if (*(char *)(lVar2 + 0x138) != '\0') {
          local_c8 = param_5;
        }
        if (param_5 == 0) {
          local_c8 = param_4;
        }
        FUN_180139ae3(param_2,0x2d,param_3,param_3);
        uVar3 = 1;
        cVar4 = '\x01';
      }
      FUN_180119893(0,*(undefined4 *)(lVar2 + 0xe0c));
      local_b0 = fVar9;
      local_ac = fVar9;
      cVar5 = FUN_180133fde(&DAT_1803772e5,&local_b0,0);
      if (cVar5 != '\0') {
        local_c8 = param_4;
        if (*(char *)(lVar2 + 0x138) != '\0') {
          local_c8 = param_5;
        }
        if (param_5 == 0) {
          local_c8 = param_4;
        }
        FUN_180139ae3(param_2,0x2b,param_3,param_3);
        uVar3 = 1;
        cVar4 = '\x01';
      }
      FUN_180116548();
      if ((param_7 >> 9 & 1) != 0) {
        FUN_180116676();
      }
      lVar8 = FUN_180101d94(param_1,0);
      if (param_1 != lVar8) {
        FUN_180119893(0,*(undefined4 *)(lVar2 + 0xe0c));
        FUN_180132c30(param_1,lVar8,0);
      }
      *(undefined8 *)(lVar2 + 0xdf4) = uVar1;
      FUN_18011834f();
      FUN_18011949a();
    }
    else {
LAB_180145c12:
      local_b8 = (undefined4 *)(lVar2 + 0x1fe0);
      local_c8 = lVar8;
      if ((param_7 >> 0xd & 1) == 0) {
        local_c8 = 0;
      }
      cVar4 = FUN_18013a01d(local_a8,param_2,param_3,param_6);
      if (param_4 != 0) goto LAB_180145c44;
    }
    *(byte *)(lVar2 + 0x1fe6) = *(byte *)(lVar2 + 0x1fe6) & 0xfe;
    if (cVar4 == '\0') goto LAB_180145dc5;
    FUN_18010748b(*local_b8);
    uVar6 = 1;
  }
  if ((param_7 & 0x40) == 0) {
    uVar3 = uVar6;
  }
LAB_180145ddb:
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_e8)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_e8);
}

