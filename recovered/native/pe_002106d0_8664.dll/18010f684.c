/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010f684 */

void FUN_18010f684(short *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = DAT_180419160;
  iVar2 = *(int *)(DAT_180419160 + 0x15d8);
  iVar3 = (int)*param_1;
  if (iVar3 < iVar2) {
    do {
      if ((*(byte *)(*(longlong *)(lVar1 + 0x1608) + 0x17) & 1) == 0) {
        FUN_180101698("Missing End()");
        FUN_18010f900();
      }
      else if ((*(longlong *)(lVar1 + 0x24f8) == 0) ||
              (*(longlong *)(*(longlong *)(lVar1 + 0x24f8) + 0x188) != *(longlong *)(lVar1 + 0x1608)
              )) {
        FUN_180101698("Missing EndChild()");
        FUN_180111339();
      }
      else {
        FUN_180101698("Missing EndTable()");
        FUN_180168430();
      }
      iVar2 = *(int *)(lVar1 + 0x15d8);
      iVar3 = (int)*param_1;
    } while (iVar3 < iVar2);
  }
  if (iVar2 != iVar3) {
    return;
  }
  FUN_1801161e6(param_1);
  return;
}

