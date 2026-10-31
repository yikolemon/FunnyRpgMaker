/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cd0f2 */

/* WARNING: Heritage AFTER dead removal. Example location: RCX : 0x0001408cd114 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1408cd0f2(undefined8 param_1,byte param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong unaff_RBP;
  
  pbVar2 = (byte *)(ulonglong)_DAT_75fff883103a9048;
  *(undefined1 *)(unaff_RBP + 0x19) = 0;
  *(byte *)(unaff_RBP + 0x32) = *(byte *)(unaff_RBP + 0x32) & param_2;
  pbVar1 = pbVar2 + 0x18;
  *pbVar1 = *pbVar1 + (char)((ulonglong)param_1 >> 8);
  FUN_1408ccece(param_1,param_2 ^ *pbVar2);
  return;
}

