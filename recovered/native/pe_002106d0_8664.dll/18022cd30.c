/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022cd30 */

longlong FUN_18022cd30(longlong param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  iVar1 = FUN_18022cc9f();
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (uVar5 == 0) {
      uVar3 = 0;
    }
    else {
      param_2 = param_2 + 1;
      uVar3 = (ulonglong)uVar5;
      uVar4 = 0;
      do {
        *(uint *)(lVar2 + uVar4 * 4) =
             (uint)*(byte *)((longlong)param_2 + 2) |
             (uint)*(byte *)((longlong)param_2 + 1) << 8 | (uint)(byte)*param_2 << 0x10;
        param_2 = (uint *)((longlong)param_2 + 5);
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
    *(undefined4 *)(lVar2 + uVar3 * 4) = 0;
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}

