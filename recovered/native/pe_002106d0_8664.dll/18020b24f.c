/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020b24f */

void FUN_18020b24f(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  FUN_18020b343();
  *(undefined1 *)(param_1 + 0x30) = 1;
  if ((*(uint *)(lVar1 + 8) <= (uint)*(ushort *)(lVar1 + 0x62) + (uint)*(ushort *)(lVar1 + 0x1a)) ||
     (*(uint *)(lVar1 + 0xc) <= (uint)*(ushort *)(lVar1 + 0x60) + (uint)*(ushort *)(lVar1 + 0x18)))
  {
    iVar2 = FUN_1801c9d58(lVar1,1,1);
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_18020b1eb(param_1,param_2);
  return;
}

