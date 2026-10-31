/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140173d9c */

undefined8 FUN_140173d9c(longlong param_1,uint param_2,undefined8 *param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(ushort *)(param_1 + 0x174) <= param_2) {
    return 0x10;
  }
  lVar2 = *(longlong *)(param_1 + 0x2d8);
  if (lVar2 == 0) {
    return 7;
  }
  uVar4 = (**(code **)(lVar2 + 0x20))(0);
  *param_3 = uVar4;
  iVar3 = *(int *)(param_1 + 0x270);
  if (iVar3 == 0x10000) {
    if (*(short *)(param_1 + 0x174) != 0x102) {
      return 0;
    }
  }
  else {
    if ((iVar3 != 0x25000) && (iVar3 != 0x20000)) {
      return 0;
    }
    if ((*(char *)(param_1 + 0x358) == '\0') && (iVar3 = FUN_140178489(param_1), iVar3 != 0)) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0x35a) <= param_2) {
      return 0;
    }
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x360) + (ulonglong)param_2 * 2);
    param_2 = (uint)uVar1;
    if (0x101 < uVar1) {
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x368) + -0x810 + (ulonglong)(uint)uVar1 * 8);
      goto LAB_140173e58;
    }
  }
  uVar4 = (**(code **)(lVar2 + 0x20))(param_2);
LAB_140173e58:
  *param_3 = uVar4;
  return 0;
}

