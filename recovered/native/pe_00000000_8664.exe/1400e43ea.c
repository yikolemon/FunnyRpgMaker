/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e43ea */

void FUN_1400e43ea(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x2a0) != 0) {
    plVar12 = *(longlong **)(param_1 + 0x2a8);
    plVar1 = plVar12 + *(int *)(param_1 + 0x2a0);
    do {
      lVar4 = *plVar12;
      if (((*(longlong *)(lVar4 + 0x68) == 0) ||
          (*(char *)(*(longlong *)(lVar4 + 0x68) + 1) == '\x01')) &&
         ((longlong)*(int *)(lVar4 + 0x58) != 0)) {
        puVar11 = *(undefined8 **)(lVar4 + 0x60);
        puVar10 = puVar11 + *(int *)(lVar4 + 0x58);
        do {
          piVar5 = (int *)*puVar11;
          if (((0 < *piVar5) && (*(longlong *)(piVar5 + 0x1e) == param_2[1])) &&
             (*(longlong *)(piVar5 + 0x1c) == *param_2)) {
            local_58 = *param_3;
            uStack_54 = param_3[1];
            uStack_50 = param_3[2];
            uStack_4c = param_3[3];
            FUN_1400dae32(piVar5);
          }
          iVar3 = piVar5[0x2c];
          if ((longlong)iVar3 != 0) {
            lVar4 = *(longlong *)(piVar5 + 0x2e);
            lVar9 = 0;
            do {
              if ((*(longlong *)(lVar4 + 8 + lVar9) == param_2[1]) &&
                 (*(longlong *)(lVar4 + lVar9) == *param_2)) {
                puVar2 = (undefined4 *)(lVar4 + lVar9);
                uVar6 = param_3[1];
                uVar7 = param_3[2];
                uVar8 = param_3[3];
                *puVar2 = *param_3;
                puVar2[1] = uVar6;
                puVar2[2] = uVar7;
                puVar2[3] = uVar8;
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)iVar3 * 0x10 != lVar9);
          }
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar10);
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
  }
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
}

