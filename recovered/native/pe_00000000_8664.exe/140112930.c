/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112930 */

undefined8 FUN_140112930(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x24f8);
  if (lVar1 == 0) {
LAB_14011298f:
    uVar2 = 0;
  }
  else {
    if (*(int *)(lVar1 + 0x74) != param_1) {
      if (*(int *)(lVar1 + 0x74) != -1) {
        FUN_14011281c(lVar1);
      }
      if ((param_1 < 0) || (*(int *)(lVar1 + 0x6c) <= param_1)) {
        FUN_14007a954("TableSetColumnIndex() invalid column index!");
        goto LAB_14011298f;
      }
      FUN_140112998(lVar1,param_1);
    }
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0x18) >> 8),
                     *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x6b + (longlong)param_1 * 0x74))
    ;
  }
  return uVar2;
}

