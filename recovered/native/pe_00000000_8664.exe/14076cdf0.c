/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076cdf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076cdf0(uint param_1)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uVar4 = (ulonglong)_DAT_150b0a544;
  if ((*(byte *)(uVar4 + 0x1e84) & 0x40) == 0) {
    if ((*(uint *)(uVar4 + 0x1e68) >> 0x12 & 1) == 0) {
      uVar1 = *(uint *)(uVar4 + 0x1e64);
    }
    else {
      *(byte *)(uVar4 + 0x1e89) = *(byte *)(uVar4 + 0x1e89) | 4;
      uVar1 = *(uint *)(uVar4 + 0x1e64);
      *(uint *)(uVar4 + 0x1ecc) = uVar1;
    }
    uStack_28 = (ulonglong)uVar1;
    uStack_20 = (ulonglong)(*(uint *)(uVar4 + 0x1e68) & 0x3fcff);
    uStack_18 = (ulonglong)param_1;
    cVar2 = FUN_14075e480();
    uVar3 = (ulonglong)((int)&uStack_28 + 0xc);
    if ((cVar2 != '\0') && (*(int *)(uVar4 + 0x2058) == 0)) {
      *(uint *)(uVar4 + 0x2058) = param_1;
      *(undefined4 *)(uVar4 + 0x2064) = 0x11;
      *(uint *)(uVar4 + 0x2060) = param_1;
      *(uint *)(uVar4 + 0x205c) = param_1;
      *(ulonglong *)(uVar3 - 8) = (ulonglong)param_1;
      *(undefined8 *)(uVar3 - 0x10) = 0x14076ce69;
      FUN_14076efd8();
    }
  }
  return;
}

