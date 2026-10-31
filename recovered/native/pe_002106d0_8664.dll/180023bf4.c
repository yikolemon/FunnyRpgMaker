/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180023bf4 */

void FUN_180023bf4(longlong param_1,longlong *param_2,uint *param_3,longlong *param_4)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  char *_Str;
  size_t sVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  longlong local_90;
  char *local_88;
  undefined8 local_80;
  uint local_78 [4];
  undefined8 local_68;
  uint *local_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_b8;
  lVar10 = param_2[3] / 10000000 - param_2[3] / -0x6769800000000000;
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 == 0 || *(longlong *)(param_1 + 0x18) != lVar10) {
    lVar5 = param_1 + 0x20;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      (**(code **)(param_1 + 0x38))(lVar5,1);
      lVar3 = *(longlong *)(param_1 + 0x28);
      lVar6 = lVar3 + 1;
    }
    else {
      lVar6 = 1;
      lVar3 = 0;
    }
    *(longlong *)(param_1 + 0x28) = lVar6;
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + lVar3) = 0x5b;
    uVar9 = param_3[5];
    iVar1 = uVar9 + 0x76c;
    iVar7 = -iVar1;
    if (iVar7 < 0) {
      iVar7 = iVar1;
    }
    local_50 = FUN_180024c02(&local_68,iVar7,0x15);
    if ((int)uVar9 < -0x76c) {
      *(undefined1 *)(local_50 + -1) = 0x2d;
      local_50 = local_50 + -1;
    }
    FUN_180018bde(lVar5,local_50);
    lVar6 = *(longlong *)(param_1 + 0x28);
    uVar8 = lVar6 + 1;
    if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
      (**(code **)(param_1 + 0x38))(lVar5);
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
    }
    *(ulonglong *)(param_1 + 0x28) = uVar8;
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + lVar6) = 0x2d;
    uVar9 = param_3[4] + 1;
    if (uVar9 < 100) {
      bVar2 = (byte)((uVar9 * 0xcd & 0xffff) >> 0xb);
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
      if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
        (**(code **)(param_1 + 0x38))(lVar5);
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar8 = lVar6 + 1;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar8;
      *(byte *)(*(longlong *)(param_1 + 0x20) + lVar6) = bVar2 | 0x30;
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
      if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
        (**(code **)(param_1 + 0x38))(lVar5);
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar8 = lVar6 + 1;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar8;
      *(byte *)(*(longlong *)(param_1 + 0x20) + lVar6) = (char)uVar9 + bVar2 * -10 | 0x30;
    }
    else {
      local_60 = local_78;
      local_68 = 1;
      local_88 = "{:02}";
      local_80 = 5;
      local_90 = lVar5;
      local_78[0] = uVar9;
      FUN_180024c6e(local_98);
    }
    lVar6 = *(longlong *)(param_1 + 0x28);
    uVar8 = lVar6 + 1;
    if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
      (**(code **)(param_1 + 0x38))(lVar5);
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
    }
    *(ulonglong *)(param_1 + 0x28) = uVar8;
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + lVar6) = 0x2d;
    uVar9 = param_3[3];
    if (uVar9 < 100) {
      bVar2 = (byte)((uVar9 * 0xcd & 0xffff) >> 0xb);
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
      if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
        (**(code **)(param_1 + 0x38))(lVar5);
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar8 = lVar6 + 1;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar8;
      *(byte *)(*(longlong *)(param_1 + 0x20) + lVar6) = bVar2 | 0x30;
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
      if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
        (**(code **)(param_1 + 0x38))(lVar5);
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar8 = lVar6 + 1;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar8;
      *(byte *)(*(longlong *)(param_1 + 0x20) + lVar6) = (char)uVar9 + bVar2 * -10 | 0x30;
    }
    else {
      local_60 = local_78;
      local_68 = 1;
      local_88 = "{:02}";
      local_80 = 5;
      local_90 = lVar5;
      local_78[0] = uVar9;
      FUN_180024c6e(local_98);
    }
    lVar6 = *(longlong *)(param_1 + 0x28);
    uVar8 = lVar6 + 1;
    if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
      (**(code **)(param_1 + 0x38))(lVar5);
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
    }
    *(ulonglong *)(param_1 + 0x28) = uVar8;
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + lVar6) = 0x20;
    uVar9 = param_3[2];
    if (uVar9 < 100) {
      bVar2 = (byte)((uVar9 * 0xcd & 0xffff) >> 0xb);
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
      if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
        (**(code **)(param_1 + 0x38))(lVar5);
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar8 = lVar6 + 1;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar8;
      *(byte *)(*(longlong *)(param_1 + 0x20) + lVar6) = bVar2 | 0x30;
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
      if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
        (**(code **)(param_1 + 0x38))(lVar5);
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar8 = lVar6 + 1;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar8;
      *(byte *)(*(longlong *)(param_1 + 0x20) + lVar6) = (char)uVar9 + bVar2 * -10 | 0x30;
    }
    else {
      local_60 = local_78;
      local_68 = 1;
      local_88 = "{:02}";
      local_80 = 5;
      local_90 = lVar5;
      local_78[0] = uVar9;
      FUN_180024c6e(local_98);
    }
    lVar6 = *(longlong *)(param_1 + 0x28);
    uVar8 = lVar6 + 1;
    if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
      (**(code **)(param_1 + 0x38))(lVar5);
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
    }
    *(ulonglong *)(param_1 + 0x28) = uVar8;
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + lVar6) = 0x3a;
    uVar9 = param_3[1];
    if (uVar9 < 100) {
      bVar2 = (byte)((uVar9 * 0xcd & 0xffff) >> 0xb);
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
      if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
        (**(code **)(param_1 + 0x38))(lVar5);
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar8 = lVar6 + 1;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar8;
      *(byte *)(*(longlong *)(param_1 + 0x20) + lVar6) = bVar2 | 0x30;
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
      if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
        (**(code **)(param_1 + 0x38))(lVar5);
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar8 = lVar6 + 1;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar8;
      *(byte *)(*(longlong *)(param_1 + 0x20) + lVar6) = (char)uVar9 + bVar2 * -10 | 0x30;
    }
    else {
      local_60 = local_78;
      local_68 = 1;
      local_88 = "{:02}";
      local_80 = 5;
      local_90 = lVar5;
      local_78[0] = uVar9;
      FUN_180024c6e(local_98);
    }
    lVar6 = *(longlong *)(param_1 + 0x28);
    uVar8 = lVar6 + 1;
    if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
      (**(code **)(param_1 + 0x38))(lVar5);
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
    }
    *(ulonglong *)(param_1 + 0x28) = uVar8;
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + lVar6) = 0x3a;
    uVar9 = *param_3;
    if (uVar9 < 100) {
      bVar2 = (byte)((uVar9 * 0xcd & 0xffff) >> 0xb);
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
      if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
        (**(code **)(param_1 + 0x38))(lVar5);
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar8 = lVar6 + 1;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar8;
      *(byte *)(*(longlong *)(param_1 + 0x20) + lVar6) = bVar2 | 0x30;
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
      if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
        (**(code **)(param_1 + 0x38))(lVar5);
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar8 = lVar6 + 1;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar8;
      *(byte *)(*(longlong *)(param_1 + 0x20) + lVar6) = (char)uVar9 + bVar2 * -10 | 0x30;
    }
    else {
      local_60 = local_78;
      local_68 = 1;
      local_88 = "{:02}";
      local_80 = 5;
      local_90 = lVar5;
      local_78[0] = uVar9;
      FUN_180024c6e(local_98);
    }
    lVar6 = *(longlong *)(param_1 + 0x28);
    uVar8 = lVar6 + 1;
    if (*(ulonglong *)(param_1 + 0x30) < uVar8) {
      (**(code **)(param_1 + 0x38))(lVar5);
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar8 = lVar6 + 1;
    }
    *(ulonglong *)(param_1 + 0x28) = uVar8;
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + lVar6) = 0x2e;
    *(longlong *)(param_1 + 0x18) = lVar10;
    lVar5 = *(longlong *)(param_1 + 0x28);
  }
  FUN_180018bde(param_4,*(longlong *)(param_1 + 0x20),lVar5 + *(longlong *)(param_1 + 0x20));
  lVar5 = param_2[3];
  FUN_180024aab(((int)(SUB168(SEXT816(lVar5) * SEXT816(0x346dc5d63886594b),8) >> 0xb) -
                (SUB164(SEXT816(lVar5) * SEXT816(0x346dc5d63886594b),0xc) >> 0x1f)) +
                ((int)(SUB168(SEXT816(lVar5) * ZEXT816(0xd6bf94d5e57a42bd),8) >> 0x17) -
                ((int)(lVar5 / -0x6769800000000000) + (int)(lVar5 >> 0x3f))) * -1000,param_4);
  lVar5 = param_4[1];
  uVar8 = lVar5 + 1;
  if ((ulonglong)param_4[2] < uVar8) {
    (*(code *)param_4[3])(param_4);
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
  }
  param_4[1] = uVar8;
  *(undefined1 *)(*param_4 + lVar5) = 0x5d;
  lVar5 = param_4[1];
  uVar8 = lVar5 + 1;
  if ((ulonglong)param_4[2] < uVar8) {
    (*(code *)param_4[3])(param_4);
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
  }
  param_4[1] = uVar8;
  *(undefined1 *)(*param_4 + lVar5) = 0x20;
  if (param_2[1] != 0) {
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
    if ((ulonglong)param_4[2] < uVar8) {
      (*(code *)param_4[3])(param_4);
      lVar5 = param_4[1];
      uVar8 = lVar5 + 1;
    }
    param_4[1] = uVar8;
    *(undefined1 *)(*param_4 + lVar5) = 0x5b;
    FUN_180018bde(param_4,*param_2,param_2[1] + *param_2);
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
    if ((ulonglong)param_4[2] < uVar8) {
      (*(code *)param_4[3])(param_4);
      lVar5 = param_4[1];
      uVar8 = lVar5 + 1;
    }
    param_4[1] = uVar8;
    *(undefined1 *)(*param_4 + lVar5) = 0x5d;
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
    if ((ulonglong)param_4[2] < uVar8) {
      (*(code *)param_4[3])(param_4);
      lVar5 = param_4[1];
      uVar8 = lVar5 + 1;
    }
    param_4[1] = uVar8;
    *(undefined1 *)(*param_4 + lVar5) = 0x20;
  }
  lVar5 = param_4[1];
  uVar8 = lVar5 + 1;
  if ((ulonglong)param_4[2] < uVar8) {
    (*(code *)param_4[3])(param_4);
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
  }
  param_4[1] = uVar8;
  *(undefined1 *)(*param_4 + lVar5) = 0x5b;
  param_2[5] = param_4[1];
  FUN_180018bde(param_4,(&PTR_s_trace_1802b0850)[(longlong)(int)param_2[2] * 2],
                (&PTR_s_trace_1802b0850)[(longlong)(int)param_2[2] * 2] +
                *(longlong *)(&DAT_1802b0858 + (longlong)(int)param_2[2] * 0x10));
  lVar5 = param_4[1];
  param_2[6] = lVar5;
  uVar8 = lVar5 + 1;
  if ((ulonglong)param_4[2] < uVar8) {
    (*(code *)param_4[3])(param_4);
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
  }
  param_4[1] = uVar8;
  *(undefined1 *)(*param_4 + lVar5) = 0x5d;
  lVar5 = param_4[1];
  uVar8 = lVar5 + 1;
  if ((ulonglong)param_4[2] < uVar8) {
    (*(code *)param_4[3])(param_4);
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
  }
  param_4[1] = uVar8;
  *(undefined1 *)(*param_4 + lVar5) = 0x20;
  if (0 < (int)param_2[8]) {
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
    if ((ulonglong)param_4[2] < uVar8) {
      (*(code *)param_4[3])(param_4);
      lVar5 = param_4[1];
      uVar8 = lVar5 + 1;
    }
    param_4[1] = uVar8;
    *(undefined1 *)(*param_4 + lVar5) = 0x5b;
    _Str = (char *)FUN_180024bce(param_2[7]);
    sVar4 = strlen(_Str);
    FUN_180018bde(param_4,_Str,_Str + sVar4);
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
    if ((ulonglong)param_4[2] < uVar8) {
      (*(code *)param_4[3])(param_4);
      lVar5 = param_4[1];
      uVar8 = lVar5 + 1;
    }
    param_4[1] = uVar8;
    *(undefined1 *)(*param_4 + lVar5) = 0x3a;
    iVar1 = (int)param_2[8];
    iVar7 = -iVar1;
    if (-iVar1 < 0) {
      iVar7 = iVar1;
    }
    local_50 = FUN_180024c02(&local_68,iVar7,0x15);
    if (iVar1 < 0) {
      *(undefined1 *)(local_50 + -1) = 0x2d;
      local_50 = local_50 + -1;
    }
    FUN_180018bde(param_4,local_50);
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
    if ((ulonglong)param_4[2] < uVar8) {
      (*(code *)param_4[3])(param_4);
      lVar5 = param_4[1];
      uVar8 = lVar5 + 1;
    }
    param_4[1] = uVar8;
    *(undefined1 *)(*param_4 + lVar5) = 0x5d;
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
    if ((ulonglong)param_4[2] < uVar8) {
      (*(code *)param_4[3])(param_4);
      lVar5 = param_4[1];
      uVar8 = lVar5 + 1;
    }
    param_4[1] = uVar8;
    *(undefined1 *)(*param_4 + lVar5) = 0x20;
  }
  lVar5 = FUN_180024602();
  if (*(longlong *)(lVar5 + 8) != 0) {
    lVar10 = param_4[1];
    uVar8 = lVar10 + 1;
    if ((ulonglong)param_4[2] < uVar8) {
      (*(code *)param_4[3])(param_4);
      lVar10 = param_4[1];
      uVar8 = lVar10 + 1;
    }
    param_4[1] = uVar8;
    *(undefined1 *)(*param_4 + lVar10) = 0x5b;
    FUN_1800246d0(param_1 + 0x140,lVar5,param_4);
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
    if ((ulonglong)param_4[2] < uVar8) {
      (*(code *)param_4[3])(param_4);
      lVar5 = param_4[1];
      uVar8 = lVar5 + 1;
    }
    param_4[1] = uVar8;
    *(undefined1 *)(*param_4 + lVar5) = 0x5d;
    lVar5 = param_4[1];
    uVar8 = lVar5 + 1;
    if ((ulonglong)param_4[2] < uVar8) {
      (*(code *)param_4[3])(param_4);
      lVar5 = param_4[1];
      uVar8 = lVar5 + 1;
    }
    param_4[1] = uVar8;
    *(undefined1 *)(*param_4 + lVar5) = 0x20;
  }
  FUN_180018bde(param_4,param_2[10],param_2[0xb] + param_2[10]);
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_b8);
}

