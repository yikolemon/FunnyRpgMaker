/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011a92b */

undefined8 FUN_18011a92b(ulonglong param_1,uint param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  char *pcVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  float local_48;
  float local_44;
  ulonglong local_28;
  
  lVar4 = DAT_180419160;
  local_28 = DAT_180402640 ^ (ulonglong)auStack_78;
  if ((*(char *)(DAT_180419160 + 0x2429) == '\0') && (*(char *)(DAT_180419160 + 0x242a) != '\x01'))
  {
    pcVar6 = "##Tooltip_%02d";
    if ((param_1 & 2) == 0) goto LAB_18011aa53;
  }
  else {
    if ((*(byte *)(DAT_180419160 + 0x2030) & 1) == 0) {
      fVar1 = *(float *)(DAT_180419160 + 0xed8);
      if (*(int *)(DAT_180419160 + 0x130) == 1) {
        local_48 = fVar1 * 0.0;
        local_50 = DAT_1802de890;
        fVar3 = DAT_1802dc290;
      }
      else {
        local_48 = fVar1 * DAT_1802de7b0;
        local_50 = 0;
        fVar3 = DAT_1802dc2dc;
      }
      local_44 = *(float *)(DAT_180419160 + 0x11c) + fVar3 * fVar1;
      local_48 = local_48 + *(float *)(DAT_180419160 + 0x118);
      FUN_180116a8b(&local_48,0);
    }
    FUN_180116b50(*(float *)(lVar4 + 0xf34) * DAT_1802dc418);
    pcVar6 = "##Tooltip_DragDrop_%02d";
  }
  lVar2 = *(longlong *)(lVar4 + 0x2868);
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x109) == '\x01')) &&
     (cVar5 = FUN_180116863(lVar2), cVar5 == '\0')) {
    FUN_180116a61(lVar2);
    *(short *)(lVar4 + 0x2866) = *(short *)(lVar4 + 0x2866) + 1;
  }
LAB_18011aa53:
  FUN_1800fead5(&local_48,0x20,pcVar6,(int)*(short *)(lVar4 + 0x2866));
  FUN_18010ca66(&local_48,0,param_2 | 0x20b0347);
  if (DAT_180402640 != (local_28 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_28 ^ (ulonglong)auStack_78);
  }
  return CONCAT71((int7)((local_28 ^ (ulonglong)auStack_78) >> 8),1);
}

