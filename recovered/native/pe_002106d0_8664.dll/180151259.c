/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180151259 */

undefined4 FUN_180151259(void)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = DAT_180419160;
  uVar3 = FUN_18010f8ee();
  FUN_18010fcde(0,uVar3);
  uVar4 = FUN_180102463(*(float *)(lVar2 + 0xecc) - *(float *)(lVar2 + 0xdf8),0);
  *(undefined4 *)(lVar2 + 0x20d0) = *(undefined4 *)(lVar2 + 0xec8);
  *(undefined4 *)(lVar2 + 0x20d4) = uVar4;
  uVar4 = FUN_18011a456();
  uVar4 = FUN_18015109d("##MainMenuBar",uVar3,2,uVar4,0x508);
  *(undefined8 *)(lVar2 + 0x20d0) = 0;
  if ((char)uVar4 == '\0') {
    FUN_18010f900();
  }
  else {
    puVar1 = (uint *)(*(longlong *)(lVar2 + 0x1608) + 0x14);
    *puVar1 = *puVar1 & 0xfffffeff;
    FUN_180150cda();
  }
  return uVar4;
}

