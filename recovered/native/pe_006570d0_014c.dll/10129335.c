/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10129335 */

void __fastcall FUN_10129335(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  iVar5 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x1484);
  if (iVar1 != 0) {
    iVar2 = *(int *)(DAT_1039d74c + 0x148c);
    iVar7 = 0;
    do {
      iVar3 = *(int *)(iVar2 + iVar7);
      if (*(undefined4 **)(iVar3 + 0x3c) == param_1) {
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        *(undefined1 *)(iVar3 + 0xf8) = 0;
      }
      iVar7 = iVar7 + 4;
    } while (iVar1 << 2 != iVar7);
  }
  if (param_1 == *(undefined4 **)(iVar5 + 0x1ff4)) {
    *(undefined4 *)(iVar5 + 0x1ff4) = 0;
  }
  if ((*(byte *)(iVar5 + 0x27b5) & 8) != 0) {
    if (param_1[0x16] == 0) {
      puVar6 = &DAT_1033b7f1;
    }
    else {
      puVar6 = *(undefined **)(param_1[0x16] + 4);
    }
    FUN_100f99e6("[viewport] Delete Viewport %08X \'%s\'\n",*param_1,puVar6);
  }
  FUN_10119462(param_1);
  uVar4 = param_1[0x17];
  FUN_1025b2d0(*(int *)(iVar5 + 0x1fe8) + uVar4 * 4,*(int *)(iVar5 + 0x1fe8) + uVar4 * 4 + 4,
               (~uVar4 + *(int *)(iVar5 + 0x1fe0)) * 4);
  *(int *)(iVar5 + 0x1fe0) = *(int *)(iVar5 + 0x1fe0) + -1;
  FUN_10129457(param_1);
  return;
}

