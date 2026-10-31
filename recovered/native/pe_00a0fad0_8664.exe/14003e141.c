/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003e141 */

ulonglong FUN_14003e141(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 unaff_R14;
  ulonglong uVar6;
  byte bVar7;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_14002d04a(param_2,&local_88,*param_2,param_2[1]);
  lVar4 = *param_1;
  lVar2 = param_1[1];
  uVar6 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (lVar4 == lVar2) goto LAB_14003e295;
  if (lVar2 - lVar4 == 0x20) {
    cVar1 = FUN_14000d7b8(lVar4,&DAT_14016e735);
    if (cVar1 != '\0') goto LAB_14003e295;
    lVar4 = *param_1;
    lVar2 = param_1[1];
  }
  if (lVar2 - lVar4 == 0x40) {
    uVar3 = FUN_14000d7b8(lVar4,&DAT_14016e735);
    lVar4 = *param_1;
    if ((char)uVar3 == '\0') goto LAB_14003e200;
    if (*(longlong *)(lVar4 + 0x30) == 0) {
      local_64 = (uint)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
    else {
      local_64 = FUN_1400170b4(lVar4 + 0x20,&DAT_14013b3f8);
      lVar4 = *param_1;
    }
  }
  else {
LAB_14003e200:
    local_64 = 0;
  }
  lVar2 = param_1[1];
  if (lVar4 != lVar2) {
    bVar5 = (byte)local_64;
    do {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0xf;
      cVar1 = thunk_FUN_14003e300(lVar4,&local_88);
      if (cVar1 == '\0') {
        bVar7 = 0;
        uVar6 = 0;
      }
      else {
        FUN_14002020c(param_2,local_90,param_2[1],&local_88);
        uVar6 = (ulonglong)local_64;
        bVar7 = bVar5 ^ 1;
      }
      FUN_1400017de(&local_88);
      if (bVar7 == 0) {
        if ((char)uVar6 == '\0') {
          uVar6 = 0;
          goto LAB_14003e295;
        }
        break;
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar2);
  }
  uVar6 = CONCAT71((int7)(uVar6 >> 8),*param_2 != param_2[1]);
LAB_14003e295:
  return uVar6 & 0xffffffff;
}

