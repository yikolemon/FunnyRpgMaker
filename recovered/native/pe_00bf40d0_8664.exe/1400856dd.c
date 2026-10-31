/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400856dd */

uint FUN_1400856dd(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  
  uVar4 = *(uint *)(param_1 + 0x3c);
  if (((*(char *)(param_1 + 0x20) != '\0') ||
      (uVar3 = *(uint *)(param_1 + 0x18), *(uint *)(param_1 + 0x1c) <= uVar3)) ||
     (*(uint *)(param_1 + 0x44) <= *(uint *)(param_1 + 0x40))) {
    if (*(uint *)(param_1 + 0x44) <= *(uint *)(param_1 + 0x40)) {
      uVar4 = uVar4 + 1;
      *(uint *)(param_1 + 0x3c) = uVar4;
      if (0x10 < uVar4) {
        return 0xffffffff;
      }
      if (uVar4 < *(uint *)(param_1 + 0x30)) {
        iVar1 = (1 << ((byte)uVar4 & 0x1f)) + -0x100;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x38) + 1;
      }
      *(int *)(param_1 + 0x44) = iVar1;
    }
    if (*(char *)(param_1 + 0x20) != '\0') {
      *(undefined4 *)(param_1 + 0x3c) = 9;
      *(undefined4 *)(param_1 + 0x44) = 0x100;
      *(undefined1 *)(param_1 + 0x20) = 0;
      uVar4 = 9;
    }
    iVar1 = FUN_140085bbf(param_1);
    uVar3 = 0;
    if (iVar1 < 0) {
      return 0xffffffff;
    }
  }
  *(uint *)(param_1 + 0x18) = uVar3 + uVar4;
  uVar5 = (ulonglong)(uVar3 >> 3);
  uVar3 = uVar3 & 7;
  uVar2 = (uint)(*(byte *)(param_1 + 8 + uVar5) >> (sbyte)uVar3);
  iVar1 = 8 - uVar3;
  uVar4 = uVar4 - iVar1;
  if (uVar4 < 8) {
    pbVar6 = (byte *)(uVar5 + param_1 + 9);
  }
  else {
    pbVar6 = (byte *)(uVar5 + param_1 + 10);
    uVar2 = uVar2 | (uint)*(byte *)(uVar5 + param_1 + 9) << ((byte)iVar1 & 0x1f);
    iVar1 = 0x10 - uVar3;
    uVar4 = uVar4 - 8;
  }
  if (uVar4 != 0) {
    uVar2 = uVar2 | (~(-1 << ((byte)uVar4 & 0x1f)) & (uint)*pbVar6) << ((byte)iVar1 & 0x1f);
  }
  return uVar2;
}

