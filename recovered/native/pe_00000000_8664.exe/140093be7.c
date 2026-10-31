/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140093be7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140093be7(ulonglong param_1,uint param_2)

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
  
  lVar4 = DAT_140f2a910;
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  if ((*(char *)(DAT_140f2a910 + 0x2429) == '\0') && (*(char *)(DAT_140f2a910 + 0x242a) != '\x01'))
  {
    pcVar6 = "##Tooltip_%02d";
    if ((param_1 & 2) == 0) goto LAB_140093d0f;
  }
  else {
    if ((*(byte *)(DAT_140f2a910 + 0x2030) & 1) == 0) {
      fVar1 = *(float *)(DAT_140f2a910 + 0xed8);
      if (*(int *)(DAT_140f2a910 + 0x130) == 1) {
        local_48 = fVar1 * 0.0;
        local_50 = DAT_140211600;
        fVar3 = DAT_1401c8670;
      }
      else {
        local_48 = fVar1 * _caseD_100;
        local_50 = 0;
        fVar3 = DAT_1401c86d0;
      }
      local_44 = *(float *)(DAT_140f2a910 + 0x11c) + fVar3 * fVar1;
      local_48 = local_48 + *(float *)(DAT_140f2a910 + 0x118);
      FUN_14008fda3(&local_48,0);
    }
    FUN_14008fe68(*(float *)(lVar4 + 0xf34) * DAT_140210014);
    pcVar6 = "##Tooltip_DragDrop_%02d";
  }
  lVar2 = *(longlong *)(lVar4 + 0x2868);
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x109) == '\x01')) &&
     (cVar5 = FUN_14008fb7b(lVar2), cVar5 == '\0')) {
    FUN_14008fd79(lVar2);
    *(short *)(lVar4 + 0x2866) = *(short *)(lVar4 + 0x2866) + 1;
  }
LAB_140093d0f:
  FUN_140077d91(&local_48,0x20,pcVar6,(int)*(short *)(lVar4 + 0x2866));
  FUN_140085d7e(&local_48,0,param_2 | 0x20b0347);
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_78);
  }
  return CONCAT71((int7)((local_28 ^ (ulonglong)auStack_78) >> 8),1);
}

