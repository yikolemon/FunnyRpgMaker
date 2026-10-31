/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c7d7b */

void FUN_1400c7d7b(undefined8 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  
  lVar6 = DAT_140f2a910;
  iVar2 = *param_2;
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_2 + 2);
    lVar9 = 0;
    do {
      iVar7 = *(int *)(lVar3 + lVar9);
      if (iVar7 == 1) {
        if ((*(byte *)(lVar6 + 0x2acc) & 0x40) != 0) {
          cVar1 = *(char *)(lVar3 + 4 + lVar9);
          pcVar8 = "Clear";
          if (cVar1 != '\0') {
            pcVar8 = "SelectAll";
          }
          FUN_1400772a6("[selection] %s: Request: SetAll %d (= %s)\n",param_1,cVar1,pcVar8);
          iVar7 = *(int *)(lVar3 + lVar9);
          goto LAB_1400c7df8;
        }
      }
      else {
LAB_1400c7df8:
        if ((iVar7 == 2) && ((*(byte *)(lVar6 + 0x2acc) & 0x40) != 0)) {
          uVar4 = *(undefined8 *)(lVar3 + 8 + lVar9);
          uVar5 = *(undefined8 *)(lVar3 + 0x10 + lVar9);
          FUN_1400772a6("[selection] %s: Request: SetRange %lld..%lld (0x%llX..0x%llX) = %d (dir %d)\n"
                        ,param_1,uVar4,uVar5,uVar4,uVar5,*(undefined1 *)(lVar3 + 4 + lVar9),
                        (int)*(char *)(lVar3 + 5 + lVar9));
        }
      }
      lVar9 = lVar9 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar9);
  }
  return;
}

