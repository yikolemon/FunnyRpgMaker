/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011760d */

void FUN_14011760d(int param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  uVar2 = (param_3 ^ 1) & 0xff;
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1608) + 0x208);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x10) == param_1) && (*(uint *)(lVar1 + 4) == uVar2)) {
      return;
    }
    FUN_1401171d1();
  }
  if (param_1 == 1) {
    return;
  }
  FUN_140116b44(param_2,param_1,uVar2);
  return;
}

