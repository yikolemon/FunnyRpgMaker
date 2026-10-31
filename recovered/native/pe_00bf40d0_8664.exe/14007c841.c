/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007c841 */

ulonglong FUN_14007c841(byte *param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong unaff_RBP;
  ulonglong uVar4;
  
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + -4;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  if (*(short *)(param_1 + 0x78) != 0) {
    uVar3 = 0xffffffff;
    uVar4 = 0;
    do {
      param_1[0x70] = 0;
      param_1[0x71] = 0;
      param_1[0x72] = 0;
      param_1[0x73] = 0;
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      param_1[0x6c] = 0;
      param_1[0x6d] = 0;
      param_1[0x6e] = 0;
      param_1[0x6f] = 0;
      uVar2 = uVar3 + 1;
      uVar3 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x90) + uVar4 * 2);
      uVar1 = FUN_14007cbc6(param_1,uVar2,(ulonglong)uVar3,param_2);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
      if ((char)uVar1 != '\0') goto LAB_14007c935;
      if (*(longlong *)(param_1 + 0x68) != 0) {
        uVar2 = *(uint *)(param_1 + 0x44);
        if (((((*(int *)(param_1 + 4) - 1U & uVar2) == 0) &&
             (*(int *)(param_1 + 0x48) <= (int)uVar2)) && ((int)uVar2 <= *(int *)(param_1 + 0x4c)))
           && (((*(ushort *)(*(longlong *)(param_1 + 0x58) + 0x1c) ^
                *(ushort *)(*(longlong *)(param_1 + 0x68) + 0x1c)) & 8) == 0)) {
          *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -4;
        }
        uVar1 = FUN_14007cf02((longlong)param_1);
        if ((char)uVar1 != '\0') goto LAB_14007c935;
        if (*(longlong *)(param_1 + 0x60) == 0) {
          *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_1 + 0x78));
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_14007cfdb((longlong)param_1);
    }
  }
  unaff_RBP = 0;
LAB_14007c935:
  return unaff_RBP & 0xffffffff;
}

