/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002218a */

uint * FUN_14002218a(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  double dVar3;
  uint *puVar4;
  char cVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  double dVar12;
  double local_180;
  undefined1 local_178 [24];
  undefined8 auStack_160 [25];
  undefined1 local_98 [32];
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xf;
  param_1[7] = 0;
  lVar10 = *param_2;
  lVar1 = param_2[1];
  dVar12 = 0.0;
  local_58 = param_1;
  do {
    if (lVar10 == lVar1) {
      FUN_140019bc0(&local_180,1);
      *(undefined8 *)((longlong)auStack_160 + (longlong)*(int *)((longlong)local_180 + 4)) = 0x10;
      FUN_140022f40(&local_180,dVar12);
      FUN_1400170f8(local_178,&local_78);
      puVar4 = local_58;
      if (local_58 != &local_78) {
        FUN_1400065bc(local_58);
        *(undefined8 *)(puVar4 + 4) = local_68;
        *(undefined8 *)(puVar4 + 6) = uStack_60;
        *puVar4 = local_78;
        puVar4[1] = uStack_74;
        puVar4[2] = uStack_70;
        puVar4[3] = uStack_6c;
        local_68 = 0;
        uStack_60 = 0xf;
        local_78 = local_78 & 0xffffff00;
      }
      FUN_1400017de(&local_78);
      FUN_140019cf4(&local_180);
      return local_58;
    }
    local_180 = 0.0;
    cVar5 = FUN_140022a03(lVar10,&local_180);
    dVar3 = local_180;
    if (cVar5 == '\0') {
      puVar6 = (undefined4 *)FUN_140113dd4();
      *puVar6 = 0;
      FUN_140006874(local_98,lVar10);
      lVar7 = FUN_140022bdc(local_98);
      piVar8 = (int *)FUN_140113dd4();
      if (*piVar8 != 0) {
        puVar2 = (undefined8 *)param_2[1];
        for (puVar11 = (undefined8 *)*param_2; puVar11 != puVar2; puVar11 = puVar11 + 4) {
          puVar9 = puVar11;
          if (0xf < (ulonglong)puVar11[3]) {
            puVar9 = (undefined8 *)*puVar11;
          }
          FUN_14000b1f8(local_58,puVar9,puVar11[2]);
        }
        return local_58;
      }
      dVar3 = (double)lVar7;
    }
    dVar12 = dVar12 + dVar3;
    lVar10 = lVar10 + 0x20;
  } while( true );
}

