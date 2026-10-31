/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140096a70 */

void FUN_140096a70(WCHAR *param_1,WCHAR *param_2)

{
  WCHAR WVar1;
  WCHAR WVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_140142c48 != 0) {
    FUN_140096aa0(param_1,param_2,(undefined8 *)0x0);
    return;
  }
  if ((param_1 != (WCHAR *)0x0) && (param_2 != (WCHAR *)0x0)) {
    do {
      WVar1 = *param_1;
      uVar3 = (uint)(ushort)WVar1;
      param_1 = param_1 + 1;
      WVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar4 = (uint)(ushort)WVar2;
      if ((uint)(ushort)WVar1 != (uint)(ushort)WVar2) {
        uVar3 = (ushort)WVar1 + 0x20;
        if (0x19 < (ushort)WVar1 - 0x41) {
          uVar3 = (uint)(ushort)WVar1;
        }
        uVar4 = (ushort)WVar2 + 0x20;
        if (0x19 < (ushort)WVar2 - 0x41) {
          uVar4 = (uint)(ushort)WVar2;
        }
      }
    } while ((uVar3 == uVar4) && (uVar3 != 0));
    return;
  }
  FUN_140096cd0((longlong)param_1,(longlong)param_2);
  return;
}

