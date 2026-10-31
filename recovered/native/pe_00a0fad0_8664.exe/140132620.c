/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140132620 */

ulonglong FUN_140132620(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  if (DAT_140354b80 != 0) {
    uVar3 = FUN_140132650();
    return uVar3;
  }
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    if (param_3 != 0) {
      do {
        uVar1 = *param_1;
        uVar4 = (uint)uVar1;
        param_1 = param_1 + 1;
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        uVar5 = (uint)uVar2;
        if ((uint)uVar1 != (uint)uVar2) {
          uVar4 = uVar1 + 0x20;
          if (0x19 < uVar1 - 0x41) {
            uVar4 = (uint)uVar1;
          }
          uVar5 = uVar2 + 0x20;
          if (0x19 < uVar2 - 0x41) {
            uVar5 = (uint)uVar2;
          }
        }
      } while (((uVar4 - uVar5 == 0) && (uVar4 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
      return (ulonglong)(uVar4 - uVar5);
    }
    return 0;
  }
  uVar3 = FUN_140115910();
  return uVar3;
}

