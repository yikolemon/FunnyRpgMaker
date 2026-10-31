/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10128a26 */

void __fastcall FUN_10128a26(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_1039d74c;
  if (param_1 == 0) {
    iVar1 = *(int *)(DAT_1039d74c + 0x2048);
    iVar3 = FUN_10117072();
    *(int *)(iVar2 + 0x2048) = iVar3;
    *(undefined4 *)(iVar2 + 0x2094) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x2090) = 0xffffffff;
    if ((iVar1 != 0) && ((*(byte *)(iVar2 + 0x27b4) & 4) != 0)) {
      FUN_100f99e6("[focus] NavRestoreLayer: from \"%s\" to SetNavWindow(\"%s\")\n",
                   *(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar3 + 4));
    }
  }
  iVar1 = *(int *)(iVar2 + 0x2048);
  iVar3 = *(int *)(iVar1 + 0x3c4 + param_1 * 4);
  if (iVar3 == 0) {
    *(int *)(iVar2 + 0x2050) = param_1;
    FUN_1010c53d(iVar1,1);
  }
  else {
    FUN_1011714e(iVar3,param_1,0,iVar1 + param_1 * 0x10 + 0x3cc);
  }
  return;
}

