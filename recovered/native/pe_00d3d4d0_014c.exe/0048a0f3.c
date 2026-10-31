/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048a0f3 */

undefined4 __fastcall FUN_0048a0f3(uint *param_1)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  bool bVar7;
  formatting_buffer *pfVar8;
  char *pcVar9;
  uint uVar10;
  formatting_buffer *pfVar11;
  undefined3 uVar12;
  uint *puVar13;
  ushort *puVar14;
  uint uVar15;
  undefined4 local_20;
  undefined4 local_1c;
  uint *local_18;
  ushort *local_14;
  uint *local_10;
  uint local_c;
  formatting_buffer *local_8;
  
  param_1[7] = param_1[7] | 0x10;
  uVar15 = param_1[9];
  if ((int)uVar15 < 0) {
    if ((*(short *)((int)param_1 + 0x2e) == 0x61) || (*(short *)((int)param_1 + 0x2e) == 0x41)) {
      uVar15 = 0xd;
    }
    else {
      uVar15 = 6;
    }
    param_1[9] = uVar15;
  }
  else if ((uVar15 == 0) &&
          ((*(short *)((int)param_1 + 0x2e) == 0x67 || (*(short *)((int)param_1 + 0x2e) == 0x47))))
  {
    param_1[9] = 1;
    uVar15 = 1;
  }
  pfVar11 = (formatting_buffer *)(param_1 + 0xf);
  local_10 = param_1;
  local_8 = pfVar11;
  bVar7 = FUN_0048a526(pfVar11,uVar15 + 0x15d,param_1[2]);
  if (bVar7) {
    local_c = param_1[9];
  }
  else {
    local_c = __crt_stdio_output::formatting_buffer::count<char>(pfVar11);
    local_c = local_c - 0x15d;
    param_1[9] = local_c;
  }
  local_18 = param_1 + 0xc;
  pfVar8 = (formatting_buffer *)param_1[0x110];
  if ((formatting_buffer *)param_1[0x110] == (formatting_buffer *)0x0) {
    pfVar8 = pfVar11;
  }
  *local_18 = (uint)pfVar8;
  puVar4 = (undefined4 *)param_1[4];
  param_1[4] = (uint)(puVar4 + 2);
  local_20 = *puVar4;
  local_1c = puVar4[1];
  local_14 = (ushort *)((int)param_1 + 0x2e);
  cVar2 = *(char *)local_14;
  uVar15 = __crt_stdio_output::formatting_buffer::count<char>(pfVar11);
  pcVar9 = __crt_stdio_output::formatting_buffer::scratch_data<char>(pfVar11);
  uVar10 = __crt_stdio_output::formatting_buffer::count<char>(local_8);
  pfVar11 = *(formatting_buffer **)(local_8 + 0x404);
  if (*(formatting_buffer **)(local_8 + 0x404) == (formatting_buffer *)0x0) {
    pfVar11 = local_8;
  }
  FUN_004986b4((double *)&local_20,(undefined1 (*) [16])pfVar11,uVar10,pcVar9,uVar15,(int)cVar2,
               local_c,*local_10,local_10[1],1,(int *)local_10[2]);
  puVar6 = local_10;
  puVar13 = local_18;
  puVar14 = local_14;
  if (((local_10[7] >> 5 & 1) != 0) && (local_10[9] == 0)) {
    piVar5 = (int *)local_10[2];
    if ((char)piVar5[5] == '\0') {
      FUN_00488f30(piVar5);
      puVar14 = (ushort *)((int)puVar6 + 0x2e);
    }
    FUN_0048901b((byte *)puVar6[0xc],piVar5 + 3);
    puVar13 = puVar6 + 0xc;
  }
  uVar3 = *puVar14;
  uVar15 = (uint)uVar3;
  if (((uVar3 == 0x67) || (uVar3 == 0x47)) && (uVar15 = puVar6[7] >> 5, (uVar15 & 1) == 0)) {
    piVar5 = (int *)puVar6[2];
    if ((char)piVar5[5] == '\0') {
      FUN_00488f30(piVar5);
      puVar13 = puVar6 + 0xc;
    }
    uVar15 = FUN_0048907d((char *)puVar6[0xc],piVar5 + 3);
  }
  pcVar9 = (char *)puVar6[0xc];
  cVar2 = *pcVar9;
  uVar12 = (undefined3)(uVar15 >> 8);
  if (cVar2 == '-') {
    puVar6[7] = puVar6[7] | 0x40;
    pcVar9 = pcVar9 + 1;
    *puVar13 = (uint)pcVar9;
    cVar2 = *pcVar9;
  }
  if (((cVar2 == 'i') || (cVar2 == 'I')) || ((cVar2 == 'n' || (cVar2 == 'N')))) {
    puVar6[7] = puVar6[7] & 0xfffffff7;
    uVar12 = 0;
    *(undefined2 *)((int)puVar6 + 0x2e) = 0x73;
  }
  pcVar1 = pcVar9 + 1;
  do {
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  puVar6[0xd] = (int)pcVar9 - (int)pcVar1;
  return CONCAT31(uVar12,1);
}

