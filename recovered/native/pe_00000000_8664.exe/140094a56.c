/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140094a56 */

ulonglong FUN_140094a56(uint param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong unaff_RDI;
  
  lVar1 = DAT_140f2a910;
  uVar3 = FUN_1400949db();
  cVar2 = FUN_140092089(uVar3);
  if (cVar2 != '\0') {
    cVar2 = FUN_14008fbb2(0x20);
    if (cVar2 != '\0') {
      unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
      if ((param_1 >> 8 & 1) == 0) goto LAB_140094ac7;
      cVar2 = FUN_140089f5c();
      if (cVar2 == '\0') goto LAB_140094ac7;
    }
  }
  if ((*(int *)(lVar1 + 0x2244) != 0) && (*(int *)(*(longlong *)(lVar1 + 0x1608) + 0x10) != 0)) {
    cVar2 = FUN_14008fb00(*(undefined8 *)(lVar1 + 0x2200),*(longlong *)(lVar1 + 0x1608),0,0);
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    if (cVar2 != '\0') goto LAB_140094ac7;
  }
  unaff_RDI = 0;
LAB_140094ac7:
  return unaff_RDI & 0xffffffff;
}

