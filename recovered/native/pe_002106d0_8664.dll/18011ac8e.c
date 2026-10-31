/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011ac8e */

void FUN_18011ac8e(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = DAT_180419160;
  uVar2 = FUN_180106d4e(*(undefined8 *)(DAT_180419160 + 0x1608),param_1,0);
  if ((*(byte *)(lVar1 + 0x2acc) & 8) != 0) {
    FUN_1800fdfea("[popup] OpenPopup(\"%s\" -> 0x%08X)\n",param_1,uVar2);
  }
  FUN_18011ace5(uVar2,param_2);
  return;
}

