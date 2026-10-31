/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cad70 */

undefined8 FUN_1400cad70(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(int *)(DAT_140f2a910 + 0x2158) < *(int *)(DAT_140f2a910 + 0x2148)) &&
     (lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608), (*(byte *)(lVar1 + 0x17) & 0x10) == 0)) {
    lVar3 = (longlong)*(int *)(DAT_140f2a910 + 0x2158) * 0x38;
    if ((*(int *)(lVar1 + 0x1b0) == *(int *)(*(longlong *)(DAT_140f2a910 + 0x2150) + 0x18 + lVar3))
       && ((lVar3 = *(longlong *)(*(longlong *)(DAT_140f2a910 + 0x2150) + lVar3 + 8), lVar3 != 0 &&
           ((*(byte *)(lVar3 + 0x17) & 0x10) != 0)))) {
      uVar2 = FUN_14008fb00(lVar3,lVar1,
                            CONCAT71((uint7)(uint3)((uint)*(int *)(lVar1 + 0x1b0) >> 8),1),0);
      return uVar2;
    }
  }
  return 0;
}

