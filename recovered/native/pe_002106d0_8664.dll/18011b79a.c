/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b79a */

ulonglong FUN_18011b79a(uint param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong unaff_RDI;
  
  lVar1 = DAT_180419160;
  uVar3 = FUN_18011b71f();
  cVar2 = FUN_180118d71(uVar3);
  if (cVar2 != '\0') {
    cVar2 = FUN_18011689a(0x20);
    if (cVar2 != '\0') {
      unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
      if ((param_1 >> 8 & 1) == 0) goto LAB_18011b80b;
      cVar2 = FUN_180110c44();
      if (cVar2 == '\0') goto LAB_18011b80b;
    }
  }
  if ((*(int *)(lVar1 + 0x2244) != 0) && (*(int *)(*(longlong *)(lVar1 + 0x1608) + 0x10) != 0)) {
    cVar2 = FUN_1801167e8(*(undefined8 *)(lVar1 + 0x2200),*(longlong *)(lVar1 + 0x1608),0,0);
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    if (cVar2 != '\0') goto LAB_18011b80b;
  }
  unaff_RDI = 0;
LAB_18011b80b:
  return unaff_RDI & 0xffffffff;
}

