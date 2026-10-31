/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026165a */

undefined4 __fastcall FUN_1026165a(undefined4 *param_1)

{
  char *pcVar1;
  ushort uVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  formatting_buffer *pfVar6;
  char *pcVar7;
  uint uVar8;
  formatting_buffer *pfVar9;
  undefined3 uVar10;
  undefined4 *puVar11;
  ushort *puVar12;
  int iVar13;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  ushort *local_14;
  undefined4 *local_10;
  int local_c;
  formatting_buffer *local_8;
  
  param_1[7] = param_1[7] | 0x10;
  iVar13 = param_1[9];
  if (iVar13 < 0) {
    if ((*(short *)((int)param_1 + 0x2e) == 0x61) || (*(short *)((int)param_1 + 0x2e) == 0x41)) {
      iVar13 = 0xd;
    }
    else {
      iVar13 = 6;
    }
    param_1[9] = iVar13;
  }
  else if ((iVar13 == 0) &&
          ((*(short *)((int)param_1 + 0x2e) == 0x67 || (*(short *)((int)param_1 + 0x2e) == 0x47))))
  {
    param_1[9] = 1;
    iVar13 = 1;
  }
  pfVar9 = (formatting_buffer *)(param_1 + 0xf);
  local_10 = param_1;
  local_8 = pfVar9;
  cVar4 = FUN_10261a08(iVar13 + 0x15d,param_1[2]);
  if (cVar4 == '\0') {
    uVar5 = __crt_stdio_output::formatting_buffer::count<char>(pfVar9);
    local_c = uVar5 - 0x15d;
    param_1[9] = local_c;
  }
  else {
    local_c = param_1[9];
  }
  local_18 = param_1 + 0xc;
  pfVar6 = (formatting_buffer *)param_1[0x110];
  if ((formatting_buffer *)param_1[0x110] == (formatting_buffer *)0x0) {
    pfVar6 = pfVar9;
  }
  *local_18 = pfVar6;
  puVar11 = (undefined4 *)param_1[4];
  param_1[4] = puVar11 + 2;
  local_20 = *puVar11;
  local_1c = puVar11[1];
  local_14 = (ushort *)((int)param_1 + 0x2e);
  cVar4 = *(char *)local_14;
  uVar5 = __crt_stdio_output::formatting_buffer::count<char>(pfVar9);
  pcVar7 = __crt_stdio_output::formatting_buffer::scratch_data<char>(pfVar9);
  uVar8 = __crt_stdio_output::formatting_buffer::count<char>(local_8);
  pfVar9 = *(formatting_buffer **)(local_8 + 0x404);
  if (*(formatting_buffer **)(local_8 + 0x404) == (formatting_buffer *)0x0) {
    pfVar9 = local_8;
  }
  FUN_1027746d(&local_20,pfVar9,uVar8,pcVar7,uVar5,(int)cVar4,local_c,*local_10,local_10[1],1,
               local_10[2]);
  puVar3 = local_10;
  puVar11 = local_18;
  puVar12 = local_14;
  if ((((uint)local_10[7] >> 5 & 1) != 0) && (local_10[9] == 0)) {
    iVar13 = local_10[2];
    if (*(char *)(iVar13 + 0x14) == '\0') {
      FUN_1025ec50();
      puVar12 = (ushort *)((int)puVar3 + 0x2e);
    }
    FUN_1025ed3b(puVar3[0xc],iVar13 + 0xc);
    puVar11 = puVar3 + 0xc;
  }
  uVar2 = *puVar12;
  uVar5 = (uint)uVar2;
  if (((uVar2 == 0x67) || (uVar2 == 0x47)) && (uVar5 = (uint)puVar3[7] >> 5, (uVar5 & 1) == 0)) {
    iVar13 = puVar3[2];
    if (*(char *)(iVar13 + 0x14) == '\0') {
      FUN_1025ec50();
      puVar11 = puVar3 + 0xc;
    }
    uVar5 = FUN_1025ed9d(puVar3[0xc],iVar13 + 0xc);
  }
  pcVar7 = (char *)puVar3[0xc];
  cVar4 = *pcVar7;
  uVar10 = (undefined3)(uVar5 >> 8);
  if (cVar4 == '-') {
    puVar3[7] = puVar3[7] | 0x40;
    pcVar7 = pcVar7 + 1;
    *puVar11 = pcVar7;
    cVar4 = *pcVar7;
  }
  if (((cVar4 == 'i') || (cVar4 == 'I')) || ((cVar4 == 'n' || (cVar4 == 'N')))) {
    puVar3[7] = puVar3[7] & 0xfffffff7;
    uVar10 = 0;
    *(undefined2 *)((int)puVar3 + 0x2e) = 0x73;
  }
  pcVar1 = pcVar7 + 1;
  do {
    cVar4 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar4 != '\0');
  puVar3[0xd] = (int)pcVar7 - (int)pcVar1;
  return CONCAT31(uVar10,1);
}

