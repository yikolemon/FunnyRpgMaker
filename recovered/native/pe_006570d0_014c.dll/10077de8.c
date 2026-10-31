/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10077de8 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_10077de8(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined8 local_8124;
  undefined4 local_811c;
  undefined1 local_8118 [32752];
  byte abStack_128 [12];
  byte abStack_11c [4];
  undefined4 local_118;
  byte abStack_10c [164];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58 [4];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_8124;
  local_18 = &LAB_100c2ca0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_14 = 1;
  _memset(&local_8124,0,0x800c);
  if (param_1 + 2 != param_2) {
    FUN_1007798c(*param_2,param_2[1] - *param_2);
  }
  FUN_10078092(param_1,param_3);
  local_8124 = *(undefined8 *)(param_1 + 6);
  local_811c = 0;
  FUN_1026ff3c(param_1[6]);
  iVar3 = 0;
  do {
    local_24 = iVar3;
    FUN_10078591(&local_8124,local_8118 + iVar3 * 0x400);
    iVar3 = local_24 + 1;
  } while (iVar3 != 0x20);
  FUN_10078229(param_1,&local_8124,local_58,local_48);
  iVar3 = 0;
  do {
    (&local_118)[iVar3] = local_58[iVar3];
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  uVar4 = 4;
  do {
    bVar8 = abStack_11c[uVar4 * 4];
    bVar6 = abStack_11c[uVar4 * 4 + 1];
    bVar7 = abStack_11c[uVar4 * 4 + 2];
    bVar5 = abStack_11c[uVar4 * 4 + 3];
    if ((uVar4 & 3) == 0) {
      uVar9 = (uint)bVar8;
      bVar8 = (&UNK_1029540c)[uVar4 >> 2] ^ (&DAT_1029530c)[bVar6];
      bVar6 = (byte)(&DAT_1029530c)[CONCAT11(bVar8,bVar7) & 0xff] >> 4;
      bVar7 = ~(&DAT_1029530c)[CONCAT11((&DAT_1029530c)[CONCAT11(bVar8,bVar7) & 0xff],bVar5) & 0xff]
      ;
      bVar5 = (&DAT_1029530c)[uVar9] << 1 | (char)(&DAT_1029530c)[uVar9] < '\0';
    }
    *(byte *)(&local_118 + uVar4) = bVar8 ^ abStack_128[uVar4 * 4];
    *(byte *)((int)&local_118 + uVar4 * 4 + 1) = bVar6 ^ abStack_128[uVar4 * 4 + 1];
    *(byte *)((int)&local_118 + uVar4 * 4 + 2) = bVar7 ^ abStack_128[uVar4 * 4 + 2];
    *(byte *)((int)&local_118 + uVar4 * 4 + 3) = bVar5 ^ abStack_128[uVar4 * 4 + 3];
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x2c);
  local_14 = 1;
  thunk_FUN_1000b6c9(local_48,&local_38,&local_68);
  if (param_1[5] != 0) {
    local_24 = param_1[2];
    iVar3 = 0x10;
    local_28 = 0;
    do {
      if (iVar3 == 0x10) {
        local_38 = local_68;
        uStack_34 = uStack_64;
        uStack_30 = uStack_60;
        uStack_2c = uStack_5c;
        local_14 = 1;
        FUN_100790ec(&local_38,&local_118);
        iVar3 = 0;
        do {
          cVar2 = *(char *)((int)local_58 + iVar3 + -1);
          if (cVar2 != -1) {
            *(char *)((int)local_58 + iVar3 + -1) = cVar2 + '\x01';
            break;
          }
          *(undefined1 *)((int)local_58 + iVar3 + -1) = 0;
          iVar3 = iVar3 + -1;
        } while (iVar3 != -0x10);
        iVar3 = 0;
      }
      pbVar1 = (byte *)(local_24 + 0x14 + local_28);
      *pbVar1 = *pbVar1 ^ *(byte *)((int)&local_38 + iVar3);
      local_28 = local_28 + 1;
      iVar3 = iVar3 + 1;
    } while (local_28 < (uint)param_1[5]);
  }
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

