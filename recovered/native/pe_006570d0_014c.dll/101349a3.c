/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101349a3 */

undefined4 __fastcall FUN_101349a3(byte *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  undefined4 in_EAX;
  undefined3 uVar2;
  
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    uVar2 = (undefined3)((uint)in_EAX >> 8);
    if (*param_1 < bVar1) goto LAB_101349bb;
  }
  if (param_3 != (byte *)0x0) {
    bVar1 = *param_3;
    uVar2 = (undefined3)((uint)param_3 >> 8);
    if (bVar1 < *param_1) {
LAB_101349bb:
      *param_1 = bVar1;
      return CONCAT31(uVar2,1);
    }
  }
  return 0;
}

