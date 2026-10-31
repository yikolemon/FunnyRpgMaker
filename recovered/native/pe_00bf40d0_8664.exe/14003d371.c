/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003d371 */

void FUN_14003d371(longlong *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  uVar3 = 0;
  if ((uVar1 & 1) != 0) {
    uVar3 = *(uint *)(*(longlong *)(*param_1 + 0x90) + 0x70);
  }
  if (((uVar1 & 2) != 0) && (*(char *)((longlong)param_1 + 0x18a) != '\0')) {
    uVar3 = uVar3 | 0x100;
  }
  if (((uVar1 & 4) != 0) && (*(char *)((longlong)param_1 + 0x18b) != '\0')) {
    uVar3 = uVar3 | 0x200;
  }
  if (((uVar1 & 8) != 0) && (*(longlong *)(*param_1 + 0x408) != 0)) {
    uVar3 = uVar3 | 0x400;
  }
  if (((uVar1 & 0x20) != 0) && ((char)param_1[100] != '\0')) {
    uVar3 = uVar3 | 0x1000;
  }
  if ((*(int *)(*(longlong *)(*param_1 + 0x90) + 0x70) == 0x28) &&
     (iVar2 = (int)param_1[0x65], iVar2 != 2)) {
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

