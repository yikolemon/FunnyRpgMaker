/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10195843 */

undefined4 __fastcall FUN_10195843(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  float local_58;
  undefined4 local_54;
  uint local_50;
  int local_4c;
  ushort *local_48;
  undefined4 local_44;
  uint local_40;
  float local_3c;
  undefined8 local_38;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_58;
  iVar2 = *(int *)(param_2 + 0x48);
  iVar3 = FUN_10192f56(0x2e);
  if (iVar3 == 0) {
    iVar3 = FUN_10192f56(0xff0e);
    if (iVar3 == 0) {
      uVar6 = 0;
      goto LAB_10195a05;
    }
  }
  local_54 = *(undefined4 *)(iVar3 + 0x28);
  local_50 = param_2;
  iVar4 = FUN_10190112(param_1,local_54);
  local_58 = (*(float *)(iVar3 + 0x10) - *(float *)(iVar3 + 8)) + DAT_1028b430;
  iVar7 = 0;
  local_4c = FUN_1018fdef(param_1,(uint)*(ushort *)(iVar4 + 4) * 3 + 2,*(undefined2 *)(iVar4 + 6),0)
  ;
  local_48 = (ushort *)FUN_10190112(param_1,local_4c);
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uVar1 = *(ushort *)(iVar2 + 0x24);
  local_58 = local_58 * DAT_102b6c58;
  fVar8 = (float10)FUN_100fdbca(*(undefined4 *)(iVar3 + 4),
                                *(float *)(iVar3 + 8) + local_58 + DAT_102b8a50);
  local_3c = (float)fVar8;
  local_38 = *(undefined8 *)(iVar3 + 8);
  local_30 = (float)local_38 + local_58 + DAT_102b8a50;
  local_2c = *(undefined4 *)(iVar3 + 0x14);
  local_40 = (uint)uVar1 << 6 | 2;
  local_18 = local_4c;
  local_44 = FUN_1019032a(param_1,local_50,0,&local_40);
  puVar5 = (ushort *)FUN_10190112(param_1,local_54);
  local_54 = *(undefined4 *)(param_1 + 0x30);
  local_4c = param_1;
  do {
    local_50 = (uint)local_48[1];
    local_58 = (float)(uint)*puVar5;
    FUN_1018edc0(local_54,local_58,puVar5[1],local_54,(puVar5[2] + 1) * iVar7 + (uint)*local_48,
                 local_50,(uint)puVar5[2],puVar5[3]);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 3);
  FUN_1018ee1a(local_4c,local_54,*local_48,local_48[1],local_48[2],local_48[3]);
  uVar6 = local_44;
LAB_10195a05:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_58)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

