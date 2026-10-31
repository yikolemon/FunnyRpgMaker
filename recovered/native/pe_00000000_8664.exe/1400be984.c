/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400be984 */

undefined1
FUN_1400be984(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
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
  
  lVar2 = DAT_140f2a910;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar2 + 0x1608) + 0x10e) != '\0') {
    uVar3 = 0;
    goto LAB_1400bed0b;
  }
  if (param_6 == 0) {
    lVar8 = FUN_1400b2976(param_2);
    param_6 = *(longlong *)(lVar8 + 0x10);
  }
  lVar8 = lVar2 + 0x1fce;
  if ((*(byte *)(lVar2 + 0x1fa8) & 8) == 0) {
    lVar8 = lVar2 + 0x27cc;
  }
  if ((param_7 >> 0xe & 1) == 0) {
LAB_1400bea3c:
    local_c8 = param_6;
    FUN_1400b2988(local_a8,0x40,param_2,param_3);
  }
  else {
    iVar7 = FUN_1400b3169(param_2,param_3,lVar8);
    if (iVar7 != 0) goto LAB_1400bea3c;
    local_a8[0] = 0;
  }
  *(byte *)(lVar2 + 0x1fae) = *(byte *)(lVar2 + 0x1fae) | 1;
  if (param_4 == 0) {
    local_c8 = 0;
    uStack_c0 = 0;
    uVar3 = FUN_1400bed4f(param_1,local_a8,0x40,param_7 | 0x10001000);
    if ((*(byte *)(lVar2 + 0x1fe9) & 8) != 0) {
      fVar9 = 0.0;
      goto LAB_1400beb42;
    }
    *(byte *)(lVar2 + 0x1fe6) = *(byte *)(lVar2 + 0x1fe6) & 0xfe;
LAB_1400becf5:
    uVar6 = 0;
  }
  else {
    fVar9 = (float)FUN_14009376e();
    FUN_1400937ae();
    FUN_1400912b0(param_1);
    fVar10 = (float)FUN_1400936b2();
    fVar11 = fVar9 + *(float *)(lVar2 + 0xe0c);
    FUN_14007b71f(DAT_1401c86c8,fVar10 - (fVar11 + fVar11));
    FUN_140079071();
    local_c8 = 0;
    uStack_c0 = 0;
    uVar3 = FUN_1400bed4f(&DAT_140edcdbf,local_a8,0x40,param_7 | 0x10001000);
    local_b8 = (undefined4 *)(lVar2 + 0x1fe0);
    if ((*(byte *)(lVar2 + 0x1fe9) & 8) == 0) {
      cVar4 = '\0';
LAB_1400beb74:
      uVar1 = *(undefined8 *)(lVar2 + 0xdf4);
      *(int *)(lVar2 + 0xdf4) = (int)((ulonglong)uVar1 >> 0x20);
      if ((param_7 >> 9 & 1) != 0) {
        FUN_14008f898(1);
      }
      FUN_14008f7a2(8,1);
      FUN_140092bab(0,*(undefined4 *)(lVar2 + 0xe0c));
      local_b0 = fVar9;
      local_ac = fVar9;
      cVar5 = FUN_1400acf0e(&DAT_140ed6fe2,&local_b0,0);
      if (cVar5 != '\0') {
        local_c8 = param_4;
        if (*(char *)(lVar2 + 0x138) != '\0') {
          local_c8 = param_5;
        }
        if (param_5 == 0) {
          local_c8 = param_4;
        }
        FUN_1400b2a13(param_2,0x2d,param_3,param_3);
        uVar3 = 1;
        cVar4 = '\x01';
      }
      FUN_140092bab(0,*(undefined4 *)(lVar2 + 0xe0c));
      local_b0 = fVar9;
      local_ac = fVar9;
      cVar5 = FUN_1400acf0e(&DAT_140ed7050,&local_b0,0);
      if (cVar5 != '\0') {
        local_c8 = param_4;
        if (*(char *)(lVar2 + 0x138) != '\0') {
          local_c8 = param_5;
        }
        if (param_5 == 0) {
          local_c8 = param_4;
        }
        FUN_1400b2a13(param_2,0x2b,param_3,param_3);
        uVar3 = 1;
        cVar4 = '\x01';
      }
      FUN_14008f860();
      if ((param_7 >> 9 & 1) != 0) {
        FUN_14008f98e();
      }
      lVar8 = FUN_14007b050(param_1,0);
      if (param_1 != lVar8) {
        FUN_140092bab(0,*(undefined4 *)(lVar2 + 0xe0c));
        FUN_1400abb60(param_1,lVar8,0);
      }
      *(undefined8 *)(lVar2 + 0xdf4) = uVar1;
      FUN_140091667();
      FUN_1400927b2();
    }
    else {
LAB_1400beb42:
      local_b8 = (undefined4 *)(lVar2 + 0x1fe0);
      local_c8 = lVar8;
      if ((param_7 >> 0xd & 1) == 0) {
        local_c8 = 0;
      }
      cVar4 = FUN_1400b2f4d(local_a8,param_2,param_3,param_6);
      if (param_4 != 0) goto LAB_1400beb74;
    }
    *(byte *)(lVar2 + 0x1fe6) = *(byte *)(lVar2 + 0x1fe6) & 0xfe;
    if (cVar4 == '\0') goto LAB_1400becf5;
    FUN_1400807a3(*local_b8);
    uVar6 = 1;
  }
  if ((param_7 & 0x40) == 0) {
    uVar3 = uVar6;
  }
LAB_1400bed0b:
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_e8)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_e8);
}

