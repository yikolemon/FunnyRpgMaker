/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180151e40 */

undefined8 FUN_180151e40(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(int *)(DAT_180419160 + 0x2158) < *(int *)(DAT_180419160 + 0x2148)) &&
     (lVar1 = *(longlong *)(DAT_180419160 + 0x1608), (*(byte *)(lVar1 + 0x17) & 0x10) == 0)) {
    lVar3 = (longlong)*(int *)(DAT_180419160 + 0x2158) * 0x38;
    if ((*(int *)(lVar1 + 0x1b0) == *(int *)(*(longlong *)(DAT_180419160 + 0x2150) + 0x18 + lVar3))
       && ((lVar3 = *(longlong *)(*(longlong *)(DAT_180419160 + 0x2150) + lVar3 + 8), lVar3 != 0 &&
           ((*(byte *)(lVar3 + 0x17) & 0x10) != 0)))) {
      uVar2 = FUN_1801167e8(lVar3,lVar1,
                            CONCAT71((uint7)(uint3)((uint)*(int *)(lVar1 + 0x1b0) >> 8),1),0);
      return uVar2;
    }
  }
  return 0;
}

