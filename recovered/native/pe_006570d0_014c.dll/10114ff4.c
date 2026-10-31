/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10114ff4 */

void FUN_10114ff4(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  *param_1 = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar1 + 0xc4) >> 0x20) +
                      ((float)((ulonglong)*(undefined8 *)(iVar1 + 0x144) >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(iVar1 + 0x50) >> 0x20)),
                      (float)*(undefined8 *)(iVar1 + 0xc4) +
                      ((float)*(undefined8 *)(iVar1 + 0x144) - (float)*(undefined8 *)(iVar1 + 0x50))
                     );
  return;
}

