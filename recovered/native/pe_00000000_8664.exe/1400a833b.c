/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a833b */

void FUN_1400a833b(undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  ulonglong uVar7;
  
  lVar4 = DAT_140f2a910;
  iVar1 = *(int *)(DAT_140f2a910 + 0x15a8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(DAT_140f2a910 + 0x15b0);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (*(undefined4 **)(lVar3 + 0x48) == param_1) {
        *(undefined8 *)(lVar3 + 0x48) = 0;
        *(undefined1 *)(lVar3 + 0x108) = 0;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if (param_1 == *(undefined4 **)(lVar4 + 0x2198)) {
    *(undefined8 *)(lVar4 + 0x2198) = 0;
  }
  if ((*(byte *)(lVar4 + 0x2acd) & 8) != 0) {
    if (*(longlong *)(param_1 + 0x1e) == 0) {
      puVar6 = &DAT_140ecc340;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(param_1 + 0x1e) + 8);
    }
    FUN_1400772a6("[viewport] Delete Viewport %08X \'%s\'\n",*param_1,puVar6);
  }
  FUN_14009778f(param_1);
  uVar7 = (ulonglong)(int)param_1[0x20];
  FUN_1401c5180(*(longlong *)(lVar4 + 0x2180) + uVar7 * 8,
                *(longlong *)(lVar4 + 0x2180) + uVar7 * 8 + 8,
                (~uVar7 + (longlong)*(int *)(lVar4 + 0x2178)) * 8);
  *(int *)(lVar4 + 0x2178) = *(int *)(lVar4 + 0x2178) + -1;
  FUN_1400a849c(param_1);
  return;
}

