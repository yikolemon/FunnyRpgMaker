/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048fb67 */

undefined4 FUN_0048fb67(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (DAT_00521928 != (undefined4 *)0x0) {
    return 0;
  }
  puVar1 = FUN_0049cfb8();
  if (puVar1 == (uint *)0x0) {
    FUN_00495f00((LPVOID)0x0);
    return 0xffffffff;
  }
  puVar2 = FUN_0048fc4d((short *)puVar1);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    DAT_00521928 = puVar2;
    DAT_0052192c = puVar2;
  }
  FUN_00495f00((LPVOID)0x0);
  FUN_00495f00(puVar1);
  return uVar3;
}

