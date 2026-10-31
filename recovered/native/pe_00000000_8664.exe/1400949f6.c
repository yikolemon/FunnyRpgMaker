/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400949f6 */

ulonglong FUN_1400949f6(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong unaff_RDI;
  
  lVar1 = DAT_140f2a910;
  uVar3 = FUN_1400949db();
  cVar2 = FUN_140092089(uVar3);
  if (cVar2 != '\0') {
    cVar2 = FUN_1400808b4(0x20);
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    if (cVar2 != '\0') goto LAB_140094a4c;
  }
  if (*(int *)(lVar1 + 0x2240) == param_2) {
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    cVar2 = FUN_140080ad1();
    if ((cVar2 != '\0') || (param_2 == *(int *)(*(longlong *)(lVar1 + 0x1608) + 0xc4)))
    goto LAB_140094a4c;
  }
  unaff_RDI = 0;
LAB_140094a4c:
  return unaff_RDI & 0xffffffff;
}

