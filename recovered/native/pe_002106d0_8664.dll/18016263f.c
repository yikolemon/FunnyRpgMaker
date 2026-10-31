/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016263f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18016263f(undefined8 *param_1,char *****param_2)

{
  char cVar1;
  char ****ppppcVar2;
  char *****pppppcVar3;
  longlong lVar4;
  char *****pppppcVar5;
  ulonglong in_stack_ffffffffffffff68;
  char ****local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  char ****local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  char ****local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_80 = param_1;
  local_50 = (char ****)param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2c) < DAT_180419340) && (FUN_18023d500(&DAT_180419340), DAT_180419340 == -1)) {
    FUN_180018514(&DAT_180419318,&DAT_18036b9f5,1);
    FUN_18023d710(&LAB_180162d78);
    _Init_thread_footer(&DAT_180419340);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2c) < DAT_1804193b0) && (FUN_18023d500(&DAT_1804193b0), DAT_1804193b0 == -1)) {
    DAT_180419350 = "\r\n";
    DAT_180419358 = 2;
    DAT_180419360 = &DAT_18037bdad;
    _DAT_180419368 = 1;
    _DAT_180419370 = "\n";
    _DAT_180419378 = 1;
    _DAT_180419380 = &DAT_18036d0c4;
    _DAT_180419388 = 2;
    _DAT_180419390 = &DAT_18036c46b;
    _DAT_180419398 = 2;
    _DAT_1804193a0 = &DAT_18036d0f3;
    _DAT_1804193a8 = 3;
    _Init_thread_footer(&DAT_1804193b0);
  }
  ppppcVar2 = local_50;
  do {
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    FUN_1800af03c(&local_78,local_50,&DAT_180419318,&DAT_180385fb1,in_stack_ffffffffffffff68);
    cVar1 = FUN_18001ba14(&local_78,ppppcVar2);
    if ((char *****)ppppcVar2 != &local_78) {
      pppppcVar5 = &local_78;
      if (0xf < local_60) {
        pppppcVar5 = (char *****)local_78;
      }
      FUN_180017ca0(local_50,pppppcVar5,local_68);
    }
    FUN_180001ef2();
  } while (cVar1 == '\0');
  local_78 = (char ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  ppppcVar2 = (char ****)local_50[2];
  if ((char ****)0xf < ppppcVar2) {
    FUN_180003b06(&local_78,ppppcVar2);
    ppppcVar2 = (char ****)local_50[2];
  }
  local_68 = 0;
  pppppcVar5 = (char *****)local_50;
  if ((char ****)0xf < local_50[3]) {
    pppppcVar5 = (char *****)*local_50;
  }
  pppppcVar3 = (char *****)((longlong)ppppcVar2 + (longlong)pppppcVar5);
  do {
    if (pppppcVar5 == pppppcVar3) {
      if ((char *****)local_50 != &local_78) {
        pppppcVar5 = &local_78;
        if (0xf < local_60) {
          pppppcVar5 = (char *****)local_78;
        }
        FUN_180017ca0(local_50,pppppcVar5,local_68);
      }
      local_68 = 0;
      pppppcVar5 = (char *****)local_78;
      if (local_60 < 0x10) {
        pppppcVar5 = &local_78;
      }
      *(char *)pppppcVar5 = '\0';
      local_80[2] = 0;
      *local_80 = 0;
      local_80[1] = 0;
      local_90 = (char ****)&local_78;
      local_88 = local_80;
      pppppcVar5 = (char *****)local_50;
      if ((char ****)0xf < local_50[3]) {
        pppppcVar5 = (char *****)*local_50;
      }
      pppppcVar3 = (char *****)((longlong)pppppcVar5 + (longlong)local_50[2]);
      for (; pppppcVar5 != pppppcVar3; pppppcVar5 = (char *****)((longlong)pppppcVar5 + 1)) {
        if (*(char *)pppppcVar5 == '\x01') {
          FUN_180162d84(&local_90);
        }
        else {
          FUN_180003bf2(&local_78);
        }
      }
      FUN_180162d84(&local_90);
      FUN_180001ef2(&local_78);
      FUN_180001ef2(local_50);
      return local_80;
    }
    FUN_180003bf2(&local_78,*(char *)pppppcVar5);
    lVar4 = 8;
    do {
      local_90 = (char ****)&local_78;
      if (0xf < local_60) {
        local_90 = local_78;
      }
      local_88 = (undefined8 *)local_68;
      cVar1 = FUN_1800af1de(&local_90,*(undefined8 *)(lVar4 + 0x180419348));
      if (cVar1 != '\0') {
        FUN_1800af21a(&local_78,local_68 - *(longlong *)((longlong)&DAT_180419350 + lVar4),
                      *(longlong *)((longlong)&DAT_180419350 + lVar4),&DAT_180385fb1,1);
        break;
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x68);
    pppppcVar5 = (char *****)((longlong)pppppcVar5 + 1);
  } while( true );
}

