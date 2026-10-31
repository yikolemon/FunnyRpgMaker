/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fdc57 */

void FUN_100fdc57(int param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,
                 float param_6,float *param_7)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_60;
  local_54 = DAT_1039d74c;
  if (param_6 == 0.0) {
    param_6 = (float)FUN_100fd57d(param_5,0);
  }
  if (param_7 == (float *)0x0) {
    FUN_100fdb2e(&local_1c,param_5,param_6,0,0);
  }
  else {
    local_1c = *param_7;
    local_18 = param_7[1];
  }
  if (local_1c <= *param_3 - *param_2) {
    local_30 = 0;
    FUN_100fd943(param_1,param_2,param_3,param_5,param_6,&local_1c,&local_30,0);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2c);
    iVar3 = *(int *)(iVar2 + 0x10);
    local_5c = *(undefined4 *)(iVar2 + 0x14);
    local_60 = *(float *)(iVar2 + 0x18);
    local_20 = 0;
    FUN_10190228(local_5c,0xbf800000);
    local_58 = iVar3;
    fVar5 = (float10)FUN_10192fb8(*(undefined2 *)(iVar3 + 0x24));
    local_4c = (float)fVar5;
    local_60 = local_60 * local_4c;
    fVar5 = (float10)FUN_100fdbca(*param_3,param_4);
    local_50 = (float)fVar5;
    fVar5 = (float10)FUN_100fdbca((local_50 - local_60) - *param_2,0x3f800000);
    local_60 = param_6;
    FUN_101937ae(&local_30,local_5c,(float)fVar5,0,param_5,param_6,&local_20);
    local_48 = (float)local_30;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_30 = 0;
    FUN_100fd943(param_1,param_2,param_3,param_5,local_20,&local_1c,&local_30,0);
    local_30 = *(undefined8 *)param_2;
    uStack_28 = *(undefined8 *)param_3;
    local_38 = CONCAT44((float)(int)param_2[1],(float)(int)(local_48 + (float)local_30));
    uVar1 = *(undefined2 *)(local_58 + 0x24);
    uVar4 = FUN_100fcb39(0,0x3f800000);
    param_6 = local_60;
    FUN_1019381a(param_1,local_5c,&local_38,uVar4,uVar1,&local_30);
  }
  if (*(char *)(local_54 + 0x2748) == '\x01') {
    FUN_100fd6a8(param_2,param_5,param_6);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_60)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

