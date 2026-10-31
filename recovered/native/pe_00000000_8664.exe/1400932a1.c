/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400932a1 */

void FUN_1400932a1(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x60);
  uVar2 = *(undefined8 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x168);
  *param_1 = CONCAT44((float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar1 >> 0x20),
                      (float)uVar2 - (float)uVar1);
  return;
}

