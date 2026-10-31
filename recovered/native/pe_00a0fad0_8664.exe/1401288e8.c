/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401288e8 */

ulonglong FUN_1401288e8(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (-1 < param_2) {
    do {
      iVar2 = (iVar4 + param_2) / 2;
      in_RAX = FUN_1401156b0(*param_3,*(undefined8 *)((longlong)iVar2 * 0x10 + param_1));
      if ((int)in_RAX == 0) {
        lVar3 = param_1 + 8 + (longlong)iVar2 * 0x10;
        *param_3 = lVar3;
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      }
      iVar1 = iVar2 + -1;
      if (-1 < (int)in_RAX) {
        iVar4 = iVar2 + 1;
        iVar1 = param_2;
      }
      param_2 = iVar1;
    } while (iVar4 <= param_2);
  }
  return in_RAX & 0xffffffffffffff00;
}

