/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10129307 */

undefined4 __fastcall FUN_10129307(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  if ((*(byte *)(DAT_1039d74c + 0x35) & 0x20) == 0) {
    iVar1 = DAT_1039d74c;
    if (*(int *)(param_1 + 0x38) != param_2) {
LAB_10129317:
      return CONCAT31((int3)((uint)*(int *)(param_1 + 100) >> 8),
                      *(int *)(param_2 + 100) < *(int *)(param_1 + 100));
    }
  }
  else {
    do {
      if ((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0x38), iVar1 == 0)) goto LAB_10129317;
    } while (iVar1 != param_2);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

