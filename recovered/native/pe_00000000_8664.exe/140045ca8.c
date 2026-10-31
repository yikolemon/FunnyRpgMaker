/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140045ca8 */

void FUN_140045ca8(void)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140088c06();
  FUN_1400564dc(&local_20,*(undefined8 *)(lVar1 + 0x60));
  iVar2 = local_20 + 3;
  if (-1 < local_20) {
    iVar2 = local_20;
  }
  local_28 = 0;
  local_30 = CONCAT44((float)(local_1c / 6),(float)(iVar2 >> 2));
  FUN_14008fda3(&local_30,4,&local_28);
  local_28 = CONCAT44((float)((local_1c * 2) / 3),(float)(local_20 / 2));
  FUN_140085d59(&local_28,4);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

