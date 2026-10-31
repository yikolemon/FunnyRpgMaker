/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c31ec */

void FUN_1801c31ec(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  longlong lVar11;
  undefined *puVar12;
  float fVar13;
  float fVar14;
  undefined8 local_98;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  cVar4 = FUN_18010ca66(param_2,param_3,0);
  if (cVar4 != '\0') {
    cVar4 = FUN_18011b56a("Options",0);
    if (cVar4 != '\0') {
      FUN_180135c3a("Auto-scroll",param_1 + 0x4e);
      FUN_18011b3ef();
    }
    local_98 = 0;
    cVar4 = FUN_180134257("Options");
    if (cVar4 != '\0') {
      FUN_18011ac8e("Options",0);
    }
    uVar3 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    local_98 = 0;
    cVar4 = FUN_180134257("Clear",&local_98);
    FUN_180119893(0,uVar3);
    local_98 = 0;
    cVar5 = FUN_180134257(&DAT_1803605a3,&local_98);
    FUN_180119893(0,uVar3);
    FUN_1800ffd62(param_1 + 4,"Filter",DAT_180329130);
    FUN_180137ca1();
    local_98 = 0;
    cVar6 = FUN_180110d11("scrolling",&local_98,0,0x800);
    if (cVar6 != '\0') {
      if (cVar4 != '\0') {
        FUN_1801c3524(param_1);
      }
      if (cVar5 != '\0') {
        FUN_180115307(0xffffffff);
      }
      local_98 = 0;
      FUN_180101bbb(0xe);
      puVar12 = *(undefined **)(param_1 + 2);
      puVar10 = puVar12 + (longlong)*param_1 + -1;
      if (puVar12 == (undefined *)0x0) {
        puVar12 = &DAT_180419168;
        puVar10 = &DAT_180419168;
      }
      if (param_1[0x44] == 0) {
        FUN_1801003f2(&local_98);
        FUN_1801004b6(&local_98,param_1[0x4a],DAT_1802bb8e0);
        while (cVar4 = FUN_180100a32(&local_98), cVar4 != '\0') {
          iVar7 = (int)local_98;
          while (iVar7 < local_98._4_4_) {
            iVar1 = iVar7 + 1;
            puVar9 = puVar10;
            if (iVar1 < param_1[0x4a]) {
              puVar9 = puVar12 + (longlong)
                                 *(int *)(*(longlong *)(param_1 + 0x4c) + (longlong)iVar1 * 4) + -1;
            }
            FUN_18013309a(puVar12 + *(int *)(*(longlong *)(param_1 + 0x4c) + (longlong)iVar7 * 4),
                          puVar9);
            iVar7 = iVar1;
          }
        }
        FUN_180100412(&local_98);
        thunk_FUN_180100412(&local_98);
      }
      else {
        uVar8 = (ulonglong)(uint)param_1[0x4a];
        if (0 < param_1[0x4a]) {
          lVar11 = 1;
          do {
            puVar9 = puVar10;
            if (lVar11 < (int)uVar8) {
              puVar9 = puVar12 + (longlong)*(int *)(*(longlong *)(param_1 + 0x4c) + lVar11 * 4) + -1
              ;
            }
            iVar7 = *(int *)(*(longlong *)(param_1 + 0x4c) + -4 + lVar11 * 4);
            cVar4 = FUN_1800fff6e(param_1 + 4,puVar12 + iVar7,puVar9);
            if (cVar4 != '\0') {
              FUN_18013309a(puVar12 + iVar7,puVar9);
            }
            uVar8 = (ulonglong)param_1[0x4a];
            bVar2 = lVar11 < (longlong)uVar8;
            lVar11 = lVar11 + 1;
          } while (bVar2);
        }
      }
      FUN_180101ccb(1);
      if ((char)param_1[0x4e] == '\x01') {
        fVar13 = (float)FUN_18011a712();
        fVar14 = (float)FUN_18011a740();
        if (fVar14 <= fVar13) {
          FUN_18011a87c(DAT_1802ac570);
        }
      }
    }
    FUN_180111339();
    FUN_18010f900();
    return;
  }
  FUN_18010f900();
  return;
}

