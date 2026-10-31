/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165606 */

undefined4 FUN_10165606(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x2308);
  if (iVar1 == 0) {
LAB_1016565c:
    uVar2 = 0;
  }
  else {
    if (*(int *)(iVar1 + 0x48) != param_1) {
      if (*(int *)(iVar1 + 0x48) != -1) {
        FUN_101654f7(iVar1);
      }
      if ((param_1 < 0) || (*(int *)(iVar1 + 0x40) <= param_1)) {
        FUN_100fcef5("TableSetColumnIndex() invalid column index!");
        goto LAB_1016565c;
      }
      FUN_10165661(iVar1,param_1);
    }
    uVar2 = CONCAT31((int3)((uint)*(int *)(iVar1 + 0x10) >> 8),
                     *(undefined1 *)(*(int *)(iVar1 + 0x10) + 0x6b + param_1 * 0x74));
  }
  return uVar2;
}

