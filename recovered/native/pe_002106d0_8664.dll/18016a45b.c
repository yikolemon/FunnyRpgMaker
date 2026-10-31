/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016a45b */

undefined1 * FUN_18016a45b(int param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x24f8);
  if (lVar1 == 0) {
    return (undefined1 *)0x0;
  }
  if (param_1 < 0) {
    puVar2 = (undefined1 *)FUN_18016a483(lVar1,*(undefined4 *)(lVar1 + 0x74));
    return puVar2;
  }
  puVar2 = &DAT_1803861e4;
  if (((*(char *)(lVar1 + 0x239) != '\0') || (param_1 < *(short *)(lVar1 + 0x206))) &&
     (lVar3 = (longlong)*(short *)(*(longlong *)(lVar1 + 0x18) + 0x54 + (longlong)param_1 * 0x74),
     lVar3 != -1)) {
    puVar2 = (undefined1 *)(lVar3 + *(longlong *)(lVar1 + 0x198));
  }
  return puVar2;
}

