/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115ba7 */

undefined4 FUN_10115ba7(uint param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  undefined8 local_3c;
  float local_34;
  float local_30;
  uint local_14;
  
  iVar4 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  if ((*(char *)(DAT_1039d74c + 0x2251) == '\0') && (*(char *)(DAT_1039d74c + 0x2252) != '\x01')) {
    pcVar6 = "##Tooltip_%02d";
    if ((param_1 & 2) == 0) goto LAB_10115ccb;
  }
  else {
    if ((*(byte *)(DAT_1039d74c + 0x1ed0) & 1) == 0) {
      fVar1 = *(float *)(DAT_1039d74c + 0xdf0);
      if (*(int *)(DAT_1039d74c + 0xfc) == 1) {
        local_34 = fVar1 * 0.0;
        local_3c = DAT_102b8df0;
        fVar3 = DAT_102b70b0;
      }
      else {
        local_34 = fVar1 * DAT_102b8c90;
        local_3c = 0;
        fVar3 = DAT_102b710c;
      }
      local_30 = *(float *)(DAT_1039d74c + 0xe8) + fVar3 * fVar1;
      local_34 = local_34 + *(float *)(DAT_1039d74c + 0xe4);
      FUN_10111d56(&local_34,0,&local_3c);
    }
    FUN_10111e62(*(float *)(iVar4 + 0xe4c) * DAT_102b71d8);
    pcVar6 = "##Tooltip_DragDrop_%02d";
  }
  iVar2 = *(int *)(iVar4 + 0x25ec);
  if (((iVar2 != 0) && (*(char *)(iVar2 + 0xf9) == '\x01')) &&
     (cVar5 = FUN_10111b3c(iVar2), cVar5 == '\0')) {
    FUN_10111d2b(iVar2);
    *(short *)(iVar4 + 0x25ea) = *(short *)(iVar4 + 0x25ea) + 1;
  }
LAB_10115ccb:
  FUN_100fa4b1(&local_34,0x20,pcVar6,(int)*(short *)(iVar4 + 0x25ea));
  FUN_10107d2b(&local_34,0,param_2 | 0x20b0347);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return CONCAT31((int3)((local_14 ^ (uint)&local_3c) >> 8),1);
}

