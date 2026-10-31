/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009d4a0 */

ulonglong FUN_14009d4a0(longlong param_1)

{
  bool bVar1;
  undefined7 extraout_var;
  longlong lVar3;
  ulonglong uVar2;
  
  bVar1 = FUN_14009d420((short *)&IMAGE_DOS_HEADER_140000000);
  uVar2 = CONCAT71(extraout_var,bVar1);
  if ((int)uVar2 != 0) {
    lVar3 = FUN_14009d450(0x140000000,param_1 - 0x140000000);
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = (ulonglong)(~*(uint *)(lVar3 + 0x24) >> 0x1f);
    }
  }
  return uVar2;
}

