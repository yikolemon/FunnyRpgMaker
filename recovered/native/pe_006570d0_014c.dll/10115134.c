/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115134 */

void FUN_10115134(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x50);
  uVar2 = *(undefined8 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x154);
  *param_1 = CONCAT44((float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar1 >> 0x20),
                      (float)uVar2 - (float)uVar1);
  return;
}

