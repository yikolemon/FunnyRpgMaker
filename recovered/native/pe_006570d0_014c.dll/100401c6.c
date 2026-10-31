/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100401c6 */

void FUN_100401c6(undefined4 param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_38 [4];
  int *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint *puStack_28;
  undefined4 uStack_24;
  uint local_20 [2];
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar3 < 100) {
    bVar1 = (byte)((uVar3 * 0xcd & 0xffff) >> 0xb);
    iVar2 = param_3[1];
    uVar4 = iVar2 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar2 = param_3[1];
      uVar4 = iVar2 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar2) = bVar1 | 0x30;
    iVar2 = param_3[1];
    uVar4 = iVar2 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar2 = param_3[1];
      uVar4 = iVar2 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar2) = (char)uVar3 + bVar1 * -10 | 0x30;
  }
  else {
    local_34 = param_3;
    puStack_28 = local_20;
    uStack_2c = 0;
    local_30 = 1;
    local_20[0] = uVar3;
    FUN_1002479c(local_38,&local_34,"{:02}",5,1,0,puStack_28);
  }
  iVar2 = param_3[1];
  uVar3 = iVar2 + 1;
  if ((uint)param_3[2] < uVar3) {
    (*(code *)param_3[3])(param_3,uVar3);
    iVar2 = param_3[1];
    uVar3 = iVar2 + 1;
  }
  param_3[1] = uVar3;
  *(undefined1 *)(*param_3 + iVar2) = 0x3a;
  uVar3 = *(uint *)(param_2 + 4);
  if (uVar3 < 100) {
    bVar1 = (byte)((uVar3 * 0xcd & 0xffff) >> 0xb);
    iVar2 = param_3[1];
    uVar4 = iVar2 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar2 = param_3[1];
      uVar4 = iVar2 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar2) = bVar1 | 0x30;
    iVar2 = param_3[1];
    uVar4 = iVar2 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar2 = param_3[1];
      uVar4 = iVar2 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar2) = (char)uVar3 + bVar1 * -10 | 0x30;
  }
  else {
    local_34 = param_3;
    puStack_28 = local_20;
    uStack_2c = 0;
    local_30 = 1;
    local_20[0] = uVar3;
    FUN_1002479c(local_38,&local_34,"{:02}",5,1,0,puStack_28,uStack_24);
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

