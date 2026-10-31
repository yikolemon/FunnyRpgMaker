/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032bdfb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14032bdfb(ulonglong param_1,uint param_2)

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
  
  lVar4 = DAT_14062a630;
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  if ((*(char *)(DAT_14062a630 + 0x2429) == '\0') && (*(char *)(DAT_14062a630 + 0x242a) != '\x01'))
  {
    pcVar6 = 
    "ems:$gameParty._items,weapons:$gameParty._weapons,armors:$gameParty._armors,switches:$gameSwitches._data,variables:$gameVariables._data"
    ;
    if ((param_1 & 2) == 0) goto LAB_14032bf23;
  }
  else {
    if ((*(byte *)(DAT_14062a630 + 0x2030) & 1) == 0) {
      fVar1 = *(float *)(DAT_14062a630 + 0xed8);
      if (*(int *)(DAT_14062a630 + 0x130) == 1) {
        local_48 = fVar1 * 0.0;
        local_50 = DAT_1404efd60;
        fVar3 = DAT_1404ed760;
      }
      else {
        local_48 = fVar1 * _DAT_1404efc80;
        local_50 = 0;
        fVar3 = DAT_1404ed7ac;
      }
      local_44 = *(float *)(DAT_14062a630 + 0x11c) + fVar3 * fVar1;
      local_48 = local_48 + *(float *)(DAT_14062a630 + 0x118);
      FUN_140327f5b(&local_48,0);
    }
    FUN_140328020(*(float *)(lVar4 + 0xf34) * DAT_1404ed8e8);
    pcVar6 = "a";
  }
  lVar2 = *(longlong *)(lVar4 + 0x2868);
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x109) == '\x01')) &&
     (cVar5 = FUN_140327d33(lVar2), cVar5 == '\0')) {
    FUN_140327f31(lVar2);
    *(short *)(lVar4 + 0x2866) = *(short *)(lVar4 + 0x2866) + 1;
  }
LAB_14032bf23:
  FUN_14030ffa5(&local_48,0x20,pcVar6,(int)*(short *)(lVar4 + 0x2866));
  FUN_14031df36(&local_48,0,param_2 | 0x20b0347);
  if (ram0x000140613b10 != (local_28 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_28 ^ (ulonglong)auStack_78);
  }
  return CONCAT71((int7)((local_28 ^ (ulonglong)auStack_78) >> 8),1);
}

