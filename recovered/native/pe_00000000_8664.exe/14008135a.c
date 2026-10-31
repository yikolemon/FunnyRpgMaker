/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008135a */

void FUN_14008135a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar4 = DAT_140f2a910;
  FUN_140081404(param_1,0);
  FUN_140080508(*(undefined4 *)(param_1 + 0xc4),param_1);
  if (*(char *)(lVar4 + 0x7e) == '\x01') {
    *(undefined1 *)(lVar4 + 0x21f4) = 0;
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x428) + 0x60);
  *(ulonglong *)(lVar4 + 0x1694) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(lVar4 + 0xafc) >> 0x20) -
                (float)((ulonglong)uVar1 >> 0x20),
                (float)*(undefined8 *)(lVar4 + 0xafc) - (float)uVar1);
  *(undefined1 *)(lVar4 + 0x168a) = 1;
  FUN_1400815f4();
  if (((*(byte *)(param_1 + 0x14) & 4) != 0) ||
     (bVar3 = true, (*(byte *)(*(longlong *)(param_1 + 0x428) + 0x14) & 4) != 0)) {
    bVar3 = false;
  }
  if ((*(longlong *)(param_1 + 0x4c8) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0x98), lVar2 != 0)) {
    bVar3 = (bool)(bVar3 & (*(byte *)(lVar2 + 0x14) & 4) == 0);
  }
  if (bVar3) {
    *(longlong *)(lVar4 + 0x1628) = param_1;
  }
  return;
}

