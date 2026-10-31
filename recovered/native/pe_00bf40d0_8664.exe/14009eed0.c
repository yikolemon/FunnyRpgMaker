/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009eed0 */

ulonglong FUN_14009eed0(int *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  undefined4 extraout_var;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = param_1[1];
      lVar3 = FUN_14008d650();
      if (*(int *)(lVar3 + iVar1 + 4 + (longlong)iVar4 * 0x14) == 0) {
        lVar3 = 0;
      }
      else {
        iVar1 = param_1[1];
        lVar3 = FUN_14008d650();
        iVar1 = *(int *)(lVar3 + (longlong)iVar4 * 0x14 + 4 + (longlong)iVar1);
        lVar3 = FUN_14008d650();
        lVar3 = lVar3 + iVar1;
      }
      uVar2 = FUN_14008dbe0(lVar3 + 8,0x14013c670);
      in_RAX = CONCAT44(extraout_var,uVar2);
      if (uVar2 == 0) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *param_1);
  }
  return in_RAX & 0xffffffffffffff00;
}

