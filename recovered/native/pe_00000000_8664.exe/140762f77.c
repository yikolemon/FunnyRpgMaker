/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140762f77 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140762f77(void)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint local_res8;
  
  uVar1 = (ulonglong)_DAT_150b006cd;
  if (local_res8 == 0) {
    uVar2 = _DAT_1509ee3db;
    if (*(int *)(uVar1 + 0x1fec) == 0) {
      return;
    }
  }
  else {
    *(undefined4 *)((ulonglong)local_res8 + 0x60) = *(undefined4 *)(uVar1 + 4);
    if (*(uint *)(uVar1 + 0x1fec) == local_res8) {
      return;
    }
    uVar2 = *(undefined4 *)((ulonglong)local_res8 + 0x30);
  }
  *(undefined4 *)(uVar1 + 0x1238) = uVar2;
  *(uint *)(uVar1 + 0x1fec) = local_res8;
  if (*(char *)(uVar1 + 0x76) == '\x01') {
    *(undefined4 *)(uVar1 + 0xcc8) = uVar2;
  }
  if ((local_res8 != 0) && (*(uint *)(uVar1 + 0xc7c) != 0)) {
    (*(code *)(ulonglong)*(uint *)(uVar1 + 0xc7c))();
  }
  return;
}

