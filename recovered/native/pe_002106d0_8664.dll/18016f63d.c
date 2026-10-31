/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016f63d */

void FUN_18016f63d(int param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  uVar2 = (param_3 ^ 1) & 0xff;
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1608) + 0x208);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x10) == param_1) && (*(uint *)(lVar1 + 4) == uVar2)) {
      return;
    }
    FUN_18016f201();
  }
  if (param_1 == 1) {
    return;
  }
  FUN_18016eb74(param_2,param_1,uVar2);
  return;
}

