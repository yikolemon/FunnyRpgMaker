/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b1e30 */

ulonglong FUN_1400b1e30(WCHAR *param_1,WCHAR *param_2,longlong param_3)

{
  WCHAR WVar1;
  WCHAR WVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  uint uVar5;
  uint uVar6;
  
  if (DAT_140142c48 != 0) {
    iVar3 = FUN_1400b1e60(param_1,param_2,param_3,(undefined8 *)0x0);
    return CONCAT44(extraout_var,iVar3);
  }
  if ((param_1 != (WCHAR *)0x0) && (param_2 != (WCHAR *)0x0)) {
    if (param_3 != 0) {
      do {
        WVar1 = *param_1;
        uVar5 = (uint)(ushort)WVar1;
        param_1 = param_1 + 1;
        WVar2 = *param_2;
        param_2 = param_2 + 1;
        uVar6 = (uint)(ushort)WVar2;
        if ((uint)(ushort)WVar1 != (uint)(ushort)WVar2) {
          uVar5 = (ushort)WVar1 + 0x20;
          if (0x19 < (ushort)WVar1 - 0x41) {
            uVar5 = (uint)(ushort)WVar1;
          }
          uVar6 = (ushort)WVar2 + 0x20;
          if (0x19 < (ushort)WVar2 - 0x41) {
            uVar6 = (uint)(ushort)WVar2;
          }
        }
      } while (((uVar5 - uVar6 == 0) && (uVar5 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
      return (ulonglong)(uVar5 - uVar6);
    }
    return 0;
  }
  uVar4 = FUN_140096cd0((longlong)param_1,(longlong)param_2);
  return uVar4;
}

