/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b1870 */

undefined8 FUN_1400b1870(byte *param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 != 0) {
      if ((param_2 & 0xffffff80) == 0) {
        *param_1 = (byte)param_2;
        return 1;
      }
      if ((param_2 & 0xfffff800) == 0) {
        lVar4 = 1;
        bVar3 = 0xc0;
        lVar5 = lVar4;
      }
      else if ((param_2 & 0xffff0000) == 0) {
        if (param_2 - 0xd800 < 0x800) {
LAB_1400b1907:
          uVar2 = FUN_1400b1914(param_3,param_4);
          return uVar2;
        }
        lVar4 = 2;
        bVar3 = 0xe0;
        lVar5 = lVar4;
      }
      else {
        if (((param_2 & 0xffe00000) != 0) || (0x10ffff < param_2)) goto LAB_1400b1907;
        lVar4 = 3;
        bVar3 = 0xf0;
        lVar5 = lVar4;
      }
      do {
        bVar1 = (byte)param_2;
        param_2 = param_2 >> 6;
        param_1[lVar4] = bVar1 & 0x3f | 0x80;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      *param_1 = bVar3 | (byte)param_2;
      uVar2 = FUN_1400b1928(lVar5 + 1,param_3);
      return uVar2;
    }
    *param_1 = 0;
  }
  *param_3 = 0;
  return 1;
}

