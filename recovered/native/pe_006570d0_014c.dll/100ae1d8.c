/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ae1d8 */

undefined4 __thiscall FUN_100ae1d8(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int *unaff_FS_OFFSET;
  undefined1 local_50 [24];
  uint *local_38;
  int local_34;
  uint *local_30;
  uint local_2c;
  uint local_28;
  uint *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_50;
  local_18 = &LAB_100c4670;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  uVar1 = param_1[4];
  local_38 = param_1;
  if (7 < param_1[5]) {
    local_38 = (uint *)*param_1;
  }
  iVar4 = uVar1 * 2;
  local_24 = (uint *)((int)local_38 + uVar1 * 2);
  puVar5 = local_38;
  if (1 < (int)uVar1) {
    uVar3 = *local_38;
    if ((uVar3 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      puVar6 = local_38 + 1;
      goto LAB_100ae31a;
    }
    if (((short)uVar3 == 0x5c) || ((uVar3 & 0xffff) == 0x2f)) {
      local_28 = uVar3 >> 0x10;
      sVar2 = (short)(uVar3 >> 0x10);
      if (uVar1 < 4) {
        if (uVar1 != 2) goto LAB_100ae38b;
      }
      else if (((*(short *)((int)local_38 + 6) == 0x5c) || (*(short *)((int)local_38 + 6) == 0x2f))
              && ((uVar1 == 4 || (((short)local_38[2] != 0x2f && ((short)local_38[2] != 0x5c)))))) {
        puVar6 = (uint *)((int)local_38 + 6);
        if ((sVar2 == 0x2f) || (local_28 == 0x5c)) {
          uVar3 = (uint)(ushort)local_38[1];
          if ((uVar3 == 0x2e) || (uVar3 == 0x3f)) goto LAB_100ae31a;
          local_2c = uVar3;
          if (local_28 != 0x3f) goto LAB_100ae38b;
        }
        else {
          if (local_28 != 0x3f) goto joined_r0x100ae225;
          local_2c = (uint)(ushort)local_38[1];
        }
        if ((short)local_2c == 0x3f) goto LAB_100ae31a;
      }
      else {
LAB_100ae38b:
        if ((((sVar2 == 0x5c) || (local_28 == 0x2f)) && ((short)local_38[1] != 0x2f)) &&
           ((short)local_38[1] != 0x5c)) {
          puVar5 = (uint *)((int)local_38 + 6);
          puVar6 = puVar5;
          if (uVar1 != 3) {
            iVar4 = iVar4 + -6;
            do {
              puVar6 = puVar5;
              if (((short)*puVar5 == 0x2f) || ((short)*puVar5 == 0x5c)) break;
              puVar5 = (uint *)((int)puVar5 + 2);
              iVar4 = iVar4 + -2;
              puVar6 = local_24;
            } while (iVar4 != 0);
          }
          goto LAB_100ae31a;
        }
      }
    }
  }
joined_r0x100ae225:
  for (; (iVar4 != 0 && (((short)*puVar5 == 0x5c || ((short)*puVar5 == 0x2f))));
      puVar5 = (uint *)((int)puVar5 + 2)) {
    iVar4 = iVar4 + -2;
  }
  puVar6 = puVar5;
  if (puVar5 != local_24 && local_38 == puVar5) {
    do {
      puVar6 = puVar5;
      if (((short)*puVar5 == 0x2f) || ((short)*puVar5 == 0x5c)) break;
      puVar5 = (uint *)((int)puVar5 + 2);
      puVar6 = local_24;
    } while (puVar5 != local_24);
  }
LAB_100ae31a:
  local_34 = (int)puVar6 - (int)local_38 >> 1;
  local_14 = 0xffffffff;
  FUN_10002056(&local_38,0);
  local_14 = 0;
  local_30 = param_1;
  if (7 < param_1[5]) {
    local_30 = (uint *)*param_1;
  }
  FUN_100aeb68(&local_30,local_50,param_1);
  local_14 = 0xffffffff;
  FUN_10001f04();
  *unaff_FS_OFFSET = local_1c;
  return param_2;
}

