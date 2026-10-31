/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192847 */

void FUN_10192847(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x3c);
    iVar4 = 0;
    do {
      puVar3 = *(undefined4 **)(iVar2 + iVar4);
      iVar10 = puVar3[1];
      if (iVar10 == 4) {
        if ((DAT_1039d74c != 0) && ((*(byte *)(DAT_1039d74c + 0x27b5) & 1) != 0)) {
          iVar5 = puVar3[2];
          uVar6 = FUN_1011e14d(puVar3[4],puVar3[5],iVar5);
          iVar10 = (int)((ulonglong)uVar6 >> 0x20);
          uVar6 = CONCAT44((int)uVar6,puVar3[8]);
          uVar9 = puVar3[7];
          uVar8 = *puVar3;
          pcVar7 = "[font] Texture #%03d: destroy %dx%d, texid=0x%llX, backend_data=%p\n";
LAB_10192935:
          FUN_100f99e6(pcVar7,uVar8,uVar9,uVar6,iVar10,iVar5);
        }
      }
      else if (iVar10 == 3) {
        if ((DAT_1039d74c != 0) && ((*(byte *)(DAT_1039d74c + 0x27b5) & 1) != 0)) {
          iVar10 = puVar3[2];
          iVar5 = iVar10 >> 0x1f;
          uVar6 = FUN_1011e14d(puVar3[4],puVar3[5],iVar10);
          uVar9 = puVar3[0xf];
          uVar8 = *puVar3;
          pcVar7 = "[font] Texture #%03d: update %d regions, texid=0x%llX, backend_data=0x%llX\n";
          goto LAB_10192935;
        }
      }
      else if (((iVar10 == 2) && (DAT_1039d74c != 0)) &&
              ((*(byte *)(DAT_1039d74c + 0x27b5) & 1) != 0)) {
        FUN_100f99e6("[font] Texture #%03d: create %dx%d\n",*puVar3,puVar3[7],puVar3[8]);
      }
      iVar4 = iVar4 + 4;
    } while (iVar1 << 2 != iVar4);
  }
  return;
}

