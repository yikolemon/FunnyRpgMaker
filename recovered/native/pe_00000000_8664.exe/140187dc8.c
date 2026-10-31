/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140187dc8 */

ulonglong FUN_140187dc8(longlong param_1,uint param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x10f0);
  uVar1 = uVar4 - param_2;
  if (uVar4 < param_2 || uVar1 == 0) {
LAB_140187e14:
    if (param_2 < uVar4 || param_2 - uVar4 == 0) {
LAB_140187e40:
      if (param_4 == 0) goto LAB_140187e8f;
    }
    else {
      iVar2 = FUN_140187ee8(param_1,param_2 - uVar4);
      if (param_4 == 0) {
        return 0;
      }
      if (iVar2 != 0) {
        return 0;
      }
    }
    uVar3 = 0;
    do {
      uVar4 = *(int *)(param_1 + 0x1100) - (int)*(undefined8 *)(param_1 + 0x10f8);
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
      FUN_1401c5180(uVar3 + param_3,*(undefined8 *)(param_1 + 0x10f8),(ulonglong)uVar4);
      uVar3 = (ulonglong)((int)uVar3 + uVar4);
      *(longlong *)(param_1 + 0x10f8) = *(longlong *)(param_1 + 0x10f8) + (ulonglong)uVar4;
      *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + uVar4;
      param_4 = param_4 - uVar4;
    } while ((param_4 != 0) && (iVar2 = FUN_140187f63(param_1), iVar2 == 0));
  }
  else {
    if (uVar1 <= ((int)*(longlong *)(param_1 + 0x10f8) - (int)param_1) - 0xf0U) {
      *(ulonglong *)(param_1 + 0x10f8) = *(longlong *)(param_1 + 0x10f8) - (ulonglong)uVar1;
      *(uint *)(param_1 + 0x10f0) = param_2;
      goto LAB_140187e40;
    }
    iVar2 = FUN_140187e9e(param_1);
    if (iVar2 == 0) {
      uVar4 = *(uint *)(param_1 + 0x10f0);
      goto LAB_140187e14;
    }
LAB_140187e8f:
    uVar3 = 0;
  }
  return uVar3;
}

