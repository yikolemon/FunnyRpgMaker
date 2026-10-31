/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016e43a */

undefined8 FUN_18016e43a(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x208);
  if (lVar1 != 0) {
    if (param_1 < 0) {
      param_1 = *(int *)(lVar1 + 0xc);
    }
    uVar2 = FUN_1800eebd5(*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar1 + 0x18),
                          *(undefined4 *)(*(longlong *)(lVar1 + 0x68) + (longlong)param_1 * 0x1c));
    return uVar2;
  }
  return 0;
}

