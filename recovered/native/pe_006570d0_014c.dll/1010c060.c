/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010c060 */

void FUN_1010c060(undefined8 *param_1)

{
  *param_1 = CONCAT44((float)((ulonglong)*(undefined8 *)(DAT_1039d74c + 0x1e94) >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(DAT_1039d74c + 0x1e8c) >> 0x20),
                      (float)*(undefined8 *)(DAT_1039d74c + 0x1e94) -
                      (float)*(undefined8 *)(DAT_1039d74c + 0x1e8c));
  return;
}

