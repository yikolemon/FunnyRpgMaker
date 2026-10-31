/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401648ed */

undefined8 FUN_1401648ed(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  param_2 = param_2 + 1;
  do {
    param_2 = param_2 + -1;
    if (param_2 < 1) {
      goto LAB_140164943;
    }
    lVar2 = FUN_14016463e(param_1,0);
  } while (lVar2 != 0);
LAB_14016491e:
  uVar3 = 0xa0;
LAB_140164923:
  if (DAT_140f17b40 != (local_18 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
  }
  return uVar3;
  while( true ) {
    iVar1 = FUN_140164696(lVar2,local_20);
    uVar3 = 0;
    if ((iVar1 == 0x14) || (iVar1 == 0x11)) break;
LAB_140164943:
    lVar2 = FUN_14016463e(param_1,&local_20);
    if (lVar2 == 0) goto LAB_14016491e;
  }
  goto LAB_140164923;
}

