/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10124192 */

undefined4 FUN_10124192(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  undefined4 local_5c;
  int local_58;
  float local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_5c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar2 + 0x14cc);
  uVar5 = 0;
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    iVar4 = FUN_101021d4(param_1,0);
    FUN_100fdb2e(&local_1c,param_1,0,1,0xbf800000);
    local_24 = *(float *)(iVar2 + 0xd0c) + *(float *)(iVar2 + 0xd0c) + local_1c;
    local_20 = local_18;
    fVar8 = (float)*(undefined8 *)(iVar1 + 0x144) + 0.0;
    fVar9 = *(float *)(iVar1 + 0x17c) + (float)((ulonglong)*(undefined8 *)(iVar1 + 0x144) >> 0x20);
    local_34 = CONCAT44(fVar9,fVar8);
    uStack_2c = CONCAT44(local_18 + fVar9,local_24 + fVar8);
    FUN_1010c810(&local_24,0);
    local_5c = 0;
    cVar3 = FUN_1010c9d8(&local_34,iVar4,0,0);
    uVar5 = local_5c;
    if (cVar3 != '\0') {
      uVar5 = FUN_10102cf2(&local_34,iVar4,*(undefined4 *)(iVar2 + 0x1e40));
      local_58 = iVar4;
      if ((char)uVar5 == '\0') {
        uVar5 = 0x16;
        local_5c = 0;
      }
      else {
        local_5c = CONCAT31((int3)((uint)uVar5 >> 8),1);
        uVar5 = 0x17;
        cVar3 = FUN_1011453c(*(undefined4 *)(iVar2 + 0x27e0));
        if ((cVar3 == '\0') && (uVar6 = FUN_1010377a(0,0), (char)uVar6 == '\0')) {
          local_5c = CONCAT31((int3)((uint)uVar6 >> 8),*(int *)(iVar2 + 0x2058) == iVar4);
        }
      }
      FUN_1012442d(0,param_2);
      puVar7 = (undefined4 *)FUN_100fcbfd(uVar5);
      local_44 = *puVar7;
      uStack_40 = puVar7[1];
      uStack_3c = puVar7[2];
      uStack_38 = puVar7[3];
      local_54 = 0.0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      FUN_100fadb2(local_44,uStack_40,uStack_3c,&local_54,&uStack_50,&uStack_4c);
      FUN_100faedd(local_54 + DAT_102b8c70,uStack_50,uStack_4c,&local_44,&uStack_40,&uStack_3c);
      FUN_100fe25e(&local_34,local_58,0);
      local_58 = *(undefined4 *)(iVar2 + 0xd14);
      uVar5 = FUN_100fcba2(&local_44);
      FUN_100fdee9((undefined4)local_34,local_34._4_4_,(undefined4)uStack_2c,uStack_2c._4_4_,uVar5,1
                   ,local_58);
      FUN_100fdbf2(&local_34,&uStack_2c,param_1,0,&local_1c,iVar2 + 0xdb0,&local_34);
      uVar5 = local_5c;
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_5c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar5;
}

