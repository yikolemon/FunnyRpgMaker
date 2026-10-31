/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012f40b */

void FUN_18012f40b(undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  ulonglong uVar7;
  
  lVar4 = DAT_180419160;
  iVar1 = *(int *)(DAT_180419160 + 0x15a8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(DAT_180419160 + 0x15b0);
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
      puVar6 = &DAT_18036b91b;
    }
    else {
      puVar6 = *(undefined **)(*(longlong *)(param_1 + 0x1e) + 8);
    }
    FUN_1800fdfea("[viewport] Delete Viewport %08X \'%s\'\n",*param_1,puVar6);
  }
  FUN_18011e4d3(param_1);
  uVar7 = (ulonglong)(int)param_1[0x20];
  FUN_1802a82f0(*(longlong *)(lVar4 + 0x2180) + uVar7 * 8,
                *(longlong *)(lVar4 + 0x2180) + uVar7 * 8 + 8,
                (~uVar7 + (longlong)*(int *)(lVar4 + 0x2178)) * 8);
  *(int *)(lVar4 + 0x2178) = *(int *)(lVar4 + 0x2178) + -1;
  FUN_18012f56c(param_1);
  return;
}

