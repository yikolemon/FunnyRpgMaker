/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016646a */

undefined8 FUN_14016646a(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  ushort uVar3;
  undefined8 uVar4;
  
  puVar1 = *(ushort **)(param_1 + 0x28);
  if (puVar1 == (ushort *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x59) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x18);
    if ((*(uint *)(lVar2 + 0xc) <= (uint)*(ushort *)(lVar2 + 0x60) + (uint)*(ushort *)(lVar2 + 0x18)
        ) && (uVar4 = FUN_140128d2c(lVar2,0,1), (int)uVar4 != 0)) {
      return uVar4;
    }
    if (*puVar1 == 0) {
      uVar3 = 1;
      goto LAB_1401664cb;
    }
    *(ushort *)(*(longlong *)(puVar1 + 0xc) + (ulonglong)(*puVar1 - 1) * 2) = puVar1[1] - 1;
  }
  uVar3 = (short)*(undefined4 *)puVar1 + 1;
LAB_1401664cb:
  *puVar1 = uVar3;
  return 0;
}

