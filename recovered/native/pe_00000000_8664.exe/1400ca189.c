/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ca189 */

undefined4 FUN_1400ca189(void)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = DAT_140f2a910;
  uVar3 = FUN_140088c06();
  FUN_140088ff6(0,uVar3);
  uVar4 = FUN_14007b71f(*(float *)(lVar2 + 0xecc) - *(float *)(lVar2 + 0xdf8),0);
  *(undefined4 *)(lVar2 + 0x20d0) = *(undefined4 *)(lVar2 + 0xec8);
  *(undefined4 *)(lVar2 + 0x20d4) = uVar4;
  uVar4 = FUN_14009376e();
  uVar4 = FUN_1400c9fcd("##MainMenuBar",uVar3,2,uVar4,0x508);
  *(undefined8 *)(lVar2 + 0x20d0) = 0;
  if ((char)uVar4 == '\0') {
    FUN_140088c18();
  }
  else {
    puVar1 = (uint *)(*(longlong *)(lVar2 + 0x1608) + 0x14);
    *puVar1 = *puVar1 & 0xfffffeff;
    FUN_1400c9c0a();
  }
  return uVar4;
}

