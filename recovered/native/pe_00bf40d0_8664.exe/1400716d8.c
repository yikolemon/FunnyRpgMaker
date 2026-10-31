/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400716d8 */

void FUN_1400716d8(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  uVar2 = *(ulonglong *)(param_1 + 0x1e8);
  if (uVar2 != 0) {
    if ((ulonglong)*(uint *)(param_1 + 0x1dc) != 0) {
      uVar3 = uVar2 + (ulonglong)*(uint *)(param_1 + 0x1dc) * 0x18;
      do {
        FUN_14001c53d(lVar1,*(longlong *)(uVar2 + 0x10));
        *(undefined8 *)(uVar2 + 0x10) = 0;
        uVar2 = uVar2 + 0x18;
      } while (uVar2 < uVar3);
      uVar2 = *(ulonglong *)(param_1 + 0x1e8);
    }
    FUN_14001c53d(lVar1,uVar2);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x1f8);
  if (uVar2 != 0) {
    if ((ulonglong)*(uint *)(param_1 + 0x1f0) != 0) {
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x1f0) * 0x10 + uVar2;
      do {
        FUN_14001c53d(lVar1,*(longlong *)(uVar2 + 8));
        *(undefined8 *)(uVar2 + 8) = 0;
        uVar2 = uVar2 + 0x10;
      } while (uVar2 < uVar3);
      uVar2 = *(ulonglong *)(param_1 + 0x1f8);
    }
    FUN_14001c53d(lVar1,uVar2);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  *(undefined8 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined2 *)(param_1 + 0x1d8) = 0;
  return;
}

