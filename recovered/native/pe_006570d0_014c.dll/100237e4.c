/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100237e4 */

void __thiscall FUN_100237e4(int param_1,int *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *_Str;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auStack_48 [4];
  int *piStack_44;
  uint auStack_40 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  uint *puStack_30;
  undefined4 uStack_2c;
  undefined1 local_23 [3];
  int local_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  lVar8 = __alldiv(param_2[4],param_2[5],10000000,0);
  uVar9 = (undefined4)((ulonglong)lVar8 >> 0x20);
  iVar5 = *(int *)(param_1 + 0x1c);
  if (iVar5 == 0 || lVar8 != *(longlong *)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      (**(code **)(param_1 + 0x24))(param_1 + 0x18,1);
      iVar2 = *(int *)(param_1 + 0x1c);
      iVar5 = iVar2 + 1;
    }
    else {
      iVar2 = 0;
      iVar5 = 1;
    }
    *(int *)(param_1 + 0x1c) = iVar5;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar2) = 0x5b;
    uVar7 = param_3[5];
    iVar5 = uVar7 + 0x76c;
    iVar2 = -iVar5;
    if (iVar2 < 0) {
      iVar2 = iVar5;
    }
    local_20 = FUN_1002472e(&local_38,iVar2,0x15);
    if ((int)uVar7 < -0x76c) {
      *(undefined1 *)(local_20 + -1) = 0x2d;
      local_20 = local_20 + -1;
    }
    FUN_1001909c(local_20,local_23);
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar7 = iVar5 + 1;
    if (*(uint *)(param_1 + 0x20) < uVar7) {
      (**(code **)(param_1 + 0x24))(param_1 + 0x18,uVar7);
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar7 = iVar5 + 1;
    }
    *(uint *)(param_1 + 0x1c) = uVar7;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar5) = 0x2d;
    uVar7 = param_3[4] + 1;
    if (uVar7 < 100) {
      bVar1 = (byte)((uVar7 * 0xcd & 0xffff) >> 0xb);
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar6 = iVar5 + 1;
      if (*(uint *)(param_1 + 0x20) < uVar6) {
        (**(code **)(param_1 + 0x24))(param_1 + 0x18,uVar6);
        iVar5 = *(int *)(param_1 + 0x1c);
        uVar6 = iVar5 + 1;
      }
      *(uint *)(param_1 + 0x1c) = uVar6;
      *(byte *)(*(int *)(param_1 + 0x18) + iVar5) = bVar1 | 0x30;
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar6 = iVar5 + 1;
      if (*(uint *)(param_1 + 0x20) < uVar6) {
        (**(code **)(param_1 + 0x24))(param_1 + 0x18,uVar6);
        iVar5 = *(int *)(param_1 + 0x1c);
        uVar6 = iVar5 + 1;
      }
      *(uint *)(param_1 + 0x1c) = uVar6;
      *(byte *)(*(int *)(param_1 + 0x18) + iVar5) = (char)uVar7 + bVar1 * -10 | 0x30;
    }
    else {
      piStack_44 = (int *)(param_1 + 0x18);
      puStack_30 = auStack_40;
      uStack_34 = 0;
      local_38 = 1;
      auStack_40[0] = uVar7;
      FUN_1002479c(auStack_48,&piStack_44,"{:02}",5,1,0,puStack_30,uStack_2c);
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar7 = iVar5 + 1;
    if (*(uint *)(param_1 + 0x20) < uVar7) {
      (**(code **)(param_1 + 0x24))(param_1 + 0x18,uVar7);
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar7 = iVar5 + 1;
    }
    *(uint *)(param_1 + 0x1c) = uVar7;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar5) = 0x2d;
    uVar7 = param_3[3];
    if (uVar7 < 100) {
      bVar1 = (byte)((uVar7 * 0xcd & 0xffff) >> 0xb);
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar6 = iVar5 + 1;
      if (*(uint *)(param_1 + 0x20) < uVar6) {
        (**(code **)(param_1 + 0x24))(param_1 + 0x18,uVar6);
        iVar5 = *(int *)(param_1 + 0x1c);
        uVar6 = iVar5 + 1;
      }
      *(uint *)(param_1 + 0x1c) = uVar6;
      *(byte *)(*(int *)(param_1 + 0x18) + iVar5) = bVar1 | 0x30;
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar6 = iVar5 + 1;
      if (*(uint *)(param_1 + 0x20) < uVar6) {
        (**(code **)(param_1 + 0x24))(param_1 + 0x18,uVar6);
        iVar5 = *(int *)(param_1 + 0x1c);
        uVar6 = iVar5 + 1;
      }
      *(uint *)(param_1 + 0x1c) = uVar6;
      *(byte *)(*(int *)(param_1 + 0x18) + iVar5) = (char)uVar7 + bVar1 * -10 | 0x30;
    }
    else {
      puStack_30 = auStack_40;
      uStack_34 = 0;
      local_38 = 1;
      piStack_44 = (int *)(param_1 + 0x18);
      auStack_40[0] = uVar7;
      FUN_1002479c(auStack_48,&piStack_44,"{:02}",5,1,0,puStack_30,uStack_2c);
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar7 = iVar5 + 1;
    if (*(uint *)(param_1 + 0x20) < uVar7) {
      (**(code **)(param_1 + 0x24))((int *)(param_1 + 0x18),uVar7);
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar7 = iVar5 + 1;
    }
    *(uint *)(param_1 + 0x1c) = uVar7;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar5) = 0x20;
    uVar7 = param_3[2];
    if (uVar7 < 100) {
      bVar1 = (byte)((uVar7 * 0xcd & 0xffff) >> 0xb);
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar6 = iVar5 + 1;
      if (*(uint *)(param_1 + 0x20) < uVar6) {
        (**(code **)(param_1 + 0x24))(param_1 + 0x18,uVar6);
        iVar5 = *(int *)(param_1 + 0x1c);
        uVar6 = iVar5 + 1;
      }
      *(uint *)(param_1 + 0x1c) = uVar6;
      *(byte *)(*(int *)(param_1 + 0x18) + iVar5) = bVar1 | 0x30;
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar6 = iVar5 + 1;
      if (*(uint *)(param_1 + 0x20) < uVar6) {
        (**(code **)(param_1 + 0x24))(param_1 + 0x18,uVar6);
        iVar5 = *(int *)(param_1 + 0x1c);
        uVar6 = iVar5 + 1;
      }
      *(uint *)(param_1 + 0x1c) = uVar6;
      *(byte *)(*(int *)(param_1 + 0x18) + iVar5) = (char)uVar7 + bVar1 * -10 | 0x30;
    }
    else {
      puStack_30 = auStack_40;
      uStack_34 = 0;
      local_38 = 1;
      piStack_44 = (int *)(param_1 + 0x18);
      auStack_40[0] = uVar7;
      FUN_1002479c(auStack_48,&piStack_44,"{:02}",5,1,0,puStack_30,uStack_2c);
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar7 = iVar5 + 1;
    if (*(uint *)(param_1 + 0x20) < uVar7) {
      (**(code **)(param_1 + 0x24))((int *)(param_1 + 0x18),uVar7);
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar7 = iVar5 + 1;
    }
    *(uint *)(param_1 + 0x1c) = uVar7;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar5) = 0x3a;
    uVar7 = param_3[1];
    if (uVar7 < 100) {
      bVar1 = (byte)((uVar7 * 0xcd & 0xffff) >> 0xb);
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar6 = iVar5 + 1;
      if (*(uint *)(param_1 + 0x20) < uVar6) {
        (**(code **)(param_1 + 0x24))(param_1 + 0x18,uVar6);
        iVar5 = *(int *)(param_1 + 0x1c);
        uVar6 = iVar5 + 1;
      }
      *(uint *)(param_1 + 0x1c) = uVar6;
      *(byte *)(*(int *)(param_1 + 0x18) + iVar5) = bVar1 | 0x30;
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar6 = iVar5 + 1;
      if (*(uint *)(param_1 + 0x20) < uVar6) {
        (**(code **)(param_1 + 0x24))(param_1 + 0x18,uVar6);
        iVar5 = *(int *)(param_1 + 0x1c);
        uVar6 = iVar5 + 1;
      }
      *(uint *)(param_1 + 0x1c) = uVar6;
      *(byte *)(*(int *)(param_1 + 0x18) + iVar5) = (char)uVar7 + bVar1 * -10 | 0x30;
    }
    else {
      puStack_30 = auStack_40;
      uStack_34 = 0;
      local_38 = 1;
      piStack_44 = (int *)(param_1 + 0x18);
      auStack_40[0] = uVar7;
      FUN_1002479c(auStack_48,&piStack_44,"{:02}",5,1,0,puStack_30,uStack_2c);
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar7 = iVar5 + 1;
    if (*(uint *)(param_1 + 0x20) < uVar7) {
      (**(code **)(param_1 + 0x24))((int *)(param_1 + 0x18),uVar7);
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar7 = iVar5 + 1;
    }
    *(uint *)(param_1 + 0x1c) = uVar7;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar5) = 0x3a;
    uVar7 = *param_3;
    if (uVar7 < 100) {
      bVar1 = (byte)((uVar7 * 0xcd & 0xffff) >> 0xb);
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar6 = iVar5 + 1;
      if (*(uint *)(param_1 + 0x20) < uVar6) {
        (**(code **)(param_1 + 0x24))(param_1 + 0x18,uVar6);
        iVar5 = *(int *)(param_1 + 0x1c);
        uVar6 = iVar5 + 1;
      }
      *(uint *)(param_1 + 0x1c) = uVar6;
      *(byte *)(*(int *)(param_1 + 0x18) + iVar5) = bVar1 | 0x30;
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar6 = iVar5 + 1;
      if (*(uint *)(param_1 + 0x20) < uVar6) {
        (**(code **)(param_1 + 0x24))(param_1 + 0x18,uVar6);
        iVar5 = *(int *)(param_1 + 0x1c);
        uVar6 = iVar5 + 1;
      }
      *(uint *)(param_1 + 0x1c) = uVar6;
      *(byte *)(*(int *)(param_1 + 0x18) + iVar5) = (char)uVar7 + bVar1 * -10 | 0x30;
    }
    else {
      puStack_30 = auStack_40;
      uStack_34 = 0;
      local_38 = 1;
      piStack_44 = (int *)(param_1 + 0x18);
      auStack_40[0] = uVar7;
      FUN_1002479c(auStack_48,&piStack_44,"{:02}",5,1,0,puStack_30,uStack_2c);
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar7 = iVar5 + 1;
    if (*(uint *)(param_1 + 0x20) < uVar7) {
      (**(code **)(param_1 + 0x24))(param_1 + 0x18,uVar7);
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar7 = iVar5 + 1;
    }
    *(uint *)(param_1 + 0x1c) = uVar7;
    *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar5) = 0x2e;
    *(undefined4 *)(param_1 + 0x14) = uVar9;
    *(int *)(param_1 + 0x10) = (int)lVar8;
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  FUN_1001909c(*(int *)(param_1 + 0x18),iVar5 + *(int *)(param_1 + 0x18));
  iVar5 = param_2[4];
  iVar2 = param_2[5];
  iVar3 = __alldiv(iVar5,iVar2,10000000,0);
  iVar5 = __alldiv(iVar5,iVar2,10000,0);
  FUN_100245fe(iVar5 + iVar3 * -1000,param_4,param_1);
  iVar5 = param_4[1];
  uVar7 = iVar5 + 1;
  if ((uint)param_4[2] < uVar7) {
    (*(code *)param_4[3])(param_4,uVar7);
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
  }
  param_4[1] = uVar7;
  *(undefined1 *)(*param_4 + iVar5) = 0x5d;
  iVar5 = param_4[1];
  uVar7 = iVar5 + 1;
  if ((uint)param_4[2] < uVar7) {
    (*(code *)param_4[3])(param_4,uVar7);
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
  }
  param_4[1] = uVar7;
  *(undefined1 *)(*param_4 + iVar5) = 0x20;
  if (param_2[1] != 0) {
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
    if ((uint)param_4[2] < uVar7) {
      (*(code *)param_4[3])(param_4,uVar7);
      iVar5 = param_4[1];
      uVar7 = iVar5 + 1;
    }
    param_4[1] = uVar7;
    *(undefined1 *)(*param_4 + iVar5) = 0x5b;
    FUN_1001909c(*param_2,param_2[1] + *param_2);
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
    if ((uint)param_4[2] < uVar7) {
      (*(code *)param_4[3])(param_4,uVar7);
      iVar5 = param_4[1];
      uVar7 = iVar5 + 1;
    }
    param_4[1] = uVar7;
    *(undefined1 *)(*param_4 + iVar5) = 0x5d;
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
    if ((uint)param_4[2] < uVar7) {
      (*(code *)param_4[3])(param_4,uVar7);
      iVar5 = param_4[1];
      uVar7 = iVar5 + 1;
    }
    param_4[1] = uVar7;
    *(undefined1 *)(*param_4 + iVar5) = 0x20;
  }
  iVar5 = param_4[1];
  uVar7 = iVar5 + 1;
  if ((uint)param_4[2] < uVar7) {
    (*(code *)param_4[3])(param_4,uVar7);
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
  }
  param_4[1] = uVar7;
  *(undefined1 *)(*param_4 + iVar5) = 0x5b;
  param_2[7] = param_4[1];
  FUN_1001909c((&PTR_s_trace_1028f2a4)[param_2[2] * 2],
               (&PTR_s_trace_1028f2a4)[param_2[2] * 2] + *(int *)(&DAT_1028f2a8 + param_2[2] * 8));
  iVar5 = param_4[1];
  param_2[8] = iVar5;
  uVar7 = iVar5 + 1;
  if ((uint)param_4[2] < uVar7) {
    (*(code *)param_4[3])(param_4,uVar7);
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
  }
  param_4[1] = uVar7;
  *(undefined1 *)(*param_4 + iVar5) = 0x5d;
  iVar5 = param_4[1];
  uVar7 = iVar5 + 1;
  if ((uint)param_4[2] < uVar7) {
    (*(code *)param_4[3])(param_4,uVar7);
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
  }
  param_4[1] = uVar7;
  *(undefined1 *)(*param_4 + iVar5) = 0x20;
  if (0 < param_2[10]) {
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
    if ((uint)param_4[2] < uVar7) {
      (*(code *)param_4[3])(param_4,uVar7);
      iVar5 = param_4[1];
      uVar7 = iVar5 + 1;
    }
    param_4[1] = uVar7;
    *(undefined1 *)(*param_4 + iVar5) = 0x5b;
    _Str = (char *)FUN_10024702(param_2[9]);
    sVar4 = _strlen(_Str);
    FUN_1001909c(_Str,_Str + sVar4);
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
    if ((uint)param_4[2] < uVar7) {
      (*(code *)param_4[3])(param_4,uVar7);
      iVar5 = param_4[1];
      uVar7 = iVar5 + 1;
    }
    param_4[1] = uVar7;
    *(undefined1 *)(*param_4 + iVar5) = 0x3a;
    iVar5 = param_2[10];
    iVar2 = -iVar5;
    if (-iVar5 < 0) {
      iVar2 = iVar5;
    }
    local_20 = FUN_1002472e(&local_38,iVar2,0x15);
    if (iVar5 < 0) {
      *(undefined1 *)(local_20 + -1) = 0x2d;
      local_20 = local_20 + -1;
    }
    FUN_1001909c(local_20,local_23);
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
    if ((uint)param_4[2] < uVar7) {
      (*(code *)param_4[3])(param_4,uVar7);
      iVar5 = param_4[1];
      uVar7 = iVar5 + 1;
    }
    param_4[1] = uVar7;
    *(undefined1 *)(*param_4 + iVar5) = 0x5d;
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
    if ((uint)param_4[2] < uVar7) {
      (*(code *)param_4[3])(param_4,uVar7);
      iVar5 = param_4[1];
      uVar7 = iVar5 + 1;
    }
    param_4[1] = uVar7;
    *(undefined1 *)(*param_4 + iVar5) = 0x20;
  }
  iVar5 = FUN_10024178();
  if (*(int *)(iVar5 + 4) != 0) {
    iVar2 = param_4[1];
    uVar7 = iVar2 + 1;
    if ((uint)param_4[2] < uVar7) {
      (*(code *)param_4[3])(param_4,uVar7);
      iVar2 = param_4[1];
      uVar7 = iVar2 + 1;
    }
    param_4[1] = uVar7;
    *(undefined1 *)(*param_4 + iVar2) = 0x5b;
    FUN_1002425a(iVar5,param_4);
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
    if ((uint)param_4[2] < uVar7) {
      (*(code *)param_4[3])(param_4,uVar7);
      iVar5 = param_4[1];
      uVar7 = iVar5 + 1;
    }
    param_4[1] = uVar7;
    *(undefined1 *)(*param_4 + iVar5) = 0x5d;
    iVar5 = param_4[1];
    uVar7 = iVar5 + 1;
    if ((uint)param_4[2] < uVar7) {
      (*(code *)param_4[3])(param_4,uVar7);
      iVar5 = param_4[1];
      uVar7 = iVar5 + 1;
    }
    param_4[1] = uVar7;
    *(undefined1 *)(*param_4 + iVar5) = 0x20;
  }
  FUN_1001909c(param_2[0xc],param_2[0xd] + param_2[0xc]);
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

