/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014ce39 */

undefined4 FUN_1014ce39(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  iVar2 = DAT_1039d74c;
  uVar3 = FUN_1010ad36();
  FUN_1010b0a7(0,uVar3);
  fVar4 = (float10)FUN_100fdbca(*(float *)(iVar2 + 0xde4) - *(float *)(iVar2 + 0xd10),0);
  *(undefined4 *)(iVar2 + 0x1f60) = *(undefined4 *)(iVar2 + 0xde0);
  *(float *)(iVar2 + 0x1f64) = (float)fVar4;
  fVar4 = (float10)FUN_101155f9();
  uVar3 = FUN_1014cc8b("##MainMenuBar",uVar3,2,(float)fVar4,0x508);
  *(undefined4 *)(iVar2 + 0x1f60) = 0;
  *(undefined4 *)(iVar2 + 0x1f64) = 0;
  if ((char)uVar3 == '\0') {
    FUN_1010ad44();
  }
  else {
    puVar1 = (uint *)(*(int *)(iVar2 + 0x14cc) + 0xc);
    *puVar1 = *puVar1 & 0xfffffeff;
    FUN_1014c8c1();
  }
  return uVar3;
}

