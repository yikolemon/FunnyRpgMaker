/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015a93b */

void FUN_14015a93b(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  FUN_14015aa2f();
  *(undefined1 *)(param_1 + 0x30) = 1;
  if ((*(uint *)(lVar1 + 8) <= (uint)*(ushort *)(lVar1 + 0x62) + (uint)*(ushort *)(lVar1 + 0x1a)) ||
     (*(uint *)(lVar1 + 0xc) <= (uint)*(ushort *)(lVar1 + 0x60) + (uint)*(ushort *)(lVar1 + 0x18)))
  {
    iVar2 = FUN_140128d2c(lVar1,1,1);
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_14015a8d7(param_1,param_2);
  return;
}

