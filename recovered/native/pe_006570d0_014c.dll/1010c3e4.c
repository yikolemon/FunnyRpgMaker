/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010c3e4 */

void FUN_1010c3e4(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar2 = 0x274;
  if ((*(int *)(iVar1 + 0x1e8) == 0) && (*(int *)(DAT_1039d74c + 0x2308) == 0)) {
    iVar2 = 0x2a4;
  }
  *param_1 = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar1 + iVar2) >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(iVar1 + 0x144) >> 0x20),
                      (float)*(undefined8 *)(iVar1 + iVar2) - (float)*(undefined8 *)(iVar1 + 0x144))
  ;
  return;
}

