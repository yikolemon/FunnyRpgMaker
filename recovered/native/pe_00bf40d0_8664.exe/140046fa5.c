/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140046fa5 */

int FUN_140046fa5(longlong param_1,ushort param_2)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x2a0) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x2a0))
                      (param_1,*(undefined4 *)
                                (*(longlong *)(param_1 + 0xf8) + (ulonglong)param_2 * 0x10),
                       *(undefined8 *)(param_1 + 0xa0),0);
    if (iVar1 == 0) {
      iVar1 = FUN_140047008(*(longlong **)(param_1 + 0xa0),
                            *(uint *)(*(longlong *)(param_1 + 0xf8) + 0xc +
                                     (ulonglong)param_2 * 0x10));
      return iVar1;
    }
  }
  return 0;
}

