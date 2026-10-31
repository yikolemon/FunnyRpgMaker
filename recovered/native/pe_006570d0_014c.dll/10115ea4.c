/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115ea4 */

void FUN_10115ea4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_1039d74c;
  uVar2 = FUN_101021d4(param_1,0);
  if ((*(byte *)(iVar1 + 0x27b4) & 8) != 0) {
    FUN_100f99e6("[popup] OpenPopup(\"%s\" -> 0x%08X)\n",param_1,uVar2);
  }
  FUN_10115eed(uVar2,param_2);
  return;
}

