/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408beae6 */

longlong FUN_1408beae6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0001408beaee */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)((ulonglong)uVar1 * 4 + 0x10266c62))();
    return lVar2;
  }
  return (ulonglong)(uint3)(uVar1 >> 8) << 8;
}

