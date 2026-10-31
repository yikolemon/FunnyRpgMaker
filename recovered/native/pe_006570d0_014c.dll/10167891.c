/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10167891 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte __fastcall FUN_10167891(undefined4 param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float10 local_30;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_4c;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  local_3c = param_2;
  FUN_100fdb2e(&local_1c,param_1,0,1,0xbf800000);
  fVar7 = (float10)FUN_1014c7f4(0,local_1c,0,(float)(int)(*(float *)(iVar3 + 0x1228) * DAT_102b8e98)
                               );
  local_4c = (float)fVar7;
  local_34 = local_4c;
  FUN_1010c3e4(&local_24);
  local_30 = (float10)FUN_100fdbca(0,local_24 - local_4c);
  local_40 = *(float *)(iVar1 + 0x144);
  local_44 = *(float *)(iVar1 + 0x148) + *(float *)(iVar1 + 0x17c);
  iVar5 = FUN_10113594(param_1);
  iVar2 = *(int *)(iVar3 + 0x1528);
  local_48 = (float)local_30;
  bVar4 = 1;
  if (iVar2 == iVar5) {
    bVar4 = *(byte *)(iVar3 + 0x1538) ^ 1;
  }
  local_30 = (float10)CONCAT91(local_30._1_9_,bVar4);
  local_38 = local_48;
  FUN_10111871(param_3 ^ 1);
  local_24 = local_4c;
  local_20 = local_18;
  bVar4 = FUN_10133727(param_1,0,(uint)(iVar2 == iVar5) << 5 | 0x1800000,&local_24);
  if (((char)local_3c != '\0') && ((*(uint *)(iVar3 + 0x1e88) & 0x100) != 0)) {
    local_4c = *(float *)(iVar3 + 0x1228) * _DAT_102b964c;
    uVar6 = FUN_100fcb39(0,0x3f800000);
    FUN_10193ceb(*(undefined4 *)(iVar1 + 0x2e8),
                 local_40 +
                 *(float *)(iVar3 + 0x1228) * DAT_102b8e90 +
                 local_48 + (float)*(ushort *)(iVar1 + 0x1c0),
                 local_44 + DAT_102b9650 * *(float *)(iVar3 + 0x1228) * DAT_102b70e0,uVar6,local_4c)
    ;
  }
  FUN_10111961();
  if (DAT_10388d00 == (local_14 ^ (uint)&local_4c)) {
    return bVar4 & local_30._0_1_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

