/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b570 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075b570(char *param_1)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  pcVar3 = (char *)(ulonglong)_DAT_1e3080c71039d74c;
  cVar2 = (char)_DAT_1e3080c71039d74c;
  *pcVar3 = *pcVar3 + cVar2;
  uVar1 = LocalDescriptorTableRegister();
  *(undefined4 *)pcVar3 = uVar1;
  *(undefined1 *)(unaff_RSI + unaff_RBX) = *(undefined1 *)(unaff_RSI + unaff_RBX);
  *param_1 = *param_1 + cVar2;
  FUN_140763ee7();
  return;
}

