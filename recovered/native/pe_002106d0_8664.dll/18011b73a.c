/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b73a */

ulonglong FUN_18011b73a(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong unaff_RDI;
  
  lVar1 = DAT_180419160;
  uVar3 = FUN_18011b71f();
  cVar2 = FUN_180118d71(uVar3);
  if (cVar2 != '\0') {
    cVar2 = FUN_18010759c(0x20);
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    if (cVar2 != '\0') goto LAB_18011b790;
  }
  if (*(int *)(lVar1 + 0x2240) == param_2) {
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    cVar2 = FUN_1801077b9();
    if ((cVar2 != '\0') || (param_2 == *(int *)(*(longlong *)(lVar1 + 0x1608) + 0xc4)))
    goto LAB_18011b790;
  }
  unaff_RDI = 0;
LAB_18011b790:
  return unaff_RDI & 0xffffffff;
}

