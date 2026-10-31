/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f9971 */

undefined8 FUN_1801f9971(longlong param_1,ushort param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(code **)(param_1 + 0x2a0) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x2a0))
                      (param_1,*(undefined4 *)
                                (*(longlong *)(param_1 + 0xf8) + (ulonglong)param_2 * 0x10),
                       *(undefined8 *)(param_1 + 0xa0),0);
    if (iVar1 == 0) {
      uVar2 = FUN_1801f99d4(*(undefined8 *)(param_1 + 0xa0),
                            *(undefined4 *)
                             (*(longlong *)(param_1 + 0xf8) + 0xc + (ulonglong)param_2 * 0x10));
      return uVar2;
    }
  }
  return 0;
}

