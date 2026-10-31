/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180061ed8 */

undefined1 * FUN_180061ed8(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong local_50 [2];
  undefined1 local_40 [32];
  longlong local_20 [2];
  
  local_20[1] = 0xfffffffffffffffe;
  local_20[0] = param_1;
  FUN_180044980(&DAT_1804178e0);
  if (param_1 == 0) {
    puVar2 = &DAT_1803861e4;
  }
  else {
    lVar1 = FUN_1800623da(&DAT_180417950,local_20);
    if (lVar1 == DAT_180417950) {
      FUN_18005affb(local_40,local_20[0]);
      FUN_180061fd7(local_40);
      FUN_180066e5e(&DAT_180417950,local_50,local_20,local_40);
      FUN_180001ef2(local_40);
      lVar1 = local_50[0];
    }
    if (*(ulonglong *)(lVar1 + 0x58) < 0x10) {
      puVar2 = (undefined1 *)(lVar1 + 0x40);
    }
    else {
      puVar2 = *(undefined1 **)(lVar1 + 0x40);
    }
  }
  FUN_18023d6e0(&DAT_1804178e0);
  return puVar2;
}

