/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140108ef0 */

void FUN_140108ef0(int *param_1,undefined8 param_2,undefined8 param_3)

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
  cVar4 = FUN_140085d7e(param_2,param_3,0);
  if (cVar4 != '\0') {
    cVar4 = FUN_140094826("Options",0);
    if (cVar4 != '\0') {
      FUN_1400aeb6a("Auto-scroll",param_1 + 0x4e);
      FUN_1400946ab();
    }
    local_98 = 0;
    cVar4 = FUN_1400ad187("Options");
    if (cVar4 != '\0') {
      FUN_140093f4a("Options",0);
    }
    uVar3 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    local_98 = 0;
    cVar4 = FUN_1400ad187("Clear",&local_98);
    FUN_140092bab(0,uVar3);
    local_98 = 0;
    cVar5 = FUN_1400ad187(&DAT_140ec27a5,&local_98);
    FUN_140092bab(0,uVar3);
    FUN_14007901e(param_1 + 4,"Filter",DAT_140e8d4c0);
    FUN_1400b0bd1();
    local_98 = 0;
    cVar6 = FUN_14008a029("scrolling",&local_98,0,0x800);
    if (cVar6 != '\0') {
      if (cVar4 != '\0') {
        FUN_140109228(param_1);
      }
      if (cVar5 != '\0') {
        FUN_14008e61f(0xffffffff);
      }
      local_98 = 0;
      FUN_14007ae77(0xe);
      puVar12 = *(undefined **)(param_1 + 2);
      puVar10 = puVar12 + (longlong)*param_1 + -1;
      if (puVar12 == (undefined *)0x0) {
        puVar12 = &DAT_140f2a918;
        puVar10 = &DAT_140f2a918;
      }
      if (param_1[0x44] == 0) {
        FUN_1400796ae(&local_98);
        FUN_140079772(&local_98,param_1[0x4a],DAT_1401c86a4);
        while (cVar4 = FUN_140079cee(&local_98), cVar4 != '\0') {
          iVar7 = (int)local_98;
          while (iVar7 < local_98._4_4_) {
            iVar1 = iVar7 + 1;
            puVar9 = puVar10;
            if (iVar1 < param_1[0x4a]) {
              puVar9 = puVar12 + (longlong)
                                 *(int *)(*(longlong *)(param_1 + 0x4c) + (longlong)iVar1 * 4) + -1;
            }
            FUN_1400abfca(puVar12 + *(int *)(*(longlong *)(param_1 + 0x4c) + (longlong)iVar7 * 4),
                          puVar9);
            iVar7 = iVar1;
          }
        }
        FUN_1400796ce(&local_98);
        thunk_FUN_1400796ce(&local_98);
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
            cVar4 = FUN_14007922a(param_1 + 4,puVar12 + iVar7,puVar9);
            if (cVar4 != '\0') {
              FUN_1400abfca(puVar12 + iVar7,puVar9);
            }
            uVar8 = (ulonglong)param_1[0x4a];
            bVar2 = lVar11 < (longlong)uVar8;
            lVar11 = lVar11 + 1;
          } while (bVar2);
        }
      }
      FUN_14007af87(1);
      if ((char)param_1[0x4e] == '\x01') {
        fVar13 = (float)FUN_1400939ce();
        fVar14 = (float)FUN_1400939fc();
        if (fVar14 <= fVar13) {
          FUN_140093b38(DAT_1401c86c8);
        }
      }
    }
    FUN_14008a651();
    FUN_140088c18();
    return;
  }
  FUN_140088c18();
  return;
}

