/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180001071 */

longlong FUN_180001071(void)

{
  longlong lVar1;
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = (*DAT_180417490)();
  if ((lVar1 != 0) && (DAT_180417498 != '\0')) {
    FUN_180001254(local_38,L"nw.dll");
    FUN_18001419c(local_38);
    FUN_1800010ec(local_38);
  }
  return lVar1;
}

