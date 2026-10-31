/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400339a2 */

undefined8 FUN_1400339a2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *****pppppcVar7;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  char local_87;
  undefined1 local_86 [30];
  char ****local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_68 = (char ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0xf;
  cVar2 = FUN_14000d7b8(param_2,&DAT_140171466);
  uVar6 = 1;
  lVar5 = param_1;
  if (cVar2 != '\0') goto LAB_140033b08;
  do {
    while ((*(ulonglong *)(lVar5 + 0x330) != 0 &&
           (*(ulonglong *)(lVar5 + 0x330) <=
            (ulonglong)(*(longlong *)(lVar5 + 0x2b0) - *(longlong *)(lVar5 + 0x2a8) >> 3)))) {
      plVar1 = (longlong *)(lVar5 + 0x348);
      lVar5 = *plVar1;
      if (*plVar1 == 0) goto LAB_140033a71;
    }
    lVar4 = FUN_14003727a(lVar5,param_2,1,param_3);
    if (lVar4 != 0) {
      uVar6 = 5;
      goto LAB_140033b08;
    }
    plVar1 = (longlong *)(lVar5 + 0x348);
    lVar5 = *plVar1;
  } while (*plVar1 != 0);
LAB_140033a71:
  cVar2 = FUN_140036c5a(param_2,&local_68,&local_a8);
  uVar6 = 3;
  if (cVar2 != '\0') goto LAB_140033b08;
  cVar2 = FUN_140036ebb(param_2,&local_68,&local_a8);
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0x31b) == '\x01') {
      cVar2 = FUN_140037034(param_2,&local_68,&local_a8);
      uVar6 = 4;
      if (cVar2 != '\0') goto LAB_140033b08;
    }
    cVar2 = FUN_14000d7b8(param_2,"++");
    if (((cVar2 != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) &&
       (uVar6 = 6, *(longlong *)(param_1 + 0x348) != 0)) goto LAB_140033b08;
    lVar5 = FUN_14000e108(param_2,0x2e,0);
    if (lVar5 != -1) {
      FUN_1400191d4(&local_88,param_2,0,lVar5,&local_39);
      lVar4 = FUN_14003727a(param_1,&local_88,1,param_3);
      FUN_1400017de(&local_88);
      if (lVar4 != 0) {
        FUN_1400191d4(&local_88,param_2,lVar5 + 1,0xffffffffffffffff,&local_39);
        iVar3 = FUN_1400339a2(lVar4,&local_88,param_3);
        FUN_1400017de(&local_88);
        uVar6 = 5;
        if (iVar3 == 5) goto LAB_140033b08;
      }
    }
LAB_140033c1c:
    uVar6 = 0;
  }
  else {
    pppppcVar7 = &local_68;
    if (0xf < local_50) {
      pppppcVar7 = (char *****)local_68;
    }
    if ((byte)(*(char *)pppppcVar7 - 0x30U) < 10) {
      local_88 = 0x2d;
      local_d0 = local_86;
      local_d8 = &local_88;
      local_87 = *(char *)pppppcVar7;
      FUN_14002766a(local_c8,&local_d8,&local_39);
      lVar5 = FUN_14002e0a2(param_1,local_c8);
      if (lVar5 == 0) goto LAB_140033c1c;
    }
    uVar6 = 2;
  }
LAB_140033b08:
  FUN_1400017de(&local_a8);
  FUN_1400017de(&local_68);
  return uVar6;
}

