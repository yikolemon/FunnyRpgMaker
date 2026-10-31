/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041784a */

undefined4 * __cdecl FUN_0041784a(undefined4 *param_1,undefined4 *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [3];
  byte local_55;
  char *local_54;
  byte **local_50;
  undefined4 local_4c;
  undefined2 local_46;
  undefined4 *local_44;
  byte local_40 [4];
  byte *local_3c [4];
  char **local_2c;
  int *local_28;
  byte **local_24;
  byte ***local_20;
  undefined1 auStack_15 [5];
  
  auStack_15._1_4_ = DAT_0050e8c0 ^ (uint)auStack_58;
  iVar5 = 0;
  do {
    iVar4 = iVar5;
    auStack_15[iVar4] = (&DAT_004a9164)[param_3 & 0xf];
    param_3 = param_3 >> 4;
    iVar5 = iVar4 + -1;
  } while (param_3 != 0);
  uVar3 = -iVar5;
  if (iVar5 == -8 || (int)uVar3 < 8) {
    thunk_FUN_0040c6a9((uint *)(auStack_15 + iVar4),uVar3,(uint *)local_3c);
    local_50 = (byte **)((int)local_3c - iVar5);
    local_4c = 0;
  }
  else {
    local_50 = local_3c + 2;
    local_4c = 0x84;
  }
  local_54 = (char *)((int)local_50 + (2 - (int)local_3c));
  local_40[0] = 0x30;
  local_40[1] = 0;
  local_40[2] = 0x78;
  local_40[3] = 0;
  if (((char)param_4[2] == 'P') &&
     (local_40[0] = 0x30, local_40[1] = 0, local_40[2] = 0x58, local_40[3] = 0, local_3c != local_50
     )) {
    uVar1 = 8;
    if ((int)uVar3 < 8) {
      uVar1 = uVar3;
    }
    uVar3 = 0;
    do {
      if ((byte)(*(char *)((int)local_3c + uVar3) + 0x9fU) < 0x1a) {
        *(char *)((int)local_3c + uVar3) = *(char *)((int)local_3c + uVar3) + -0x20;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  local_55 = *(char *)((int)param_4 + 9) == '\0' & *(byte *)((int)param_4 + 0xd);
  local_3c[3] = &local_55;
  local_3c[2] = local_40;
  local_2c = &local_54;
  local_28 = param_4;
  local_20 = &local_50;
  local_24 = local_3c;
  if (local_55 == 1) {
    uVar6 = FUN_0040bb79((undefined2 *)local_3c[2],(undefined2 *)local_3c,param_2);
    puVar2 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
    if ((local_55 == 1) &&
       (iVar5 = *param_4 - (int)local_54, iVar5 != 0 && (int)local_54 <= *param_4)) {
      local_46 = 0x30;
      FUN_00412954(&local_44,puVar2,iVar5,&local_46);
      puVar2 = local_44;
    }
    FUN_0040c483(param_1,(char *)local_3c,(char *)local_50,puVar2);
  }
  else {
    FUN_004179cc(param_1,param_2,(int)local_54,param_4,'\x02',local_3c + 2);
  }
  if (DAT_0050e8c0 == (auStack_15._1_4_ ^ (uint)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(auStack_15._1_4_ ^ (uint)auStack_58);
}

