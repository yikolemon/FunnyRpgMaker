/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c4164 */

void FUN_1400c4164(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  char *******pppppppcVar4;
  longlong lVar5;
  undefined8 *******pppppppuVar6;
  undefined1 local_c8 [32];
  undefined8 ******local_a8 [2];
  longlong local_98;
  ulonglong local_90;
  char *****local_88;
  char ***local_80;
  char ***pppcStack_78;
  longlong local_70;
  char ******local_68;
  char ***local_60;
  char ***pppcStack_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar3 = FUN_140098870(param_2,"Title");
  FUN_14007a24a(uVar3,&local_68);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1401cc948) {
    FUN_1400dd790(&DAT_1401cc948);
    if (DAT_1401cc948 == -1) {
      FUN_14007709a(&DAT_1401cc8d0);
      FUN_1400d3740(&LAB_140098bbf);
      _Init_thread_footer(&DAT_1401cc948);
    }
  }
  pppppppcVar4 = &local_68;
  if (0xf < local_50) {
    pppppppcVar4 = (char *******)local_68;
  }
  FUN_140007482(&DAT_1401cc8d0,&local_88,pppppppcVar4,
                (longlong)pppcStack_58 + (longlong)pppppppcVar4);
  FUN_14000ff1e(param_1 + 0x78,&local_88);
  FUN_140005242(&local_88);
  FUN_1400017de(&local_68);
  uVar3 = FUN_140098870(param_2,"TitlePlus");
  FUN_14007a24a(uVar3,&local_68);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1401cc948) {
    FUN_1400dd790(&DAT_1401cc948);
    if (DAT_1401cc948 == -1) {
      FUN_14007709a(&DAT_1401cc8d0);
      FUN_1400d3740(&LAB_140098bbf);
      _Init_thread_footer(&DAT_1401cc948);
    }
  }
  pppppppcVar4 = &local_68;
  if (0xf < local_50) {
    pppppppcVar4 = (char *******)local_68;
  }
  FUN_140007482(&DAT_1401cc8d0,&local_88,pppppppcVar4,
                (longlong)pppcStack_58 + (longlong)pppppppcVar4);
  FUN_14000ff1e(param_1 + 0x128,&local_88);
  FUN_140005242(&local_88);
  FUN_1400017de(&local_68);
  if (9 < *(uint *)(param_1 + 0x70)) {
    uVar3 = FUN_140098870(param_2,"StartUpMsg");
    FUN_14007a24a(uVar3,&local_68);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
        < DAT_1401cc948) {
      FUN_1400dd790(&DAT_1401cc948);
      if (DAT_1401cc948 == -1) {
        FUN_14007709a(&DAT_1401cc8d0);
        FUN_1400d3740(&LAB_140098bbf);
        _Init_thread_footer(&DAT_1401cc948);
      }
    }
    pppppppcVar4 = &local_68;
    if (0xf < local_50) {
      pppppppcVar4 = (char *******)local_68;
    }
    FUN_140007482(&DAT_1401cc8d0,&local_88,pppppppcVar4,
                  (longlong)pppcStack_58 + (longlong)pppppppcVar4);
    FUN_14000ff1e(param_1 + 0x188,&local_88);
    FUN_140005242(&local_88);
    FUN_1400017de(&local_68);
    uVar3 = FUN_140098870(param_2,"TitleMsg");
    FUN_14007a24a(uVar3,&local_68);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
        < DAT_1401cc948) {
      FUN_1400dd790(&DAT_1401cc948);
      if (DAT_1401cc948 == -1) {
        FUN_14007709a(&DAT_1401cc8d0);
        FUN_1400d3740(&LAB_140098bbf);
        _Init_thread_footer(&DAT_1401cc948);
      }
    }
    pppppppcVar4 = &local_68;
    if (0xf < local_50) {
      pppppppcVar4 = (char *******)local_68;
    }
    FUN_140007482(&DAT_1401cc8d0,&local_88,pppppppcVar4,
                  (longlong)pppcStack_58 + (longlong)pppppppcVar4);
    FUN_14000ff1e(param_1 + 0x1a8,&local_88);
    FUN_140005242(&local_88);
    FUN_1400017de(&local_68);
  }
  uVar3 = FUN_140098870(param_2,"MainFont");
  FUN_14007a24a(uVar3,&local_68);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1401cc948) {
    FUN_1400dd790(&DAT_1401cc948);
    if (DAT_1401cc948 == -1) {
      FUN_14007709a(&DAT_1401cc8d0);
      FUN_1400d3740(&LAB_140098bbf);
      _Init_thread_footer(&DAT_1401cc948);
    }
  }
  pppppppcVar4 = &local_68;
  if (0xf < local_50) {
    pppppppcVar4 = (char *******)local_68;
  }
  FUN_140007482(&DAT_1401cc8d0,&local_88,pppppppcVar4,
                (longlong)pppcStack_58 + (longlong)pppppppcVar4);
  FUN_14000ff1e(param_1 + 0xd0,&local_88);
  FUN_140005242(&local_88);
  FUN_1400017de(&local_68);
  lVar5 = *(longlong *)(param_1 + 0xf0);
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar5 != lVar1) {
    do {
      FUN_140005242(lVar5);
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar1);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0xf0);
  }
  local_88 = (char *****)FUN_140098870(param_2,"SubFonts");
  local_80 = (char ***)0x0;
  pppcStack_78 = (char ***)0x0;
  local_70 = -0x8000000000000000;
  cVar2 = *(char *)local_88;
  if (cVar2 == '\0') {
    local_70 = 1;
  }
  else {
    if (cVar2 == '\x02') {
      pppcStack_78 = *local_88[1];
      local_60 = (char ***)0x0;
      local_50 = 0x8000000000000000;
      pppcStack_58 = local_88[1][1];
      goto LAB_1400c4540;
    }
    if (cVar2 == '\x01') {
      local_80 = *local_88[1];
      pppcStack_58 = (char ***)0x0;
      local_50 = 0x8000000000000000;
      local_60 = local_88[1][1];
      goto LAB_1400c4540;
    }
    local_70 = 0;
  }
  local_60 = (char ***)0x0;
  pppcStack_58 = (char ***)0x0;
  local_50 = 1;
LAB_1400c4540:
  local_68 = (char ******)local_88;
  while( true ) {
    cVar2 = FUN_14006b9e2(&local_88,&local_68);
    if (cVar2 != '\0') break;
    uVar3 = FUN_140078920(&local_88);
    FUN_14007a24a(uVar3,local_a8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
        < DAT_1401cc948) {
      FUN_1400dd790(&DAT_1401cc948);
      if (DAT_1401cc948 == -1) {
        FUN_14007709a(&DAT_1401cc8d0);
        FUN_1400d3740(&LAB_140098bbf);
        _Init_thread_footer(&DAT_1401cc948);
      }
    }
    pppppppuVar6 = local_a8;
    if (0xf < local_90) {
      pppppppuVar6 = (undefined8 *******)local_a8[0];
    }
    FUN_140007482(&DAT_1401cc8d0,local_c8,pppppppuVar6,local_98 + (longlong)pppppppuVar6);
    FUN_1400436a6(param_1 + 0xf0,local_c8);
    FUN_140005242(local_c8);
    FUN_1400017de(local_a8);
    if (*(char *)local_88 == '\x02') {
      pppcStack_78 = pppcStack_78 + 2;
    }
    else if (*(char *)local_88 == '\x01') {
      local_80 = local_80 + 6;
    }
    else {
      local_70 = local_70 + 1;
    }
  }
  return;
}

