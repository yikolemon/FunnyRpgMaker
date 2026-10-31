/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025fd79 */

undefined4 __fastcall FUN_1025fd79(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  formatting_buffer *pfVar5;
  char *pcVar6;
  uint uVar7;
  formatting_buffer *pfVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  char *local_14;
  undefined4 *local_10;
  int local_c;
  formatting_buffer *local_8;
  
  param_1[7] = param_1[7] | 0x10;
  iVar10 = param_1[9];
  if (iVar10 < 0) {
    if ((*(char *)((int)param_1 + 0x2d) == 'a') || (*(char *)((int)param_1 + 0x2d) == 'A')) {
      iVar10 = 0xd;
    }
    else {
      iVar10 = 6;
    }
    param_1[9] = iVar10;
  }
  else if ((iVar10 == 0) &&
          ((*(char *)((int)param_1 + 0x2d) == 'g' || (*(char *)((int)param_1 + 0x2d) == 'G')))) {
    param_1[9] = 1;
    iVar10 = 1;
  }
  pfVar8 = (formatting_buffer *)(param_1 + 0xf);
  local_10 = param_1;
  local_8 = pfVar8;
  cVar3 = FUN_10261a08(iVar10 + 0x15d,param_1[2]);
  if (cVar3 == '\0') {
    uVar4 = __crt_stdio_output::formatting_buffer::count<char>(pfVar8);
    local_c = uVar4 - 0x15d;
    param_1[9] = local_c;
  }
  else {
    local_c = param_1[9];
  }
  local_18 = param_1 + 0xc;
  pfVar5 = (formatting_buffer *)param_1[0x110];
  if ((formatting_buffer *)param_1[0x110] == (formatting_buffer *)0x0) {
    pfVar5 = pfVar8;
  }
  *local_18 = pfVar5;
  puVar9 = (undefined4 *)param_1[4];
  param_1[4] = puVar9 + 2;
  local_20 = *puVar9;
  local_1c = puVar9[1];
  local_14 = (char *)((int)param_1 + 0x2d);
  cVar3 = *local_14;
  uVar4 = __crt_stdio_output::formatting_buffer::count<char>(pfVar8);
  pcVar6 = __crt_stdio_output::formatting_buffer::scratch_data<char>(pfVar8);
  uVar7 = __crt_stdio_output::formatting_buffer::count<char>(local_8);
  pfVar8 = *(formatting_buffer **)(local_8 + 0x404);
  if (*(formatting_buffer **)(local_8 + 0x404) == (formatting_buffer *)0x0) {
    pfVar8 = local_8;
  }
  FUN_1027746d(&local_20,pfVar8,uVar7,pcVar6,uVar4,(int)cVar3,local_c,*local_10,local_10[1],1,
               local_10[2]);
  puVar2 = local_10;
  puVar9 = local_18;
  pcVar6 = local_14;
  if ((((uint)local_10[7] >> 5 & 1) != 0) && (local_10[9] == 0)) {
    iVar10 = local_10[2];
    if (*(char *)(iVar10 + 0x14) == '\0') {
      FUN_1025ec50();
      pcVar6 = (char *)((int)puVar2 + 0x2d);
    }
    FUN_1025ed3b(puVar2[0xc],iVar10 + 0xc);
    puVar9 = puVar2 + 0xc;
  }
  if (((*pcVar6 == 'g') || (*pcVar6 == 'G')) && (((uint)puVar2[7] >> 5 & 1) == 0)) {
    iVar10 = puVar2[2];
    if (*(char *)(iVar10 + 0x14) == '\0') {
      FUN_1025ec50();
      puVar9 = puVar2 + 0xc;
    }
    FUN_1025ed9d(puVar2[0xc],iVar10 + 0xc);
  }
  pcVar6 = (char *)puVar2[0xc];
  cVar3 = *pcVar6;
  if (cVar3 == '-') {
    puVar2[7] = puVar2[7] | 0x40;
    pcVar6 = pcVar6 + 1;
    *puVar9 = pcVar6;
    cVar3 = *pcVar6;
  }
  if (((cVar3 == 'i') || (cVar3 == 'I')) || ((cVar3 == 'n' || (cVar3 == 'N')))) {
    puVar2[7] = puVar2[7] & 0xfffffff7;
    *(undefined1 *)((int)puVar2 + 0x2d) = 0x73;
  }
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  puVar2[0xd] = (int)pcVar6 - (int)pcVar1;
  return 1;
}

