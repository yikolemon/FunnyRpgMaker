/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140093f4a */

void FUN_140093f4a(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = DAT_140f2a910;
  uVar2 = FUN_140080066(*(undefined8 *)(DAT_140f2a910 + 0x1608),param_1,0);
  if ((*(byte *)(lVar1 + 0x2acc) & 8) != 0) {
    FUN_1400772a6("[popup] OpenPopup(\"%s\" -> 0x%08X)\n",param_1,uVar2);
  }
  FUN_140093fa1(uVar2,param_2);
  return;
}

