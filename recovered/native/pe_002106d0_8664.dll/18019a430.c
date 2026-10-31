/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019a430 */

void FUN_18019a430(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  longlong lVar11;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x48);
    lVar11 = 0;
    do {
      puVar7 = *(undefined4 **)(lVar6 + lVar11);
      iVar2 = puVar7[1];
      if (iVar2 == 4) {
        if ((DAT_180419160 != 0) && ((*(byte *)(DAT_180419160 + 0x2acd) & 1) != 0)) {
          FUN_1801236ce(*(undefined8 *)(puVar7 + 4));
          uVar3 = puVar7[8];
          uVar4 = *puVar7;
          uVar5 = puVar7[7];
          pcVar10 = "[font] Texture #%03d: destroy %dx%d, texid=0x%llX, backend_data=%p\n";
LAB_18019a52d:
          FUN_1800fdfea(pcVar10,uVar4,uVar5,uVar3);
        }
      }
      else if (iVar2 == 3) {
        if ((DAT_180419160 != 0) && ((*(byte *)(DAT_180419160 + 0x2acd) & 1) != 0)) {
          uVar8 = *(undefined8 *)(puVar7 + 2);
          uVar9 = FUN_1801236ce(*(undefined8 *)(puVar7 + 4));
          FUN_1800fdfea("[font] Texture #%03d: update %d regions, texid=0x%llX, backend_data=0x%llX\n"
                        ,*puVar7,puVar7[0x10],uVar9,uVar8);
        }
      }
      else if (((iVar2 == 2) && (DAT_180419160 != 0)) &&
              ((*(byte *)(DAT_180419160 + 0x2acd) & 1) != 0)) {
        uVar3 = puVar7[8];
        uVar4 = *puVar7;
        uVar5 = puVar7[7];
        pcVar10 = "[font] Texture #%03d: create %dx%d\n";
        goto LAB_18019a52d;
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar1 * 8 != lVar11);
  }
  return;
}

