/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003fec4 */

void FUN_1003fec4(undefined4 param_1,uint *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *_Str;
  size_t sVar4;
  uint uVar5;
  undefined1 local_38 [4];
  int *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint *puStack_28;
  undefined4 uStack_24;
  uint local_20 [2];
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar2 = FUN_1003b6df();
  if (uVar2 < 100) {
    bVar1 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    iVar3 = param_3[1];
    uVar5 = iVar3 + 1;
    if ((uint)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3,uVar5);
      iVar3 = param_3[1];
      uVar5 = iVar3 + 1;
    }
    param_3[1] = uVar5;
    *(byte *)(*param_3 + iVar3) = bVar1 | 0x30;
    iVar3 = param_3[1];
    uVar5 = iVar3 + 1;
    if ((uint)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3,uVar5);
      iVar3 = param_3[1];
      uVar5 = iVar3 + 1;
    }
    param_3[1] = uVar5;
    *(byte *)(*param_3 + iVar3) = (char)uVar2 + bVar1 * -10 | 0x30;
  }
  else {
    local_34 = param_3;
    puStack_28 = local_20;
    uStack_2c = 0;
    local_30 = 1;
    local_20[0] = uVar2;
    FUN_1002479c(local_38,&local_34,"{:02}",5,1,0,puStack_28,uStack_24);
  }
  iVar3 = param_3[1];
  uVar2 = iVar3 + 1;
  if ((uint)param_3[2] < uVar2) {
    (*(code *)param_3[3])(param_3,uVar2);
    iVar3 = param_3[1];
    uVar2 = iVar3 + 1;
  }
  param_3[1] = uVar2;
  *(undefined1 *)(*param_3 + iVar3) = 0x3a;
  uVar2 = param_2[1];
  if (uVar2 < 100) {
    bVar1 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    iVar3 = param_3[1];
    uVar5 = iVar3 + 1;
    if ((uint)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3,uVar5);
      iVar3 = param_3[1];
      uVar5 = iVar3 + 1;
    }
    param_3[1] = uVar5;
    *(byte *)(*param_3 + iVar3) = bVar1 | 0x30;
    iVar3 = param_3[1];
    uVar5 = iVar3 + 1;
    if ((uint)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3,uVar5);
      iVar3 = param_3[1];
      uVar5 = iVar3 + 1;
    }
    param_3[1] = uVar5;
    *(byte *)(*param_3 + iVar3) = (char)uVar2 + bVar1 * -10 | 0x30;
  }
  else {
    local_34 = param_3;
    puStack_28 = local_20;
    uStack_2c = 0;
    local_30 = 1;
    local_20[0] = uVar2;
    FUN_1002479c(local_38,&local_34,"{:02}",5,1,0,puStack_28,uStack_24);
  }
  iVar3 = param_3[1];
  uVar2 = iVar3 + 1;
  if ((uint)param_3[2] < uVar2) {
    (*(code *)param_3[3])(param_3,uVar2);
    iVar3 = param_3[1];
    uVar2 = iVar3 + 1;
  }
  param_3[1] = uVar2;
  *(undefined1 *)(*param_3 + iVar3) = 0x3a;
  uVar2 = *param_2;
  if (uVar2 < 100) {
    bVar1 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    iVar3 = param_3[1];
    uVar5 = iVar3 + 1;
    if ((uint)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3,uVar5);
      iVar3 = param_3[1];
      uVar5 = iVar3 + 1;
    }
    param_3[1] = uVar5;
    *(byte *)(*param_3 + iVar3) = bVar1 | 0x30;
    iVar3 = param_3[1];
    uVar5 = iVar3 + 1;
    if ((uint)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3,uVar5);
      iVar3 = param_3[1];
      uVar5 = iVar3 + 1;
    }
    param_3[1] = uVar5;
    *(byte *)(*param_3 + iVar3) = (char)uVar2 + bVar1 * -10 | 0x30;
  }
  else {
    local_34 = param_3;
    puStack_28 = local_20;
    uStack_2c = 0;
    local_30 = 1;
    local_20[0] = uVar2;
    FUN_1002479c(local_38,&local_34,"{:02}",5,1,0,puStack_28,uStack_24);
  }
  iVar3 = param_3[1];
  uVar2 = iVar3 + 1;
  if ((uint)param_3[2] < uVar2) {
    (*(code *)param_3[3])(param_3,uVar2);
    iVar3 = param_3[1];
    uVar2 = iVar3 + 1;
  }
  param_3[1] = uVar2;
  *(undefined1 *)(*param_3 + iVar3) = 0x20;
  _Str = (char *)FUN_1003be58();
  sVar4 = _strlen(_Str);
  FUN_1001909c(_Str,_Str + sVar4);
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

