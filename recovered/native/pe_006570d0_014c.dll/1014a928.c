/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014a928 */

void __fastcall FUN_1014a928(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  
  iVar8 = DAT_1039d74c;
  iVar2 = *param_2;
  if (iVar2 != 0) {
    iVar3 = param_2[2];
    iVar11 = 0;
    do {
      iVar9 = *(int *)(iVar3 + iVar11);
      if (iVar9 == 1) {
        if ((*(byte *)(iVar8 + 0x27b4) & 0x40) != 0) {
          cVar1 = *(char *)(iVar3 + 4 + iVar11);
          pcVar10 = "Clear";
          if (cVar1 != '\0') {
            pcVar10 = "SelectAll";
          }
          FUN_100f99e6("[selection] %s: Request: SetAll %d (= %s)\n",param_1,cVar1,pcVar10);
          iVar9 = *(int *)(iVar3 + iVar11);
          goto LAB_1014a993;
        }
      }
      else {
LAB_1014a993:
        if ((iVar9 == 2) && ((*(byte *)(iVar8 + 0x27b4) & 0x40) != 0)) {
          uVar4 = *(undefined4 *)(iVar3 + 0x10 + iVar11);
          uVar5 = *(undefined4 *)(iVar3 + 0x14 + iVar11);
          uVar6 = *(undefined4 *)(iVar3 + 8 + iVar11);
          uVar7 = *(undefined4 *)(iVar3 + 0xc + iVar11);
          FUN_100f99e6("[selection] %s: Request: SetRange %lld..%lld (0x%llX..0x%llX) = %d (dir %d)\n"
                       ,param_1,uVar6,uVar7,uVar4,uVar5,uVar6,uVar7,uVar4,uVar5,
                       *(undefined1 *)(iVar3 + 4 + iVar11),(int)*(char *)(iVar3 + 5 + iVar11));
        }
      }
      iVar11 = iVar11 + 0x18;
    } while (iVar2 * 0x18 != iVar11);
  }
  return;
}

