/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d4e84 */

undefined * Catch_100d4e84(void)

{
  code *pcVar1;
  char *_Str;
  size_t sVar2;
  int unaff_EBP;
  undefined1 auStack_20 [28];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_20;
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x18) + 4);
  *(undefined4 *)(unaff_EBP + -4) = 8;
  _Str = (char *)(*pcVar1)();
  sVar2 = _strlen(_Str);
  FUN_100180a6(_Str,sVar2);
  return &DAT_100d4dd5;
}

