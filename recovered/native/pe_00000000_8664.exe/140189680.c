/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189680 */

int FUN_140189680(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_140e625d0;
  do {
    if (*(int *)ppuVar1 == param_1) {
      return *(int *)((longlong)ppuVar1 + 4);
    }
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 != &PTR_s_device_or_resource_busy_140e62870);
  return 0;
}

