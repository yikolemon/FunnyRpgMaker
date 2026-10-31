/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022f201 */

ulonglong FUN_18022f201(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong unaff_RBP;
  ulonglong uVar5;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + -4;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  if (*(short *)(param_1 + 0x78) != 0) {
    uVar4 = 0xffffffff;
    uVar5 = 0;
    do {
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      iVar3 = uVar4 + 1;
      uVar4 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x90) + uVar5 * 2);
      cVar2 = FUN_18022f586(param_1,iVar3,uVar4,param_2);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
      if (cVar2 != '\0') goto LAB_18022f2f5;
      if (*(longlong *)(param_1 + 0x68) != 0) {
        uVar1 = *(uint *)(param_1 + 0x44);
        if (((((*(int *)(param_1 + 4) - 1U & uVar1) == 0) &&
             (*(int *)(param_1 + 0x48) <= (int)uVar1)) && ((int)uVar1 <= *(int *)(param_1 + 0x4c)))
           && (((*(ushort *)(*(longlong *)(param_1 + 0x58) + 0x1c) ^
                *(ushort *)(*(longlong *)(param_1 + 0x68) + 0x1c)) & 8) == 0)) {
          *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -4;
        }
        cVar2 = FUN_18022f8c2(param_1);
        if (cVar2 != '\0') goto LAB_18022f2f5;
        if (*(longlong *)(param_1 + 0x60) == 0) {
          *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(param_1 + 0x78));
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_18022f99b(param_1);
    }
  }
  unaff_RBP = 0;
LAB_18022f2f5:
  return unaff_RBP & 0xffffffff;
}

