/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043be0d */

void __fastcall FUN_0043be0d(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  uVar3 = 0;
  if ((uVar1 & 1) != 0) {
    uVar3 = *(uint *)(*(int *)(*param_1 + 0x60) + 0x38);
  }
  if (((uVar1 & 2) != 0) && (*(char *)((int)param_1 + 0xe6) != '\0')) {
    uVar3 = uVar3 | 0x100;
  }
  if (((uVar1 & 4) != 0) && (*(char *)((int)param_1 + 0xe7) != '\0')) {
    uVar3 = uVar3 | 0x200;
  }
  if (((uVar1 & 8) != 0) && (*(int *)(*param_1 + 0x2e0) != 0)) {
    uVar3 = uVar3 | 0x400;
  }
  if (((uVar1 & 0x20) != 0) && ((char)param_1[0x80] != '\0')) {
    uVar3 = uVar3 | 0x1000;
  }
  if ((*(int *)(*(int *)(*param_1 + 0x60) + 0x38) == 0x28) && (iVar2 = param_1[0x82], iVar2 != 2)) {
    uVar3 = uVar3 | uVar1 << 7 & 0x2000;
    uVar4 = uVar3 | 0x8000;
    if (iVar2 != 4) {
      uVar4 = uVar3;
    }
    if ((uVar1 >> 8 & 1) == 0) {
      uVar4 = uVar3;
    }
    uVar3 = uVar1 << 7 & 0x60000 | uVar4;
    if (((uVar1 >> 0xc & 1) != 0) && (2 < iVar2 - 2U)) {
      uVar3 = uVar3 | 0x80000;
    }
  }
  *param_2 = uVar3;
  return;
}

