/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016a960 */

undefined8 FUN_18016a960(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x24f8);
  if (lVar1 == 0) {
LAB_18016a9bf:
    uVar2 = 0;
  }
  else {
    if (*(int *)(lVar1 + 0x74) != param_1) {
      if (*(int *)(lVar1 + 0x74) != -1) {
        FUN_18016a84c(lVar1);
      }
      if ((param_1 < 0) || (*(int *)(lVar1 + 0x6c) <= param_1)) {
        FUN_180101698("TableSetColumnIndex() invalid column index!");
        goto LAB_18016a9bf;
      }
      FUN_18016a9c8(lVar1,param_1);
    }
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0x18) >> 8),
                     *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x6b + (longlong)param_1 * 0x74))
    ;
  }
  return uVar2;
}

