/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266d3f */

undefined4 __thiscall FUN_10266d3f(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (param_3 == 0xffffffff) goto LAB_10266d88;
  if (param_2 == 0) {
LAB_10266d84:
    uVar1 = 1;
  }
  else {
    if (param_2 == 1) {
      if (((int)param_3 < 9) || (0xd < (int)param_3)) {
        bVar2 = param_3 == 0x20;
        goto LAB_10266d82;
      }
    }
    else if (param_2 == 8) {
      bVar2 = (*(byte *)(((param_3 & 0xff) >> 3) + 0x44 + param_1) &
              (byte)(1 << ((byte)param_3 & 7))) == 0;
LAB_10266d82:
      if (!bVar2) goto LAB_10266d84;
    }
LAB_10266d88:
    uVar1 = 0;
  }
  return uVar1;
}

