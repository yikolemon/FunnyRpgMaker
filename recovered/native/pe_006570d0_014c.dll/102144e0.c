/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102144e0 */

undefined4 FUN_102144e0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(ushort *)(param_1 + 0x108) <= param_2) {
    return 0x10;
  }
  iVar1 = *(int *)(param_1 + 0x220);
  if (iVar1 == 0) {
    return 7;
  }
  uVar2 = (**(code **)(iVar1 + 0x10))(0);
  *param_3 = uVar2;
  iVar3 = *(int *)(param_1 + 0x1dc);
  if (iVar3 == 0x10000) {
    if (*(short *)(param_1 + 0x108) != 0x102) {
      return 0;
    }
  }
  else {
    if ((iVar3 != 0x25000) && (iVar3 != 0x20000)) {
      return 0;
    }
    if ((*(char *)(param_1 + 0x27c) == '\0') && (iVar3 = FUN_10218787(), iVar3 != 0)) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0x27e) <= param_2) {
      return 0;
    }
    param_2 = (uint)*(ushort *)(*(int *)(param_1 + 0x284) + param_2 * 2);
    if (0x101 < param_2) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x288) + -0x408 + param_2 * 4);
      goto LAB_1021459d;
    }
  }
  uVar2 = (**(code **)(iVar1 + 0x10))(param_2);
LAB_1021459d:
  *param_3 = uVar2;
  return 0;
}

