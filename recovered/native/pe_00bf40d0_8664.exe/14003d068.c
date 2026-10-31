/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003d068 */

void FUN_14003d068(longlong param_1,ushort *param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x3c) < iVar2) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x81;
    }
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar2;
    if (*(int *)(param_1 + 0x324) != 7) {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        param_2 = param_2 + -2;
        if (*param_2 < *(ushort *)(param_1 + 0xe8)) {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x108) + (ulonglong)*param_2);
          *pbVar1 = *pbVar1 ^ 1;
        }
        else if (*(char *)(param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 0x20) = 0x86;
          return;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1a4) = 1;
  return;
}

