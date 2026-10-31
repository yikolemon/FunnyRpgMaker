/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079aaad */

void FUN_14079aaad(undefined4 param_1,uint param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar11;
  int *piVar12;
  uint uVar13;
  longlong in_R10;
  int *unaff_R12;
  int unaff_R15D;
  ulonglong uVar10;
  
  uVar11 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  *(undefined4 *)(uVar11 + 4) = param_1;
  uVar3 = *(uint *)(uVar11 + 0x28);
  uVar9 = *(uint *)(uVar11 + 0x24);
  *(ulonglong *)(uVar11 - 8) = (ulonglong)uVar3;
  *(undefined8 *)(uVar11 - 0x10) = *(undefined8 *)(uVar11 + 0x1c);
  *(undefined8 *)(uVar11 - 0x18) = 0x14079aacc;
  uVar5 = FUN_140752553();
  piVar12 = (int *)(ulonglong)((int)(uVar11 - 0x10) + 8);
  uVar7 = piVar12[8];
  uVar13 = 0;
  if (0 < (int)uVar5) {
    do {
      uVar13 = 0;
      if (*(char *)(ulonglong)param_2 != *(char *)(ulonglong)uVar9) break;
      uVar13 = uVar5;
    } while (param_3 != unaff_R15D);
  }
  if (uVar3 != uVar13 || uVar7 != uVar13) {
    *piVar12 = uVar7 - uVar13;
    *(char **)(piVar12 + 2) = (char *)(ulonglong)param_2 + in_R10;
    uVar10 = 0;
    do {
      iVar8 = (int)uVar10;
      if (((int)(iVar8 + uVar7) <= (int)uVar13) || ((int)(iVar8 + uVar3) <= (int)uVar13)) break;
      pcVar1 = (char *)((uint)piVar12[2] + uVar10);
      pcVar2 = (char *)((uVar9 + uVar3) + uVar10);
      uVar7 = piVar12[8];
      uVar10 = (ulonglong)(iVar8 - 1);
    } while (*pcVar1 == *pcVar2);
    uVar9 = ~uVar13 + uVar7 + iVar8;
    if (-1 < (int)(~uVar13 + uVar3 + iVar8 & uVar9)) {
      *piVar12 = *piVar12 + iVar8;
      iVar4 = *(int *)((ulonglong)(uint)piVar12[1] + 4);
      *(ulonglong *)(piVar12 + -2) = (ulonglong)((uVar3 - uVar13) + iVar8);
      *(undefined8 *)(piVar12 + -4) = *(undefined8 *)(piVar12 + -1);
      piVar12[-6] = 0x4079ab62;
      piVar12[-5] = 1;
      puVar6 = (undefined1 *)FUN_1407aa189(iVar4 + 0x20,uVar13);
      if (-1 < (int)uVar9 && (int)puVar6 != 0) {
        do {
          *puVar6 = *(undefined1 *)(ulonglong)(param_2 + uVar13);
        } while (*unaff_R12 != 0);
      }
    }
  }
  return;
}

