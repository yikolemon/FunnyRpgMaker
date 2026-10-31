/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014cc8b */

undefined4
FUN_1014cc8b(undefined4 param_1,undefined4 *param_2,uint param_3,float param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_40 [3];
  byte local_3d;
  float local_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined8 local_24;
  float local_1c [2];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_40;
  iVar1 = FUN_1010cbda(param_1);
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)FUN_1010ad36();
  }
  if ((iVar1 == 0) || (*(short *)(iVar1 + 0x108) == 0)) {
    local_3c = (float)*(undefined8 *)(param_2 + 0x44) + (float)*(undefined8 *)(param_2 + 2);
    fStack_38 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x44) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
    uStack_34 = 0;
    uStack_30 = 0;
    FUN_10126046(local_1c,param_2 + 0x44,param_2 + 0x46);
    fVar5 = local_1c[0] + local_3c;
    fVar6 = local_1c[1] + fStack_38;
    uVar2 = param_3 & 0xfffffffe;
    local_3d = uVar2 == 2;
    local_1c[1] = fStack_38;
    local_1c[0] = local_3c;
    if ((param_3 | 2) == 3) {
      fVar7 = fVar5;
      if (uVar2 == 2) {
        fVar7 = fVar6;
      }
      local_1c[uVar2 == 2] = fVar7 - param_4;
    }
    local_24 = CONCAT44(fVar6 - fStack_38,fVar5 - local_3c);
    *(float *)((int)&local_24 + (uint)(uVar2 == 2) * 4) = param_4;
    local_2c = 0;
    FUN_10111d56(local_1c,0,&local_2c);
    FUN_10107cf6(&local_24,0);
    puVar3 = param_2 + 0x44;
    if (((param_3 & 0xfffffffd) == 0) || (puVar3 = param_2 + 0x46, (param_3 | 2) == 3)) {
      puVar3[local_3d] = param_4 + (float)puVar3[local_3d];
    }
  }
  FUN_10111e7d(*param_2);
  FUN_100fd0a3(3,0);
  local_1c[0] = 0.0;
  local_1c[1] = 0.0;
  FUN_100fd3bc(5,local_1c);
  uVar4 = FUN_10107d2b(param_1,0,param_5 | 0x80007);
  FUN_100fd4c4(2);
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar4;
}

